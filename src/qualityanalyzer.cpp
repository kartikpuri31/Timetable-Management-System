

#include "qualityanalyzer.hpp"
#include <iostream>
using namespace std;

void QualityAnalyzer::analyzeQuality(DataManager& dm)
{
    cout << "\n===== TIMETABLE QUALITY ANALYSIS =====\n";

    cout << "Room Utilization: "
         << calculateRoomUtilization(dm) << "%" << endl;

    cout << "Faculty Utilization: "
         << calculateFacultyUtilization(dm) << "%" << endl;

    displayQualityReport(dm);
}

double QualityAnalyzer::calculateRoomUtilization(DataManager& dm)
{
    vector<Assignment> assignments = dm.getAssignments();

    int allocatedRooms = 0;

    for (int i = 0; i < assignments.size(); i++)
    {
        if (assignments[i].getRoomId() != -1)
        {
            allocatedRooms++;
        }
    }

    if (assignments.empty())
    {
        return 0;
    }

    return (allocatedRooms * 100.0) / assignments.size();
}

double QualityAnalyzer::calculateFacultyUtilization(DataManager& dm)
{
    vector<Assignment> assignments = dm.getAssignments();

    int assignedSlots = 0;

    for (int i = 0; i < assignments.size(); i++)
    {
        if (assignments[i].getSlotId() != -1)
        {
            assignedSlots++;
        }
    }

    if (assignments.empty())
    {
        return 0;
    }

    return (assignedSlots * 100.0) / assignments.size();
}

void QualityAnalyzer::displayQualityReport(DataManager& dm)
{
    vector<Assignment> assignments = dm.getAssignments();

    int total = assignments.size();
    int completed = 0;

    for (int i = 0; i < assignments.size(); i++)
    {
        if (assignments[i].getRoomId() != -1 &&
            assignments[i].getSlotId() != -1)
        {
            completed++;
        }
    }

    cout << "\nTotal Assignments: " << total << endl;
    cout << "Completed Assignments: " << completed << endl;
    cout << "Pending Assignments: " << total - completed << endl;

    if (total > 0)
    {
        cout << "Overall Completion: "
             << (completed * 100.0) / total << "%" << endl;
    }
}
