#include <iostream>
#include "Card.h"
#include "Player.h"
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	string name; // Player's name
	double money; // Player's current balance
	double start_money; // Player's starting amount 
	int bet; // how much player bet's

	cout << " Please enter your name : ";
	getline(cin, name); // gets players name 

	cout << " How much money would you like to start with " << name << "? ";
	cin >> start_money; // Player inputs starting amount  
	
	money = start_money; // assigns current balance to be the starting amount 
	while (money < start_money * 5 && money > 0) // checks to make sure that after one round players current balance isn't 5 times the starting amount and less than zero
	{
		
		cout << " How much do you want to bet? ";
		cin >> bet; // Player inputs bet 

		string first_rank = Card().get_rank_string(); // get's the name of the card's rank
		string first_suit = Card().get_suit_string(); // gets the name of the card's suit
		string guess; // Player's guess if the next card will be higher or lower 
		int rank_one = Card().get_rank(); // Get's the cards rank between 1-13 

		cout << " You pulled a " << first_rank << " of " << first_suit << "." << endl; // outputs Player's first card 

		cout << " Will the next card you draw be higher or lower? (Please enter 'H' for higher and 'L' for lower)" << endl; 
		cin >> guess; // Player inpurs guess 
		
		
		string second_rank = Card().get_rank_string(); // get's the name of the second card's rank 
		string second_suit = Card().get_suit_string(); // get;s the ame of the second cards suit 
		int rank_two = Card().get_rank(); // gets the number value of second cards rank 

		cout << " You're second card is the " << second_rank << " of " << second_suit << "." << endl; // Outputs the second card

		Player(name, start_money, money).comparison(rank_one, rank_two, guess, money, bet); /* compares the first two ranks and determines whether the guess
																							was true or false, then add's or subtracts the bet based of that.*/
		
		cout << " You have " << money << " left." << endl; // Tells Player how much they have left 
		
		}
	if (money >= start_money * 5) // at the end of the game the player either won 5 times their starting amount or lost all of it 
		cout << " You won the game!! Great Job, now leave before we go bankrupt." << endl; 
	else
		cout << " Too bad, You lost everything " << name << ", better luck next time..." << endl; 

	return 0; 
}
