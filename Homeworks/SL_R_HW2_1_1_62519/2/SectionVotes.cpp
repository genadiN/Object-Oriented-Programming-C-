
#include "SectionVotes.hpp"

SectionVotes::SectionVotes() {
	first = 0;
	second = 0;
	third = 0;
}

SectionVotes::SectionVotes(int party1Votes, int party2Votes, int party3Votes) {
	first = party1Votes;
	second = party2Votes;
    third = party3Votes;
}

int SectionVotes::votesForParty(Party party) const{
	if (party == Party::PARTY1) {
		return first;
	}
	if (party == Party::PARTY2) {
		return second;
	}
	if (party == Party::PARTY3) {
		return third;
	}
}

std::istream& operator>>(std::istream& input, SectionVotes& parties)
{
	int first, second, third;
	input >> first >> second >> third;
	parties = SectionVotes(first, second, third);
	return input;
}

std::ofstream& operator<<(std::ofstream& output, const SectionVotes& p) {

	output << p.first << " " << p.second << " " << p.third;
	return output;
}
