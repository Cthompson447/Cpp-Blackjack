#include "game.h"

using namespace std;

game::game()
{
}

game::~game()
{
}

void game::playGame()
{
	Player newPlayer;
	Dealer dealer;
	Deck deck;

	//Get player's name and write to newPlayer name value
	cout << "Please enter name of player: ";
	try {
		cin >> newName;
		newPlayer.setName(newName);
	}
	catch (const exception e) {
		cout << "Please enter a name of corret format";
	}
	
	deck.shuffleDeck();

	//Deal 2 cards to both the dealer and the player
	newPlayer.hand.push_back(dealer.dealCard());
	newPlayer.hand.push_back(dealer.dealCard());

	dealer.hand.push_back(dealer.dealCard());
	dealer.hand.push_back(dealer.dealCard());

	//Initial check for a blackjack
	if (newPlayer.getScore() == 21) {
		cout << player.getName() << "Wins!";
	}
	else {

	}
}
