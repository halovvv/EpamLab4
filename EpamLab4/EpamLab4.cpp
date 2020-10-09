#include <string>
#include <iostream>

using namespace std;

class ProdTovary
{
private:
	float cost;
	float weight;
public:
	ProdTovary()
	{
		cost = 0;
		weight = 0;
	}

	void enterCena()
	{
		cout << "Enter cost for 1 kg of products: " << endl;
		cin >> cost;
	}

	void enterWeight()
	{
		cout << "Enter weight of products: " << endl;
		cin >> weight;
	}

	void printCena()
	{
		cout << "Whole cost of products: " << weight * cost << endl;

	}

	~ProdTovary()
	{
	}
};

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

	void enterCena(double cb)
	{
		cenaZaDP = cb;
	}

	void enterWeight(double d)
	{
		weightOfDP = d;
	}

	void printWhole()
	{
		cout << "Whole cost of products: " << weightOfDP * cenaZaDP << endl;

	}

	double Check()
	{
		return weightOfDP * cenaZaDP;
	}

	~DailyProducts() {}

};

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

	void enterCena(double cbp)
	{
		cenaZaBD = cbp;
	}

	void enterWeight(double b)
	{
		weightOfBP = b;
	}

	void printWhole()
	{
		cout << "Whole cost of products: " << weightOfBP * cenaZaBD << endl;

	}

	double Check()
	{
		return weightOfBP * cenaZaBD;
	}


	~BreadProducts() {}
};

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

	void enterCena(double cf)
	{
		cenaZaF = cf;
	}

	void enterWeight(double f)
	{
		weightOfF = f;
	}

	void printWhole()
	{
		cout << "Whole cost of products: " << weightOfF * cenaZaF << endl;

	}

	double Check()
	{
		return weightOfF * cenaZaF;
	}

	~Fruts() {}
};

int main()
{
	double konechnayaSumma = 0;
	DailyProducts milk;
	BreadProducts bulochka;
	Fruts apple;

	milk.enterCena(4.78);
	milk.enterWeight(0.5);
	milk.Check();

	bulochka.enterCena(3.89);
	bulochka.enterWeight(0.9);
	bulochka.Check();

	apple.enterCena(7.33);
	apple.enterWeight(2.8);
	apple.Check();

	cout << "The whole check is\t" << milk.Check() + bulochka.Check() + apple.Check() << endl;

}