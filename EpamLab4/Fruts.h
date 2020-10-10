#pragma once
#include <string>
#include <iostream>
#include "ProdTovary.h"

class Fruts : public ProdTovary
{
private:
	double weightOfF;
	double cenaZaF;
public:
	Fruts() : ProdTovary()
	{
		cenaZaF = 0;
		weightOfF = 0;
	}


	void CWf(double cf, double f)
	{
		cenaZaF = cf;
		weightOfF = f;
	}

	void getDataF()
	{
		cout << "Cost for 1 kilo of fruts: " << cenaZaF << endl;

		cout << "Whole weight od fruts: " << weightOfF << endl;

		cout << "Whole cost of fruts: " << weightOfF * cenaZaF << endl;

	}

	double Check()
	{
		return weightOfF * cenaZaF;
	}

	~Fruts() {}
};
