#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 


int rand_dice(double u, double v, double w, double x, double y, double z) // returns the number rolled on dice
{
	int roll = rand() % 101;	// generates the random number
	if (roll <= u) 
		return 1;
	else if ( roll <= (u + v) ) 
		return 2;
	else if ( roll <= (u + v + w) ) 
		return 3;
	else if ( roll <= (u + v + w + x) )
		return 4;
	else if ( roll <= (u + v + w + x + y) )
		return 5;
	else 
		return 6; 
}

int sum(int number_dice, double u, double v, double w, double x, double y, double z) // calculates the sum of the numbers rolled on the dice 
{
	int sum = 0; 
	 
	for ( int n = 0; n < number_dice; n++) // loops till n = the number of dice rolled 
	{
		sum += rand_dice(u,v,w,x,y,z);	// adds the number rolled to the sum 	
	} 
	
	return sum; // returns the addition of the random numbers 
}

int trials(int number_dice, int end_number, int number_trials, double u, double v, double w, double x, double y, double z) // figures out how many runs it takes for the sum to = the number user inputs 
{
	int runs = 0;
	for (int i = 0; i < number_trials; i++)  // loops till n = the number of trials the user inputs 
	{
		do
			runs++;
		while (sum(number_dice, u,v,w,x,y,z) != end_number); // checks to see if sum is the end number 
	}
		return runs;
}



int main()
{
	srand((int)time(0)); // randomizes the seed's for the randome number generator 
	double a, b, c, d, e,f; // variables represent the probablity 
	int dice; // number of dice 
	int end; // number that ends a turn 
	int turns; // number of turns 
	
	
	cout << "Enter the weights of each side of the die : ";
	cin >> a >> b >> c >> d >> e >> f; // user inputs propability 
	
	cout << "Enter the number of dice to roll : ";
	cin >> dice; // user inputs how many dice 

	cout <<  "Enter the sum that ends a turn : ";
	cin >> end; // user inputs number it should end 

	cout << "Enter the number of turns to simulate : ";
	cin >> turns; // user inputs how many trials they want to run 

	
	double average = (double)trials(dice, end, turns, a, b, c, d, e, f) / (double)turns; // the average amount of dice rolls it took to reach the end number  
	cout << "The average number of rolls to get " << end << " is " << average << endl; // outputs the end number and average for the user 
	
		return 0; 
}
