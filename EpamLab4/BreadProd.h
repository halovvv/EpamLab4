#pragma once
#include <string>
#include <iostream>
#include "ProdTovary.h"

class BreadProducts : public ProdTovary
{
private:
	double cenaZaBD;
	double weightOfBP;
public:
	BreadProducts() : ProdTovary()
	{
		cenaZaBD = 0;
		weightOfBP = 0;
	}

	void CWB(double cf, double f)
	{
		cenaZaBD = cf;
		weightOfBP = f;
	}

	void getDataBP()
	{
		cout << "Cost for 1 kilo of daily products: " << cenaZaBD << endl;

		cout << "Whole weight od daily products: " << weightOfBP << endl;

		cout << "Whole cost of bread products: " << weightOfBP * cenaZaBD << endl;

	}
	
	double Check()
	{
		return weightOfBP * cenaZaBD;
	}

	~BreadProducts() {}
};
