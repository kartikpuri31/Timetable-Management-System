

#include "conflictdetector.hpp"
#include <iostream>
using namespace std;

bool ConflictDetector::checkconflict(Assignment a1, Assignment a2,
                                     DataManager& dm)
{
    if (a1.getFacultyId() == a2.getFacultyId() &&
        a1.getSlotId() == a2.getSlotId())
    {
        return true;
    }

    if (a1.getSectionId() == a2.getSectionId() &&
        a1.getSlotId() == a2.getSlotId())
    {
        return true;
    }

    if (a1.getRoomId() != -1 &&
        a1.getRoomId() == a2.getRoomId() &&
        a1.getSlotId() == a2.getSlotId())
    {
        return true;
    }

    return false;
}

void ConflictDetector::detectAllConflicts(DataManager& dm, Graph& graph)
{
    vector<Assignment> assignments = dm.getAssignments();

    for (int i = 0; i < assignments.size(); i++)
    {
        for (int j = i + 1; j < assignments.size(); j++)
        {
            if (checkconflict(assignments[i], assignments[j], dm))
            {
                graph.addEdge(i, j);

                cout << "Conflict detected between Subject "
                     << assignments[i].getSubjectId()
                     << " and Subject "
                     << assignments[j].getSubjectId()
                     << endl;
            }
        }
    }
}
