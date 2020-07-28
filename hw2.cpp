#include <iostream>
#include <string>
#include < iomanip >
using namespace std;

int main()
{
	string item; 
	double price;
	double rate;
	string type1;
	string type2;
	double number_item;

	cout << "Enter the desired item : " << endl;  
		cin >> number_item; // number of items puchased  
		getline(cin, item); // item user wants to purchase 

	cout << "Enter the price and units : " << endl; 
		cin >> price;  // gets the price 
		getline(cin, type1); // gets the units

	cout << "Enter the conversion rate :\n1 " << type1 << " to "; // example 2.5 pesos
		cin >> rate; // gets the coversion rate ( ex. 2.5 )
		getline(cin, type2); // gets the conversion units ( ex. pesos )
	
	double conversion1 = rate; // changes type1 to type2
		cout << fixed;
		cout << setprecision(2); // sets number to two decimals 
	double conversion2 = 1 / rate ; // changes type2 to type1
		cout << fixed;
		cout << setprecision(2); // sets number to two decimals 

	double unit_price1 = price / number_item; // unit price in original currency 
		cout << fixed;
		cout << setprecision(2);
	double unit_price2 = (price * rate) / number_item; // unit price in the converted curency 
		cout << fixed;
		cout << setprecision(2);
	

	cout << endl;
	cout << " Exchange rate : " << endl; 
	cout << endl;  // just to make it easier to read 
	cout << type1 << "- to -" << type2 << " : " << setw(8) << right << conversion1 << endl; 
	cout << type2 << "- to -" << type1 << " : " << setw(8) << right << conversion2 << endl; 

	cout << endl;
	cout << " The Unit Price is :" << endl;
	cout << endl; // just to make it easier to read 
	cout << " In " << setw(10) << left << type1 << setw(8) << right << unit_price2 << endl;
	cout << " In " << setw(10) << left << type2 << setw(8) << right << unit_price1 << endl; 
	cout << endl; 


	return 0; 
}