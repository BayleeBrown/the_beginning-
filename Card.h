#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

class Card 
{
public: 
	Card(); // randomizes a suit and a rank
	int get_rank() const; // outputs the numerical rank value
	string get_rank_string(); // outputs name associated with rank
	string get_suit_string(); // outputs name of suit

private:
	int rank; 
	int suit; 

};

Card::Card()
{ // uses random seed to randomize rank between 1-13 and suit beween 1-4
	srand((int)time(0));
	rank = rand() % 13 + 1; 
	suit = rand() % 4 + 1; 
}

int Card::get_rank() const
{
	// returns numerical rank value 
	return rank; 
}

string Card::get_rank_string()
{ 
	//associates the numerical rank to a card's name. 
	Card();
	if (rank == 1)
		return "Ace";
	else if (rank == 2)
		return "Two";
	else if (rank == 3)
		return "Three";
	else if (rank == 4)
		return "Four";
	else if (rank == 5)
		return "Five";
	else if (rank == 6)
		return "Six";
	else if (rank == 7)
		return "Seven";
	else if (rank == 8)
		return "Eight";
	else if (rank == 9)
		return "Nine";
	else if (rank == 10)
		return "Ten";
	else if (rank == 11)
		return "Jack";
	else if (rank == 12)
		return "Queen";
	else if (rank == 13)
		return "King";
	else
		return "ERROR"; 
}

string Card :: get_suit_string()
{ 
	// associates a 1-4 number with a card's suit
	Card(); 
	if (suit == 1)
		return "Heart";
	else if (suit == 2)
		return "Spades";
	else if (suit == 3)
		return "Diamonds";
	else
		return "Clubs";
}