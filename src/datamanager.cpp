#include "datamanager.hpp"
#include <iostream>
using namespace std;

void DataManager::addSubject(Subject s)
{
    subjects.push_back(s);
}

void DataManager::addFaculty(Faculty f)
{
    faculties.push_back(f);
}

void DataManager::addRoom(Room r)
{
    rooms.push_back(r);
}

void DataManager::addTimeSlot(Timeslot t)
{
    slots.push_back(t);
}

void DataManager::addAssignment(Assignment a)
{
    assignments.push_back(a);
}

void DataManager::updateAssignmentRoom(int subjectId, int roomId)
{
    for (int i = 0; i < assignments.size(); i++)
    {
        if (assignments[i].getSubjectId() == subjectId)
        {
            assignments[i].setRoomId(roomId);
            return;
        }
    }
}

void DataManager::updateAssignmentSlot(int subjectId, int slotId)
{
    for (int i = 0; i < assignments.size(); i++)
    {
        if (assignments[i].getSubjectId() == subjectId)
        {
            assignments[i].setSlotId(slotId);
            return;
        }
    }
}

vector<Subject> DataManager::getSubjects() const
{
    return subjects;
}

vector<Faculty> DataManager::getFaculties() const
{
    return faculties;
}

vector<Room> DataManager::getRooms() const
{
    return rooms;
}

vector<Timeslot> DataManager::getTimeSlots() const
{
    return slots;
}

vector<Assignment> DataManager::getAssignments() const
{
    return assignments;
}

void DataManager::displaySubjects() const
{
    for (const Subject& s : subjects)
    {
        cout << "Subject ID: " << s.getId() << endl;
        cout << "Subject Name: " << s.getName() << endl;
    }
}

void DataManager::displayFaculties() const
{
    for (const Faculty& f : faculties)
    {
        f.displayFaculty();
    }
}

void DataManager::displayRooms() const
{
    for (const Room& r : rooms)
    {
        r.displayRoom();
    }
}

void DataManager::displayTimeSlots() const
{
    for (const Timeslot& t : slots)
    {
        t.displaySlot();
    }
}

void DataManager::displayAssignments() const
{
    for (const Assignment& a : assignments)
    {
        a.displayAssignment();
    }
}

