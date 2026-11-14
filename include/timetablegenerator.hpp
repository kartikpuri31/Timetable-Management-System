

#ifndef TIMETABLEGENERATOR_HPP
#define TIMETABLEGENERATOR_HPP

#include "datamanager.hpp"
#include "graph.hpp"

class TimetableGenerator
{
public:
    void generateTimetable(DataManager& dm, Graph& graph);
};

#endif
