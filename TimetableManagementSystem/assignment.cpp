
#include "assignment.hpp"
#include <iostream>
using namespace std;

Assignment::Assignment(int subjectid, int facultyid, int sectionid,
                       int roomid, int slotid)
{
    this->subjectid = subjectid;
    this->facultyid = facultyid;
    this->sectionid = sectionid;
    this->roomid = roomid;
    this->slotid = slotid;
}

int Assignment::getSubjectId() const
{
    return subjectid;
}

int Assignment::getFacultyId() const
{
    return facultyid;
}

int Assignment::getSectionId() const
{
    return sectionid;
}

int Assignment::getRoomId() const
{
    return roomid;
}

int Assignment::getSlotId() const
{
    return slotid;
}

void Assignment::setRoomId(int roomid)
{
    this->roomid = roomid;
}

void Assignment::setSlotId(int slotid)
{
    this->slotid = slotid;
}

void Assignment::displayAssignment() const
{
    cout << "Subject ID: " << subjectid << endl;
    cout << "Faculty ID: " << facultyid << endl;
    cout << "Section ID: " << sectionid << endl;
    cout << "Room ID: " << roomid << endl;
    cout << "Slot ID: " << slotid << endl;
}
