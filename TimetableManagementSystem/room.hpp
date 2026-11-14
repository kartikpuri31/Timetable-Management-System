
#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
using namespace std;

class Room
{
private:
    int roomid;
    string roomname;
    int capacity;
    bool available;

public:
    Room(int roomid, string roomname, int capacity);

    int getRoomId() const;
    string getRoomName() const;
    int getCapacity() const;
    bool isAvailable() const;

    void setAvailability(bool status);
    void displayRoom() const;
};

#endif
