#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include <list>
#include <fstream>
#include "Taxpayer.h"

int main()
{
	ifstream fin; // makes fin an operator to read in files 
	fin.open("taxdata.txt"); // opens previously created text file 

	int social_security;
	string lastname;
	string firstname;
	string filing_status;
	double gross_income;
	double tax_paid; 
	list <Taxpayer> taxpayers; // creates a list of taxpayers 
	list <Taxpayer> ::iterator i; // creates an iterator for list of taxpayers 

	
	while (fin >> social_security >> lastname >> firstname >> filing_status >> gross_income >> tax_paid) // runs until all the information has been organized into the list useing the Taxpayer class
	{
		taxpayers.push_back(Taxpayer(social_security, lastname, firstname, filing_status, gross_income, tax_paid));	// adds entries to the list 	
	}
			
	ofstream fout;  // makes operator fout to add info to /create files 
	fout.open("taxesdue.txt");  // creates/ rewrite's file 
	fout << fixed << setprecision(2);  // set's presicion of double's to 2 decimals

	fout << setw(13) << left << "SSN" << setw(10) << left << "Last name" << setw(10) << left << "First name" << setw(15) << right << "Taxes owed" << endl;
		
	for (i = taxpayers.begin(); i != taxpayers.end();i++) // organizes info into a formatted file 
	{
		fout << setw(13) << left << (*i).get_social() << setw(10) << left 
			<< (*i).get_lname() << setw(10) << left << (*i).get_fname() << 
			setw(15) << right << (*i).taxes_remaining() << endl; 
	} 

	fout.close(); // closes file 

		

	return 0; 
}