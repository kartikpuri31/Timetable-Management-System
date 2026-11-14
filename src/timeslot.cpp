

#include "timeslot.hpp"
#include <iostream>
using namespace std;

Timeslot::Timeslot(int slotid, int starttime, int endtime)
{
    this->slotid = slotid;
    this->starttime = starttime;
    this->endtime = endtime;
}

int Timeslot::getSlotId() const
{
    return slotid;
}

int Timeslot::getStartTime() const
{
    return starttime;
}

int Timeslot::getEndTime() const
{
    return endtime;
}

bool Timeslot::overlaps(const Timeslot& other) const
{
    return starttime < other.endtime && other.starttime < endtime;
}

void Timeslot::displaySlot() const
{
    cout << "Slot ID: " << slotid << endl;
    cout << "Start Time: " << starttime << endl;
    cout << "End Time: " << endtime << endl;
}