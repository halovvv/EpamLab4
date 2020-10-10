#pragma once
#include <string>
#include <iostream>
#include "ProdTovary.h"

using namespace std;

class DailyProducts : public ProdTovary
{
private:
	double cenaZaDP;
	double weightOfDP;
public:
	DailyProducts() : ProdTovary()
	{
		cenaZaDP = 0;
		weightOfDP = 0;
	}

	void CWD(double cf, double f)
	{
		cenaZaDP = cf;
		weightOfDP = f;
	}

	void getDataDP()
	{
		cout << "Cost for 1 kilo of daily products: " << cenaZaDP << endl;

		cout << "Whole weight od daily products: " << weightOfDP << endl;

		cout << "Whole cost of daily products: " << weightOfDP * cenaZaDP << endl;

	}

	double Check()
	{
		return weightOfDP * cenaZaDP;
	}

	~DailyProducts() {}

};
