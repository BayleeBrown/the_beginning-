#include <iostream>
using namespace std;

int main()
{
	double input_dist; // Distance travelled by user 
	double TOTALDIST = 377.6; // total distance the user needs to travel
	double SPEED = 5.0 / 3600; // speed = km / sec
	int ONE_DAY = 86400 ; // seconds in a day 
	int ONE_HOUR = 3600; // seconds in a hour 
	int ONE_MIN = 60; // seconds in a minute 

	cout << "Please input how far you have currently traveled." << endl; // will ask the user to input distance traveled 
	cin >> input_dist; 

	double dist_left = TOTALDIST - input_dist; // distance user has left to travel
	
	cout << "You have " << dist_left << " km left to Acapulco." << endl; // will output distance needed to travel by user

	double time = dist_left / SPEED;
	int days = time / ONE_DAY;
	int hours = (time - days * ONE_DAY) / ONE_HOUR; 
	int min = (time - days * ONE_DAY - hours * ONE_HOUR) / ONE_MIN;
	int sec = time - days * ONE_DAY - hours * ONE_HOUR - min * ONE_MIN;

	
	cout << "Travelling at a speed of 5km/h you have " <<  days << " days " << hours << " hours " <<  min << " min and " << sec << " sec left to arrive at your destination" << endl;


	return 0; 
}