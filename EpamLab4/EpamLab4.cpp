#include <string>
#include <iostream>
#include "ProdTovary.h"
#include "Header1.h"
#include "Fruts.h"
#include "BreadProd.h"

using namespace std;


int main()
{
	double konechnayaSumma = 0;
	DailyProducts milk;
	BreadProducts bulochka;
	Fruts apple;

	milk.CWD(3.77,0.5);
	milk.getDataDP();
	milk.setdata();
	milk.getData();
	milk.Check();
	cout << endl;

	bulochka.CWB(3.89,0.9);
	bulochka.setdata();
	bulochka.getData();
	bulochka.getDataBP();
	bulochka.Check();
	cout << endl;

	apple.CWf(7.33,2.8);
	apple.setdata();
	apple.getData();
	apple.getDataF();
	apple.Check();
	cout << endl;

	cout << "The whole check is\t" << milk.Check() + bulochka.Check() + apple.Check() << endl;

}