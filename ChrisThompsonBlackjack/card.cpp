#include <iostream>
#include "card.h"

using namespace std;

	Card::Card(Suit suit, Face face): faceOfCard(face), suitOfCard(suit)
	{
		
	}

	Card::Suit Card::getSuit() {
		return suitOfCard;
	}

	Card::Face Card::getFace() {
		return faceOfCard;
	}

	void Card::setSuit(Suit suit) {
		
	}

	void Card::setFace(Face face) {

	}
//points per card to differentiate between ace being 1 or 11*/
