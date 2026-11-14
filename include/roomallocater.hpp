

#ifndef ROOMALLOCATOR_HPP
#define ROOMALLOCATOR_HPP

#include "datamanager.hpp"

class RoomAllocator
{
public:
    int findSuitableRoom(Subject s, Timeslot t, DataManager& dm);

    void allocateRooms(DataManager& dm);
};

#endif
