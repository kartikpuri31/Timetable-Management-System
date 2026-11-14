
#ifndef QUALITYANALYZER_HPP
#define QUALITYANALYZER_HPP

#include "datamanager.hpp"

class QualityAnalyzer
{
public:
    void analyzeQuality(DataManager& dm);
    double calculateRoomUtilization(DataManager& dm);
    double calculateFacultyUtilization(DataManager& dm);
    void displayQualityReport(DataManager& dm);
};

#endif
