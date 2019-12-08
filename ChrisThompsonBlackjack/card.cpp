#include <iostream>
#include "card.h"
#include <string>

using namespace std;


const array<string, 4> Card::suits{ "Diamonds", "Spades", "Hearts", "Clubs" };
const array<string, 13> Card::faces{ "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "King", "Queen", "Ace" };

	Card::Card(int faces, int suits)
	{
		face = faces;
		suit = suits;
	}

	Card::~Card()
	{
	}

	int Card::getSuit() {
		return suit;
	}

	int Card::getCardScore()
	{
		int cardScore = 0;

		if (this->getFace == "Two") {
			cardScore = 2;
		}
		else if (this->getFace == "Three") {
			cardScore = 3;
		}
		else if (this->getFace == "Four") {
			cardScore = 4;
		}
		else if (this->getFace == "Five") {
			cardScore = 5;
		}
		else if (this->getFace == "Six") {
			cardScore = 6;
		}
		else if (this->getFace == "Seven") {
			cardScore = 7;
		}
		else if (this->getFace == "Eight") {
			cardScore = 8;
		}
		else if (this->getFace == "Nine") {
			cardScore = 9;
		}
		else if (this->getFace == "Ten" || this->getFace == "Jack" || this->getFace == "King" || this->getFace == "Queen") {
			cardScore = 10;
		}
		else if (this->getFace == "Ace") {
			//Giving player the choice to have their ace worth 1 or 11 points
			int choice;
			cout << "Would you like your ace to be worth 1 or 11 points, please enter the value you would like \n";
			cin >> choice;

			if (choice != 1 || choice != 11) {
				cout << "Please enter a correct value";
			} else {
				switch (choice) {
				case 1:
					cardScore = 1;
				case 11:
					cardScore = 11;
				}
			}
		}
		return cardScore;
	}

	int Card::getFace() {
		return face;
	}

	void Card::setSuit(int suits) {
		suit = suits;
	}

	void Card::setFace(int faces) {
		face = faces;
	}
	
	string Card::printCardValue() {
		return (faces[this->getFace()] + " of " + suits[this->getSuit()]);
	}
//points per card to differentiate between ace being 1 or 11, ace is assumed as high unless player goes bust eg ace makes player with 15 goes bust therefore is 1  */
