#pragma once
#include <iostream>
#include <string>
using namespace std; 

class Player // creates a player class that tracks the Player's name, starting amount, and current balance 
{
public : 
	Player(string name1, double money1, double balance); // creates a player
	double comparison(int rank_one, int rank_two, string guess, double & current_balance, int bet);//compares two ranks and determines if bet was won or lost 
	

private : 
	string name;
	double start_money; 
	double current_balance; 
};

Player::Player(string name1, double money1, double balance) // assigns the Player's data to the private variables
{
	name = name1;
	start_money = money1;
	current_balance = balance; 

}
double Player::comparison(int rank_one, int rank_two, string guess, double & current_balance, int bet)
{
	if (rank_one > rank_two && guess == "H")  
	{ /* checks if guess does not match what happened, then subtracts the bet from current_balance
	  and then returns the current_balance */
		current_balance = current_balance - bet;  
		cout << "You lost " << bet << " ..." << endl; 
		return current_balance;
	}
	else if (rank_one > rank_two && guess == "L")
	{
		/* checks if guess does match what happened, then add's the bet to current_balance
		and then returns the current_balance */
		current_balance = current_balance + bet;
		cout << " YOU WON!! Congrats, " << bet << " has been added to your total amount!" << endl; 
		return current_balance;
	}
	else if (rank_one < rank_two && guess == "H")
	{
		/* checks if guess does match what happened, then add's the bet to current_balance
		and then returns the current_balance */
		current_balance = current_balance + bet;
		cout << " YOU WON!! Congrats, " << bet << " has been added to your total amount!" << endl;
		return current_balance;
	}
	else if (rank_one < rank_two && guess == "L")
	{ 
	/* checks if guess does not match what happened, then subtracts the bet from current_balance
	  and then returns the current_balance */
		current_balance = current_balance - bet;
		cout << "You lost " << bet << " ..." << endl;
		return current_balance;
	}
		
}

