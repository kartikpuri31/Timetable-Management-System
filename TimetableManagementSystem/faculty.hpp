#ifndef FACULTY_HPP
#define FACULTY_HPP

#include <string>
#include <vector>
using namespace std;

class Faculty
{
private:
    int facultyid;
    string name;
    vector<int> availableslots;

public:
    Faculty(int facultyid, string name, vector<int> availableslots);

    int getFacultyId() const;
    string getName() const;
    vector<int> getAvailableSlots() const;

    void setAvailableSlots(vector<int> slots);
    void displayFaculty() const;
};

#endif
