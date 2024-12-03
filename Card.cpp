#include "Card.hpp"

void Card::Initialise(const CardSuit& _suit)
{
	m_suit = _suit;
	m_isRed = (_suit == HEARTS || _suit == DIAMONDS);
}


Card::Card(const CardSuit& _suit)
{
	Initialise(_suit);
}
Card::Card(void)
{
	Initialise(static_cast<CardSuit>(0));
}

Card::~Card(void)
{

}