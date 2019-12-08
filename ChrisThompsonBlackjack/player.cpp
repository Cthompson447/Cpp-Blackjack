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
	if (this->getScore() > 21) {
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
	
	for (int i=0; i < hand.size(); i++)
	{
		try {
			score += hand[i].getCardScore();
		}
		catch (const std::exception e) {
			std::cout << "An exception has occured, please contact administrator";
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
