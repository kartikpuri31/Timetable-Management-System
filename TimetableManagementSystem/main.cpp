#include <iostream>
#include "subject.hpp"
#include "faculty.hpp"
#include "room.hpp"
#include "timeslot.hpp"
#include "assignment.hpp"
#include "datamanager.hpp"
#include "graph.hpp"
#include "conflictdetector.hpp"
#include "timetablegenerator.hpp"
#include "roomallocater.hpp"
#include "rescheduler.hpp"
#include "qualityanalyzer.hpp"

using namespace std;

int main()
{
    DataManager dm;

    dm.addSubject(Subject(101, "DSA", 1, 1, 60, 60));
    dm.addSubject(Subject(102, "DBMS", 1, 2, 50, 60));
    dm.addSubject(Subject(103, "OOPS", 2, 1, 55, 60));

    dm.addFaculty(Faculty(1, "Amit", {1, 2, 3}));
    dm.addFaculty(Faculty(2, "Rahul", {1, 2, 3}));

    dm.addRoom(Room(201, "R101", 80));
    dm.addRoom(Room(202, "R102", 60));

    dm.addTimeSlot(Timeslot(1, 540, 600));
    dm.addTimeSlot(Timeslot(2, 600, 660));
    dm.addTimeSlot(Timeslot(3, 660, 720));

    dm.addAssignment(Assignment(101, 1, 1, -1, 1));
    dm.addAssignment(Assignment(102, 1, 2, -1, 1));
    dm.addAssignment(Assignment(103, 2, 1, -1, 1));

    Graph graph(3);

    ConflictDetector cd;
    cd.detectAllConflicts(dm, graph);

    TimetableGenerator tg;
    tg.generateTimetable(dm, graph);

    RoomAllocator ra;
    ra.allocateRooms(dm);

    cout << "\n===== FINAL TIMETABLE =====\n";
    dm.displayAssignments();

    QualityAnalyzer qa;
    qa.analyzeQuality(dm);

    return 0;
}
