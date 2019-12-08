#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "card.h"

class Player {

public:
	Player();
	Player(std::string playerName);
	~Player();
	bool isBust();
	void determineAceValue();

	void setBalance( double );
	double getBalance();
	void setBet( double );
	double getBet();
	void setScore(int);
	int getScore();
	void setName(std::string);
	std::string getName();

	std::vector<Card> hand;

private:
	std::string name;
	double balance;
	double *bet;
	int *score;

};