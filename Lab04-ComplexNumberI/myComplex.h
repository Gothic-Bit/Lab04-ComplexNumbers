#ifndef MYCOMPLEX_H
#define MYCOMPLEX_H

#include<iostream>

using namespace std;

class myComplex
{
private:
	double real;
	double imgnry;
public:
	//Default Constructor
	myComplex();
	//Input Constructor
	myComplex(double, double);
	//Copy Constructor
	myComplex(const myComplex &);
	//setReal
	void setReal();
	//setImaginary
	void setImaginary();
	//getReal
	double getReal();
	//getImaginary
	double getImaginary();
	//overload <<
	friend ostream &operator << (ostream &, const myComplex &);
	//overload >>
	friend istream &operator >> (istream &, myComplex &);
	//overload =
	myComplex & operator=(const myComplex &);
};

#endif 
