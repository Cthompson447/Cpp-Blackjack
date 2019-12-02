#pragma once
#include <string>
#include <iostream>
#include "card.h"

class Player {

public:
	Player();
	~Player();

private:
	Card hand;
	double balance;
	double bet;

};