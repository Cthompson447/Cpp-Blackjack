#pragma once
#include <string>
#include <iostream>
#include <array>

class Card {


public:
	Card(int =0, int =0);
	~Card();
	void setFace( int );
	int getFace();
	void setSuit( int );
	int getSuit();

	std::string printCardValue();

	static const std::array<std::string, 13> faces;
	static const std::array<std::string, 4> suits;

private:
	int face;
	int suit;
};