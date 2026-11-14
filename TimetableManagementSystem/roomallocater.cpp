
#include "roomallocater.hpp"
#include <iostream>
using namespace std;

int RoomAllocator::findSuitableRoom(Subject s, Timeslot t, DataManager& dm)
{
    vector<Room> rooms = dm.getRooms();
    vector<Assignment> assignments = dm.getAssignments();

    int bestRoomId = -1;
    int minimumCapacity = 999999;

    for (Room& r : rooms)
    {
        if (r.getCapacity() < s.getStudents())
            continue;

        if (r.getCapacity() < minimumCapacity)
        {
            bool occupied = false;

            for (Assignment& a : assignments)
            {
                if (a.getRoomId() == r.getRoomId() &&
                    a.getSlotId() == t.getSlotId())
                {
                    occupied = true;
                    break;
                }
            }

            if (!occupied)
            {
                minimumCapacity = r.getCapacity();
                bestRoomId = r.getRoomId();
            }
        }
    }

    return bestRoomId;
}

void RoomAllocator::allocateRooms(DataManager& dm)
{
    vector<Assignment> assignments = dm.getAssignments();
    vector<Subject> subjects = dm.getSubjects();
    vector<Timeslot> slots = dm.getTimeSlots();

    cout << "\nAllocating Rooms:\n";

    for (Assignment& a : assignments)
    {
        for (Subject& s : subjects)
        {
            if (a.getSubjectId() == s.getId())
            {
                for (Timeslot& t : slots)
                {
                    if (a.getSlotId() == t.getSlotId())
                    {
                        int roomId = findSuitableRoom(s, t, dm);

                        if (roomId != -1)
                        {
                            dm.updateAssignmentRoom(
                                a.getSubjectId(), roomId
                            );

                            cout << "Room " << roomId
                                 << " allocated to Subject "
                                 << a.getSubjectId() << endl;
                        }
                        else
                        {
                            cout << "No suitable room for Subject "
                                 << a.getSubjectId() << endl;
                        }

                        break;
                    }
                }

                break;
            }
        }
    }
}
