#include <iostream>
using namespace std;
#include <string>
#include <iomanip>


int decode(string x) // compares the string given to the possible number values and changes the string to that number
{
	
		if (x == ":::||") 
			return 1;
		else if (x == "::|:|")
			return 2;
		else if (x == "::||:")
			return 3;
		else if (x == ":|::|")
			return 4;
		else if (x == ":|:|:")
			return 5;
		else if (x == ":||::")
			return 6;
		else if (x == "|:::|")
			return 7;
		else if (x == "|::|:")
			return 8;
		else if (x == "|:|::")
			return 9;
		else if (x == "||:::")
			return 0;
		else
			cout << "Error 1"; // shows that one of the numbers is typed incorrectly 
}



int conversion(string y) // takes the string and put's it in postal format by using the decode function and checking for possible errors 
{
	int first = decode(y.substr(1, 5)); // decodes the first 5 symbols excluding the first long bar 
	int second = decode(y.substr(6, 5)); 
	int third = decode(y.substr(11, 5));
	int fourth = decode(y.substr(16, 5));
	int fifth = decode(y.substr(21, 5));
	int sixth = decode(y.substr(26, 5)); // decodes the last 5 symbols excluding the final long bar 
	int check_number = (first + second + third + fourth + fifth + sixth) % 10; // checks to see if the sum is divisible by 10
	
	if (y.substr(0, 1) != "|")
	{
		cout << "Error 2" << endl; // shows that the front is missing a long bar
		return 0;
	}

	else if (y.substr(31, 1) != "|")
	{
		cout << "Error 3" << endl; // shows that the end is missing a long bar 
		return 0;
	}

	else if (check_number > 0)
	{
		cout << "Error 4" << endl;  // checks that the number's add up to a multiple of 10  
		return 0;
	}

	else
		return  (first * 10000 + second * 1000 + third * 100 + fourth * 10 + fifth); // outputs the postal code 	 
}



int main()
{
	string bar_code; // code thats entered 

	cout << "Please enter the postal code : "; 
	cin >> bar_code; // user inputs code 

	int postalcode = conversion(bar_code); // converts code to numbers 
	cout << postalcode << endl; // outputs the numbered code 

	

	return 0; 
}