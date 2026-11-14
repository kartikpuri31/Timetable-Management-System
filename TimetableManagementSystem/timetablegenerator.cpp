
#include "timetablegenerator.hpp"
#include <iostream>
using namespace std;

void TimetableGenerator::generateTimetable(DataManager& dm, Graph& graph)
{
    vector<int> colors = graph.greedyColoring();

    vector<Assignment> assignments = dm.getAssignments();
    vector<Timeslot> slots = dm.getTimeSlots();

    cout << "\nGenerating Timetable:\n";

    if (slots.empty())
    {
        cout << "No timeslots available.\n";
        return;
    }

    for (int i = 0; i < assignments.size(); i++)
    {
        if (i >= colors.size() || colors[i] >= slots.size())
        {
            cout << "No available timeslot for Subject "
                 << assignments[i].getSubjectId() << endl;
            continue;
        }

        int slotId = slots[colors[i]].getSlotId();

        dm.updateAssignmentSlot(
            assignments[i].getSubjectId(), slotId
        );
    }

    cout << "Timetable generated successfully.\n";
}
