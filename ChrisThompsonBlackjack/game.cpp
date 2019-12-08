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

	deck.shuffleDeck();

	//Get player's name and write to newPlayer name value
	cout << "Please enter name of player: ";
	cin >> newPlayer.setName;

	//Deal 2 cards to both the dealer and the player
	newPlayer.hand.push_back(dealer.dealCard);
	newPlayer.hand.push_back(dealer.dealCard);

	dealer.hand.push_back(dealer.dealCard);
	dealer.hand.push_back(dealer.dealCard);

	//Initial check for a blackjack
	newPlayer.getScore();
}
