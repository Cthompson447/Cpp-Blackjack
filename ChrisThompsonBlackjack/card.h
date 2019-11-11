#pragma once
#include <string>
#include <iostream>
#include "card.cpp"
class Card {

	enum class Suit { Diamonds, Spades, Hearts, Clubs };
	enum class Face { Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, King, Queen, Ace };


public:
	Card(Suit, Face);
	void setFace(Face face);
	Face getFace();
	void setSuit(Suit suit);
	Suit getSuit();

private:
	Face faceOfCard;
	Suit suitOfCard;
};