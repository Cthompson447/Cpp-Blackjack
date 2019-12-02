#include <iostream>
#include "card.h"
#include <string>

using namespace std;


const array<string, 4> Card::suits{ "Diamonds", "Spades", "Hearts", "Clubs" };
const array<string, 13> Card::faces{ "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "King", "Queen", "Ace" };

	Card::Card(int faces, int suits)
	{
		face = faces;
		suit = suits;
	}

	Card::~Card()
	{
	}

	int Card::getSuit() {
		return suit;
	}

	int Card::getFace() {
		return face;
	}

	void Card::setSuit(int suits) {
		suit = suits;
	}

	void Card::setFace(int faces) {
		face = faces;
	}
	
	string Card::printCardValue() {
		return (faces[this->getFace()] + " of " + suits[this->getSuit()]);
	}
//points per card to differentiate between ace being 1 or 11, ace is assumed as high unless player goes bust eg ace makes player with 15 goes bust therefore is 1  */
