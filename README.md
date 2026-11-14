# GREEDY-INTERVAL-AI-BASED-TIMETABLE-AND-MEETING-ROOM-CONFLICT-DETECTOR
C++ OOP,DS Based Automated Timetable Management System using Graph Coloring

1. Project Overview

The C++ Timetable Management System is designed to generate and manage academic timetables while considering conflicts between faculty members, student sections, classrooms, and time slots.

The project uses Object-Oriented Programming concepts and graph-based techniques to organize timetable assignments.

2. Features

Subject, faculty, classroom and time-slot management.

Conflict detection between timetable assignments.

Graph representation of conflicts.

Greedy graph coloring for timetable generation.

Automatic classroom allocation based on room capacity.

Faculty, room and time-slot rescheduling.

Timetable quality analysis and assignment completion reports.

3. Technologies Used

Programming Language: C++

Concepts: Object-Oriented Programming

Data Structures: Vectors and Graphs

Algorithm: Greedy Graph Coloring

IDE: Code::Blocks

4. Project Structure

Timetable-Management-System/
│
├── include/
│   ├── subject.hpp
│   ├── faculty.hpp
│   ├── room.hpp
│   ├── timeslot.hpp
│   ├── assignment.hpp
│   ├── datamanager.hpp
│   ├── graph.hpp
│   ├── conflictdetector.hpp
│   ├── timetablegenerator.hpp
│   ├── roomallocator.hpp
│   ├── rescheduler.hpp
│   └── qualityanalyzer.hpp
│
├── src/
│   ├── main.cpp
│   ├── subject.cpp
│   ├── faculty.cpp
│   ├── room.cpp
│   ├── timeslot.cpp
│   ├── assignment.cpp
│   ├── datamanager.cpp
│   ├── graph.cpp
│   ├── conflictdetector.cpp
│   ├── timetablegenerator.cpp
│   ├── roomallocator.cpp
│   ├── rescheduler.cpp
│   └── qualityanalyzer.cpp
│
├── README.md
├── .gitignore
└── Timetable-Management-System.cbp

5. Main Modules

DataManager: Stores and manages project data.

Graph: Represents conflicts between assignments.

ConflictDetector: Identifies conflicts between timetable assignments.

TimetableGenerator: Generates timetable slots using greedy graph coloring.

RoomAllocator: Allocates suitable classrooms based on capacity and availability.

Rescheduler: Handles changes to faculty, room and time-slot assignments.

QualityAnalyzer: Calculates assignment completion and generates a quality report.

6. How to Run

Open the project .cbp file in Code::Blocks.

Build the project using Ctrl + F9.

Run the project using F9.

View the generated timetable and quality analysis in the console.

7. Future Scope

Database integration for persistent storage.

Graphical user interface.

Support for larger datasets.

Improved timetable optimization.

Exporting timetables to PDF or Excel.

8. Conclusion

The project demonstrates the application of Object-Oriented Programming, graph representation, greedy algorithms and conflict detection in academic timetable management.