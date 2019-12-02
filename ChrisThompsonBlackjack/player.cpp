#include "player.h"

Player::Player()
{

}

Player::~Player()
{
}

bool Player::isBust()
{
	
	return false;
}

void Player::hitOrStick()
{
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
	bet = newBet;
}

double Player::getBet()
{
	return bet;
}

void Player::setScore(int newScore)
{
	score = newScore;

}

int Player::getScore()
{
	return score;
}

void Player::setName(std::string)
{
}

std::string Player::getName()
{
	return name;
}
