#pragma once
#include <string>
#include <list>
#include<iomanip>
#include <iostream>
using namespace std; 

class Taxpayer 
{
public :
	Taxpayer();
	Taxpayer(int security, string lname, string fname, string filing, double income, double taxes);
	int get_social() const;
	string get_lname() const; 
	string get_fname() const; 
	double taxowed_single();
	double taxowed_married(); 
	bool get_filing() const; 
	double taxes_remaining();
	bool operator < (Taxpayer p2 )const; 



private:
	int social_security; // social security number 
	string lastname; // person's last name 
	string firstname; // person's first name 
	bool filing_status; // person's relationship status 
	double gross_income; // person's income 
	double taxes_paid; // amount of tax person has already paid 
	double taxes_remain; // total tax - tax paid already 
};

Taxpayer::Taxpayer() // as default sets everything to 0 or empty 
{
	social_security = 0;
	lastname = " ";
	firstname = " ";
	filing_status = false; 
	gross_income = 0;
	taxes_paid = 0; 
}

Taxpayer::Taxpayer(int security, string lname, string fname, string filing, double income, double taxes) // sets private variables with the parameters given 
{
	social_security = security;
	lastname = lname;
	firstname = fname;
	gross_income = income;
	taxes_paid = taxes;
	if (filing == "s") // makes single = true
		filing_status = true;
	else if (filing == "m") // makes married = false 
		filing_status = false; 
}

double Taxpayer::taxowed_single() // calculates income owned of a single taxpayer based on income
{
	if (gross_income > 0 && gross_income <= 37650) 
		return (gross_income * 0.15);
	else if (gross_income > 37650 && gross_income <= 91150)
		return (gross_income * 0.25);
	else
		return (gross_income * 0.28);		
}

double Taxpayer::taxowed_married() // calculates income owned of a married taxpayer based on income 
{
	if (gross_income > 0 && gross_income <= 75300)
		return (gross_income * 0.15);
	else if (gross_income > 75300 && gross_income <= 151900)
		return (gross_income * 0.25);
	else
		return (gross_income * 0.28); 
}

bool Taxpayer::get_filing()const // get's the relationship status of tax payer 
{
	return filing_status; 
}

double Taxpayer::taxes_remaining() // calculates how much tax person still needs to pay based on relationship status, income, and how much person already paid. 
{
	get_filing(); 
	if (filing_status = true)
		{
			taxes_remain = (taxowed_single() - taxes_paid);
			return taxes_remain; 
		}

	else if (filing_status = false)
		{
			taxes_remain = (taxowed_married() - taxes_paid); 
			return taxes_remain; 
		}		
}



bool Taxpayer::operator <(Taxpayer p2)const // compares two tax payers owed tax amount
{
	double j = p2.taxes_remaining();
	if (j == 0)
		return false; 
	if (taxes_remain == 0)
		return true; 
	return (taxes_remain < j);
}

int Taxpayer::get_social() const // accesses social security number 
{
	return social_security; 
}

string Taxpayer::get_lname() const // accesses last name
{
	return lastname; 
}

string Taxpayer::get_fname() const // accesses first name
{
	return firstname;
}

