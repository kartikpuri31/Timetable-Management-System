

#ifndef TIMESLOT_HPP
#define TIMESLOT_HPP

class Timeslot
{
private:
    int slotid;
    int starttime;
    int endtime;

public:
    Timeslot(int slotid, int starttime, int endtime);

    int getSlotId() const;
    int getStartTime() const;
    int getEndTime() const;

    bool overlaps(const Timeslot& other) const;
    void displaySlot() const;
};

#endif
