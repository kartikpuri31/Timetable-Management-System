
#include "faculty.hpp"
#include <iostream>
using namespace std;

Faculty::Faculty(int facultyid, string name, vector<int> availableslots)
{
    this->facultyid = facultyid;
    this->name = name;
    this->availableslots = availableslots;
}

int Faculty::getFacultyId() const
{
    return facultyid;
}

string Faculty::getName() const
{
    return name;
}

vector<int> Faculty::getAvailableSlots() const
{
    return availableslots;
}

void Faculty::setAvailableSlots(vector<int> slots)
{
    availableslots = slots;
}

void Faculty::displayFaculty() const
{
    cout << "Faculty ID: " << facultyid << endl;
    cout << "Name: " << name << endl;

    cout << "Available Slots: ";
    for (int slot : availableslots)
    {
        cout << slot << " ";
    }

    cout << endl;
}
