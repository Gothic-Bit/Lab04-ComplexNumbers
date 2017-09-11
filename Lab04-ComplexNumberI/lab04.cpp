//Adrian Ruelas
//CSCI 41
//Lab04 Complex

#include "myComplex.h"
#include<iostream>

using namespace std;

int main()
{
	double x = 7, y = -2;

	myComplex norm;
	myComplex input (x, y);
	myComplex copy(input);

	cout << "***************************************** \n";
	cout << "This program tests the myComplex class \n";
	cout << "***************************************** \n\n";

	//Test constructors, and overloaded <<
	cout << "----- Constructors------------------------ \n";
	cout << "c1 = " << norm << endl;
	cout << "c2 = " << input << endl;
	cout << "c3 = " << copy << endl << endl;

	//Test >> overload and set functions
	cout << "-----Overloaded >>------------------------ \n";
	cin >> norm;
	cout << "c1 = " << norm << endl;

	//Test get functions
	cout << "-----Get Functions------------------------ \n";
	cout << "What is the real number of c1? \n";
	cout << norm.getReal() << endl;
	cout << "What is the imaginary number of c1? \n";
	cout << norm.getImaginary() << endl;

	//Test = overload
	cout << "----- Test = overload -------------------- \n";
	input = norm;
	copy = norm;
	cout << "c1 = " << norm << endl;
	cout << "c2 = " << input << endl;
	cout << "c3 = " << copy << endl << endl;

	system("pause");
	return 0;
}

/*
*****************************************
This program tests the myComplex class
*****************************************

----- Constructors------------------------
c1 = 0 + 0i
c2 = 7 + -2i
c3 = 7 + -2i

-----Overloaded >>------------------------
Please input the real number: 2
Please input the imaginary number: -5
c1 = 2 + -5i
-----Get Functions------------------------
What is the real number of c1?
2
What is the imaginary number of c1?
-5
----- Test = overload --------------------
c1 = 2 + -5i
c2 = 2 + -5i
c3 = 2 + -5i

Press any key to continue . . .

*****************************************
This program tests the myComplex class
*****************************************

----- Constructors------------------------
c1 = 0 + 0i
c2 = 7 + -2i
c3 = 7 + -2i

-----Overloaded >>------------------------
Please input the real number: -7
Please input the imaginary number: 23
c1 = -7 + 23i
-----Get Functions------------------------
What is the real number of c1?
-7
What is the imaginary number of c1?
23
----- Test = overload --------------------
c1 = -7 + 23i
c2 = -7 + 23i
c3 = -7 + 23i

Press any key to continue . . .

*****************************************
This program tests the myComplex class
*****************************************

----- Constructors------------------------
c1 = 0 + 0i
c2 = 7 + -2i
c3 = 7 + -2i

-----Overloaded >>------------------------
Please input the real number: 0
Please input the imaginary number: 21323
c1 = 0 + 21323i
-----Get Functions------------------------
What is the real number of c1?
0
What is the imaginary number of c1?
21323
----- Test = overload --------------------
c1 = 0 + 21323i
c2 = 0 + 21323i
c3 = 0 + 21323i

Press any key to continue . . .

*****************************************
This program tests the myComplex class
*****************************************

----- Constructors------------------------
c1 = 0 + 0i
c2 = 7 + -2i
c3 = 7 + -2i

-----Overloaded >>------------------------
Please input the real number: 2.34
Please input the imaginary number: -7.666
c1 = 2.34 + -7.666i
-----Get Functions------------------------
What is the real number of c1?
2.34
What is the imaginary number of c1?
-7.666
----- Test = overload --------------------
c1 = 2.34 + -7.666i
c2 = 2.34 + -7.666i
c3 = 2.34 + -7.666i

Press any key to continue . . .
*/