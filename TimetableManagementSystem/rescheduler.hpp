
#ifndef RESCHEDULER_HPP
#define RESCHEDULER_HPP

#include "datamanager.hpp"
#include "conflictdetector.hpp"

class Rescheduler
{
public:
    void rescheduleFaculty(int facultyid, int slotid, DataManager& dm);

    void rescheduleRoom(int roomid, int slotid, DataManager& dm);

    void rescheduleTimeSlot(int slotid, int newSlot,
                            DataManager& dm, ConflictDetector& cd);
};

#endif
