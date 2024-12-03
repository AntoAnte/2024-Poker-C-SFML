#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Hand.hpp"

class Player
{
private:
	Hand m_hand;

public:
	Player(void);
	~Player(void);
};

#endif