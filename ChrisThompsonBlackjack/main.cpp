#include "pch.h"
#include <iostream>
#include "card.h"
#include "deck.h"
#include "dealer.h"

using namespace std;
void displayMenu();

int main()
{
	displayMenu();
	Deck deck;
	deck.displayDeck();
	deck.shuffleDeck();
	deck.displayDeck();
	return 0;

}


void displayMenu() {
	cout << "Welcome to OOP Blackjack, please select a menu option below.\n";
	cout << "Press 1 to start a new game\n";
	cout << "Press 2 to view leaderboards";
}