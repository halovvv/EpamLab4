#pragma once
#include <string>
#include <iostream>

using namespace std;

class ProdTovary
{
private:
	string srokGodnost;
	string dateOfMaking; 
public:
	ProdTovary()
	{
		srokGodnost = " ";
		dateOfMaking = " ";
	}

	void setdata()
	{
		cout << "Enter shelf life for products: " << endl;
		cin >> srokGodnost;

		cout << "Enter date of products making of products: " << endl;
		cin >> dateOfMaking;
	}

	void getData()
	{
		cout << "Shelf life for product: " << srokGodnost << endl;

		cout << "Date of products making of products: " << dateOfMaking << endl;

	}

	~ProdTovary()
	{
	}
};

