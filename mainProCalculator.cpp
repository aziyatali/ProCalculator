#include "proCalculator.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
	void firstChoice(int option, int choice, int decision);
	int simpleMenu(int choice);
	int conversionMenu(int decision);
	void simpleMath(int choice);
	void conversionMath(int decision);

	void add();
	void subtract();
	void multiple();
	void divide();
	void sine();
	void cosine();
	void tangent();
	void cotangent();
	void xthPower();
	void secondPower();
	void logs();
	void logsTen();
	void squareRoot();
	void xthRoot(int);
	void factorial();

	int main()
	{
		int option = 0;
		int choice = 0;
		int decision = 0;
		cout<<"Welcome to the Calculator Pro"<<endl;
		firstChoice(option, choice, decision);
	}

void firstChoice(int option, int choice, int decision)
{
	cout<<"For a simple math calculation insert option:1 or for a conversion insert option: 2 ";
	cin>>option;
	while (option!=1 || option!=2)
		{
			cout<<"Please insert the valid option: ";
			cin>>option;
		}

	if (option == 1)
	{
		choice  = simpleMenu(choice);
		simpleMath(choice);
	}
	else if (option == 2)
	{
		decision = conversionMenu(decision);
		conversionMath(decision);
	}

}

int simpleMenu(int choice)
{
	cout << "\n" << "Menu: " << endl;
	cout << "1.) Add" << endl;
	cout << "2.) Subtract" << endl;
	cout << "3.) Multiple" << endl;
	cout << "4.) Divide" << endl;
	cout << "5.) Sine" << endl;
	cout << "6.) Cosine" << endl;
	cout << "7.) Tangent" << endl;
	cout << "8.) Cotangent" << endl;
	cout << "9.) xthPower" << endl;
	cout << "10.) secondPower" << endl;
	cout << "11.) logs" << endl;
	cout << "12.) logsTen" << endl;
	cout << "13.) squareRoot" << endl;
	cout << "14.) xthRoot" << endl;
	cout << "15.) logsTen" << endl;
	cout<<"\n";

	cout << "Please Enter in your choice: ";
	cin>>choice;
	return choice;
}


void simpleMath(int choice)
{
	switch(choice)
	{
		case 1: add();
		break;
		case 2: subtract();
		break;
		case 3: multiple();
		break;
		case 4: divide();
		break;
		case 5: sine();
		break;
		case 6: cosine();
		break;
		case 7: tangent();
		break;
		case 8: cotangent();
		break;
		case 9: xthPower();
		break;
		case 10: secondPower();
		break;
		case 11: logs();
		break;
		case 12: logsTen();
		break;
		case 13: squareRoot();
		break;
		case 14: xthRoot();
		break;
		case 15: factorial();
		break;
		choice = simpleMenu(choice);
		default:
		while (choice<1 || choice 1617)
		{
			cout<<"Please, insert the valid choice or choice: 16 to go to the main menu: ";
			cin>>choice;
		}
	}

}
