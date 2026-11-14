
#include "subject.hpp"

Subject::Subject(int id, string name, int facultyid, int sectionid,
                 int students, int duration)
{
    this->id = id;
    this->name = name;
    this->facultyid = facultyid;
    this->sectionid = sectionid;
    this->students = students;
    this->duration = duration;
}

int Subject::getId() const
{
    return id;
}

string Subject::getName() const
{
    return name;
}

int Subject::getFacultyId() const
{
    return facultyid;
}

int Subject::getSectionId() const
{
    return sectionid;
}

int Subject::getStudents() const
{
    return students;
}

int Subject::getDuration() const
{
    return duration;
}
