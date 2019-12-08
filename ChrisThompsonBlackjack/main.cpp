#include "pch.h"
#include <iostream>
#include "game.h"

using namespace std;
void displayMenu();

int main()
{
	int menuOption;
	game Game;

	displayMenu();

	switch (menuOption) {
	case '1':
		Game.playGame();
	case '2':
		viewLeaderboard();
	case '3':
		return 0;
	}
	

}

void displayMenu() {
	cout << "Welcome to OOP Blackjack, please select a menu option below.\n";
	cout << "Press 1 to start a new game\n";
	cout << "Press 2 to view game history\n";
	cout << "Press 3 to quit";
}
