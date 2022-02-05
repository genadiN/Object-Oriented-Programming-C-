
#pragma once
#include<vector>
#include<iostream>
#include<fstream>
#include "SectionVotes.hpp"

class ElectionResultsDatabase
{
    std::vector<SectionVotes> votes;

public:

    void addResultsFromFile(const char* filename);

    int numberOfSections() const;

    int votesForParty(Party) const;

    Party winningParty() const;

    friend std::istream& operator>>(std::istream&, ElectionResultsDatabase&);
    friend std::ostream& operator<<(std::ostream& output, const ElectionResultsDatabase&);

};
