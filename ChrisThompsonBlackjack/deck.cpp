#include <iostream>
#include <vector>
#include <time.h>
#include "deck.h"
#include "card.h"


using namespace std;

Deck::Deck()
{
	for (int suit = 0; suit < 4; suit++) {
		for (int faceValue = 0; faceValue < 13; faceValue++) {
			deck.push_back(Card(faceValue, suit));
		}
	}

}

Deck::~Deck()
{
}

void Deck::displayDeck() {

	for (int i = 0; i < deck.size(); i++) {
		cout << deck.at(i).printCardValue() << endl ;
	}

	return;
}

void Deck::shuffleDeck()
{
	//Using current unix timestamp to generate random number, as we can never be at same time twice this should be truly random
	srand(time(nullptr));
	std::random_shuffle(deck.begin(), deck.end());
}

Card Deck::dealCard()
{
	shuffleDeck();
	deckPosition++;
	return deck.at(deckPosition);

}

