#ifndef CLASSNAME_HPP
#define CLASSNAME_HPP
#include <string>
#include <vector>
using namespace std;

class Subject
{
private:
    int id;
    string name;
    int facultyid;
    int sectionid;
    int students;
    int duration;

public:
    Subject(int id, string name, int facultyid, int sectionid,
            int students, int duration);

    int getId() const;
    string getName() const;
    int getFacultyId() const;
    int getSectionId() const;
    int getStudents() const;
    int getDuration() const;
};

#endif
