#include "proCalculator.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <string>
using namespace std;

void add()
{
	float num1;
	float num2;
	float ans;
	cout<<"Enter your first number: ";
	cin>>num1;
	cout<<"Enter your second number: ";
	cin>>num2;
	ans = num1+num2;
	cout<<"Addition of: "<<num1<<" and :"<<num2<<" will be: "<<ans;

}

void subtract()
{
	float num1;
	float num2;
	float ans;
	cout<<"Enter your first number: ";
	cin>>num1;
	cout<<"Enter your second number: ";
	cin>>num2;
	ans = num1-num2;
	cout<<"Subtraction of: "<<num1<<" and :"<<num2<<" will be: "<<ans;

}

void multiple()
{
	float num1;
	float num2;
	float ans;
	cout<<"Enter your first number: ";
	cin>>num1;
	cout<<"Enter your second number: ";
	cin>>num2;
	ans = num1*num2;
	cout<<"Multiplication of: "<<num1<<" and :"<<num2<<" will be: "<<ans;

}

void divide ()
{
	float num1;
	float num2;
	float ans;
	cout<<"Enter your first number: ";
	cin>>num1;
	cout<<"Enter your second number: ";
	cin>>num2;
	ans = num1/num2;
	cout<<"Division of: "<<num1<<" and :"<<num2<<" will be: "<<ans<<endl;
	cout<<"With fixed point setprecision 5";

}

void sine ()
{
	float degree; // degree of sine function: -2/pi - 2pi
	float ans;
	cout<< "Insert the degree you want to get sine value: ";
	cin>>degree;
	ans = sin(degree);
	cout<<"Sine of: "<<degree<<"degree is: "<<ans;
}

void cosine()
{
	float degree; // degree of sine function: -2/pi - 2pi
	float ans;
	cout<< "Insert the degree you want to get sine value: ";
	cin>>degree;
	ans = cos(degree);
	cout<<"Cosine of: "<<degree<<"degree is: "<<ans;

}

void tangent()
{
	float degree; // degree of sine function: -2/pi - 2pi
	float ans;
	cout<< "Insert the degree you want to get sine value: ";
	cin>>degree;
	ans = sin(degree)/cos(degree);
	cout<<"Tangent of: "<<degree<<"degree is: "<<ans;

}

void cotangent()
{
	float degree; // degree of sine function: -2/pi - 2pi
	float ans;
	cout<< "Insert the degree you want to get sine value: ";
	cin>>degree;
	ans = cos(degree)/sin(degree);
	cout<<"Cotangent of: "<<degree<<"degree is: "<<ans;

}

void xthPower()
{
	float number, ans;
	int power;
	cout<<"What number: ";
	cin>>number;
	cout<<"Which power: ";
	cin>>power;
	ans = pow(number, power);
	cout<<power<<"th power of "<<number<<" is "<<ans;

}

void secondPower()
{
	float number, ans;
	cout<<"Insert the number you want to get square of it: ";
	cin>>number;
	ans = pow(number, 2);
	cout<<"Square of: "<<number<<" is "<<ans;

}

void logs()
{
	float number, ans;
	cout<<"Insert a number you want to get logarithm of: ";
	cin>>number;
	ans = log(number);
	cout<<"Logarithm of "<< number<<"is "<<ans;

}

void logsTen()
{
	float number, ans;
	cout<<"Insert a number you want to get tenth logarithm of: ";
	cin>>number;
	ans = log10(number);
	cout<<"Log10 of "<<number<<" is "<< ans;

}

void squareRoot()
{
	float number, ans;
	cout<<"Insert a number you want get square root of: ";
	cin>>number;
	ans = sqrt(number);
	cout<<"Square root of "<<number<<" is "<< ans;
}

void xthRoot()
{
	float number, root, ans;
	cout<<"Insert a number you want to get xth root of: ";
	cin>>number;
	cout<<"Insert the root: ";
	cin>>root;
	ans = pow(number, 1.0/root);
	cout<<root<<" th root of "<<number<<" is "<<ans;

}

void factorial()
{
	int number, ans;
	float answer;
	cout<<"Insert the number you want to get factorial of: ";
	cin>>number;
	while (number<0)
		{
			cout<<"Please insert only natural numbers ";
			cin>>number;
		}
		if (number == 0)
			ans = 1;
	for (int i = 1; i <= number; i++)
	{
		ans *=i;
	}
	answer = float(ans);
	cout<<"Factorial of a "<<number<<" is "<<answer;

}


