#include "myComplex.h"
#include<iostream>

using namespace std;

//Default Constructor
myComplex::myComplex()
{
	real = 0;
	imgnry = 0;
}

//Input Constructor
myComplex::myComplex(double x, double y)
{
	real = x;
	imgnry = y;
}

//Copy Constructor
myComplex::myComplex(const myComplex &original)
{
	real = original.real;
	imgnry = original.imgnry;	
}

//Set Real
void myComplex::setReal()
{
	cout << "Please input the real number: ";
	cin >> real;
}

//Set Imaginary
void myComplex::setImaginary()
{
	cout << "Please input the imaginary number: ";
	cin >> imgnry;
}

//Get Real
double myComplex::getReal()
{
	return real;
}

//Get Imaginary
double myComplex::getImaginary()
{
	return imgnry;
}

//Operator overload <<
ostream &operator<<(ostream &strm, const myComplex &obj)
{
	strm << obj.real << " + " << obj.imgnry << "i";
	return strm;
}

//Operator overload >>
istream &operator>>(istream &strm, myComplex &obj)
{
	obj.setReal();
	obj.setImaginary();
	return strm;
}

//Operator overload =
myComplex &myComplex::operator=(const myComplex &right)
{
	real = right.real;
	imgnry = right.imgnry;
	return *this;
}