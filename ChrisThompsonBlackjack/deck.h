#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "card.h"

class Deck {


public:
	Deck();
	~Deck();
	void shuffleDeck();
	Card dealCard();
	void displayDeck();
	
private:
	
	std::vector<Card> deck;
	int deckPosition = -1;

};