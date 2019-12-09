#include "player.h"

Player::Player() {

}

Player::Player(std::string playerName): name(playerName)
{

}

Player::~Player()
{
}

bool Player::isBust()
{	
	if (getScore() > 21) {
		return true;
	}
	return false;
}

void Player::determineAceValue()
{

}

void Player::setBalance(double newBalance)
{
	balance = newBalance;
}

double Player::getBalance()
{
	return balance;
}

void Player::setBet(double newBet)
{
	*bet = newBet;
}

double Player::getBet()
{
	return *bet;
}

void Player::setScore(int newScore)
{
	score = newScore;

}

int Player::getScore()
{
	score = 0;
	
	for (int i=0; i < hand.size(); i++)
	{
		try {
			score += hand[i].getCardScore();
		}
		catch (const std::exception e) {
			std::cout << "unable to get score";
		}
		
	}
	return score;
}

void Player::setName(std::string newName)
{
	name = newName;
}

std::string Player::getName()
{
	return name;
}

std::vector<Card> Player::getHand()
{
	return hand;
}
