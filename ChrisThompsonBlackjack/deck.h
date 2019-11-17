#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "card.h"

class Deck {


public:
	Deck();
	void populateDeck();
	void shuffleDeck();
	Card dealCard();
	
private:
	vector<string> deck;

};