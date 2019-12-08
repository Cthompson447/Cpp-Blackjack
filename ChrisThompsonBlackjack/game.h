#pragma once
#include "dealer.h"

class game {
public:
	game();
	~game();

	void playGame();
private:
	Deck deck;
	Dealer dealer;
	Player player;

	std::string newName;
};