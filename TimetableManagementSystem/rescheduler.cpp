
#include "rescheduler.hpp"
#include <iostream>
using namespace std;

void Rescheduler::rescheduleFaculty(int facultyid, int slotid,
                                    DataManager& dm)
{
    vector<Assignment> assignments = dm.getAssignments();

    for (int i = 0; i < assignments.size(); i++)
    {
        if (assignments[i].getFacultyId() == facultyid &&
            assignments[i].getSlotId() == slotid)
        {
            cout << "Rescheduling Subject "
                 << assignments[i].getSubjectId() << endl;

            dm.updateAssignmentSlot(
                assignments[i].getSubjectId(), -1
            );
        }
    }
}

void Rescheduler::rescheduleRoom(int roomid, int slotid,
                                 DataManager& dm)
{
    vector<Assignment> assignments = dm.getAssignments();

    for (int i = 0; i < assignments.size(); i++)
    {
        if (assignments[i].getRoomId() == roomid &&
            assignments[i].getSlotId() == slotid)
        {
            cout << "Rescheduling Subject "
                 << assignments[i].getSubjectId() << endl;

            dm.updateAssignmentRoom(
                assignments[i].getSubjectId(), -1
            );
        }
    }
}

void Rescheduler::rescheduleTimeSlot(int slotid, int newSlot,
                                     DataManager& dm,
                                     ConflictDetector& cd)
{
    vector<Assignment> assignments = dm.getAssignments();

    for (int i = 0; i < assignments.size(); i++)
    {
        if (assignments[i].getSlotId() == slotid)
        {
            Assignment candidate = assignments[i];
            candidate.setSlotId(newSlot);

            bool conflict = false;

            for (int j = 0; j < assignments.size(); j++)
            {
                if (i != j && cd.checkconflict(candidate, assignments[j], dm))
                {
                    conflict = true;
                    break;
                }
            }

            if (!conflict)
            {
                dm.updateAssignmentSlot(
                    assignments[i].getSubjectId(), newSlot
                );

                cout << "Subject "
                     << assignments[i].getSubjectId()
                     << " rescheduled to Slot "
                     << newSlot << endl;
            }
            else
            {
                cout << "Cannot reschedule Subject "
                     << assignments[i].getSubjectId()
                     << " due to conflict." << endl;
            }
        }
    }
}
