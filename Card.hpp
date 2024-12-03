#ifndef CARD_HPP
#define CARD_HPP

#include "SharedData.hpp"

// HEARTS and DIAMONDS are always Red cards
// SPADES and CLUBS are always Black cards
enum CardSuit
{
	HEARTS,
	DIAMONDS,
	SPADES,
	CLUBS,

	CARD_SUIT_NB
};

class Card
{
private:
	CardSuit m_suit;
	bool m_isRed;

	void Initialise(const CardSuit& _suit);

public:
	Card(void);
	Card(const CardSuit& _suit);

	~Card(void);
};

#endif