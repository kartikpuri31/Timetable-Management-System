
#include "room.hpp"
#include <iostream>
using namespace std;

Room::Room(int roomid, string roomname, int capacity)
{
    this->roomid = roomid;
    this->roomname = roomname;
    this->capacity = capacity;
    this->available = true;
}

int Room::getRoomId() const
{
    return roomid;
}

string Room::getRoomName() const
{
    return roomname;
}

int Room::getCapacity() const
{
    return capacity;
}

bool Room::isAvailable() const
{
    return available;
}

void Room::setAvailability(bool status)
{
    available = status;
}

void Room::displayRoom() const
{
    cout << "Room ID: " << roomid << endl;
    cout << "Room Name: " << roomname << endl;
    cout << "Capacity: " << capacity << endl;
    cout << "Available: " << (available ? "Yes" : "No") << endl;
}
