#include <iostream>
#include "card.h"

using namespace std;

	

	Card::Card(Suit suit, Face face): faceOfCard(face), suitOfCard(suit)
	{
		
	}

	Card::Suit Card::getSuit() {
		return Suit::Diamonds;
	}



	Card::Face Card::getFace() {
		return Face::Eight;
	}

//points per card to differentiate between ace being 1 or 11*/
