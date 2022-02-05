
#include "ElectionResultsDatabase.hpp"

void ElectionResultsDatabase::addResultsFromFile(const char* filename) {
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        return;
    }

    inputFile >> *this;
}

int ElectionResultsDatabase::numberOfSections() const {
    return votes.size();
}

int ElectionResultsDatabase::votesForParty(Party party) const {

    int sum = 0;
    for (int i = 0 ; i < votes.size() ; i++) {
        sum+=votes[i].votesForParty(party);
    }
    return sum;
}

Party ElectionResultsDatabase::winningParty() const {
    if (ElectionResultsDatabase::votesForParty(PARTY1) >= ElectionResultsDatabase::votesForParty(PARTY2) &&
        ElectionResultsDatabase::votesForParty(PARTY1) >= ElectionResultsDatabase::votesForParty(PARTY3)) {
        return Party::PARTY1;
    }
    if (ElectionResultsDatabase::votesForParty(PARTY2) > ElectionResultsDatabase::votesForParty(PARTY1) &&
        ElectionResultsDatabase::votesForParty(PARTY2) >= ElectionResultsDatabase::votesForParty(PARTY3)) {
        return Party::PARTY2;
    }
    if (ElectionResultsDatabase::votesForParty(PARTY3) > ElectionResultsDatabase::votesForParty(PARTY1) &&
        ElectionResultsDatabase::votesForParty(PARTY3) > ElectionResultsDatabase::votesForParty(PARTY2)) {
        return Party::PARTY3;
    }
}
std::istream& operator>>(std::istream& input, ElectionResultsDatabase& database) {
    SectionVotes vote;
    while (input >> vote) {
        database.votes.push_back(vote);
    }
    return input;
}
std::ostream& operator<<(std::ostream& output, const ElectionResultsDatabase& database) {
    for (int i = 0 ; i < database.numberOfSections(); i++) {
        output << database.votes[i] << " ";
    }
    return output;
}
