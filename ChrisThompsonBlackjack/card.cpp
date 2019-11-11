#include <iostream>
#include "card.h"

using namespace std;


	enum class Suit { Diamonds, Spades, Hearts, Clubs};
	enum class Face { Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, King, Queen, Ace };

	Card::Card(Suit suit, Face face):suitOfCard(suit), faceOfCard(face);

	string Card::getSuit() {
		return suit;
	}

	string Card::getFace() {
		return face;
	}

//points per card to differentiate between ace being 1 or 11*/
