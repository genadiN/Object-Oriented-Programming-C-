
#pragma once
#include<iostream>

enum Party
{
    PARTY1 = 0,
    PARTY2 = 1,
    PARTY3 = 2,
};

class SectionVotes
{
    int first;
    int second;
    int third;

public:

    SectionVotes();
    SectionVotes(int party1Votes, int party2Votes, int party3Votes);

    int votesForParty(Party) const;

    friend std::istream& operator>>(std::istream&, SectionVotes&);
    friend std::ostream& operator<<(std::ostream& output, const SectionVotes&);
};
