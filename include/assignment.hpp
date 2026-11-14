
#ifndef ASSIGNMENT_HPP
#define ASSIGNMENT_HPP

class Assignment
{
private:
    int subjectid;
    int facultyid;
    int sectionid;
    int roomid;
    int slotid;

public:
    Assignment(int subjectid, int facultyid, int sectionid,
               int roomid, int slotid);

    int getSubjectId() const;
    int getFacultyId() const;
    int getSectionId() const;
    int getRoomId() const;
    int getSlotId() const;

    void setRoomId(int roomid);
    void setSlotId(int slotid);

    void displayAssignment() const;
};

#endif
