#define _ CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<iomanip>
#include<string>

using namespace std;

class PayRaise
{
public:

	PayRaise(char *= " ", float = 0.0, float = 0.0);
	void printData();
	void calcBonus(float);
private:
	char name[20]; //12 or more
	float old, rp, ra, newp;
};

PayRaise::PayRaise(char *n, float o, float r)
{
	strcpy(name, n);
		old = o;
		rp = r;
	ra = old *rp / 100;
	newp = old + ra;
}

PayRaise::~PayRaise()
{
	cout << name << "is destroyed" << endl << endl;
}

void PayRaise::printData()
{
	cout << setprecision(2) << showpoint << fixed;
	cout << "the name is " << name << endl;
	cout << "the old pay amount is $" << old << endl;
	cout << "The raise percentage is " << rp << endl;
	cout << "the raise amount is $" << ra << endl;
	cout << "the new pay is $" << newp << endl << endl << endl;
}	

void PayRaise::calcBonus(float bonus)
{
	old + bonus;
	ra = old * rp / 100;
	newp = old + ra
}

int main()
{
	PayRaise p("Corby Bryan", 50000, 10);
	p.printData();
	cout << endl << "How much is the bonus?";
	float bonus;
	cin >> bonus;
	p.calcBonus(bonus);
	cout << endl << endl;

	p.printData();
	return 0;

}

