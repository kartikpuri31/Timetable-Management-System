
#ifndef CONFLICTDETECTOR_HPP
#define CONFLICTDETECTOR_HPP

#include "assignment.hpp"
#include "datamanager.hpp"
#include "graph.hpp"

class ConflictDetector
{
public:
    bool checkconflict(Assignment a1, Assignment a2, DataManager& dm);

    void detectAllConflicts(DataManager& dm, Graph& graph);
};

#endif
