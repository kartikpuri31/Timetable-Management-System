

#ifndef DATAMANAGER_HPP
#define DATAMANAGER_HPP

#include "subject.hpp"
#include "faculty.hpp"
#include "room.hpp"
#include "timeslot.hpp"
#include "assignment.hpp"

#include <vector>
using namespace std;

class DataManager
{
private:
    vector<Subject> subjects;
    vector<Faculty> faculties;
    vector<Room> rooms;
    vector<Timeslot> slots;
    vector<Assignment> assignments;

public:
    void addSubject(Subject s);
    void addFaculty(Faculty f);
    void addRoom(Room r);
    void addTimeSlot(Timeslot t);
    void addAssignment(Assignment a);

    void updateAssignmentRoom(int subjectId, int roomId);
    void updateAssignmentSlot(int subjectId, int slotId);

    vector<Subject> getSubjects() const;
    vector<Faculty> getFaculties() const;
    vector<Room> getRooms() const;
    vector<Timeslot> getTimeSlots() const;
    vector<Assignment> getAssignments() const;

    void displaySubjects() const;
    void displayFaculties() const;
    void displayRooms() const;
    void displayTimeSlots() const;
    void displayAssignments() const;
};

#endif
