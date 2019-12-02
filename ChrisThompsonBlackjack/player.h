#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "card.h"

class Player {

public:
	Player();
	~Player();
	bool isBust();
	void hitOrStick();
	void determineAceValue();

	void setBalance( double );
	double getBalance();
	void setBet( double );
	double getBet();
	void setScore(int);
	int getScore();
	void setName(std::string);
	std::string getName();

private:
	std::vector<Card> hand;
	std::string name;
	double balance;
	double bet;
	int score;

};