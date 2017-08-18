/*
Author: Quinatzin Sintora
Date: 01/13/2016
File Name: Letter Grade
This program is used to ask the user for a letter grade as in
A,B,C,D, or F with -, + in where the value of 0.3 is given for +  or decressed
if - and A = 4, B = 3, C = 2, D = 1, F = 0;

*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string gradeInput;					//used for string input
	string plusSign = "+";				//used for + string
	string minusSign = "-";				//used for - string
	double gradeScore = 0;				//letter grade

	//use a foo loop to enter grade 10 times for test
	for (int i = 0; i < 10; i++) {
		cout << "Please enter a letter Grade : " << endl;
		cin >> gradeInput;

		if (gradeInput == "A" || gradeInput == "a")
		{
			gradeScore = 4;
		}
		if (gradeInput == "A-" || gradeInput == "a-")
		{
			gradeScore = 4 - 0.3;
		}
		if (gradeInput == "A+" || gradeInput == "a+")
		{
			gradeScore = 4;
		}//end of A codes


		if (gradeInput == "B" || gradeInput == "b")
		{
			gradeScore = 3;
		}
		if (gradeInput == "B-" || gradeInput == "b-")
		{
			gradeScore = 3 - 0.3;
		}
		if (gradeInput == "B+" || gradeInput == "b+")
		{
			gradeScore = 3 + 0.3;
		}//end of B grade code


		if (gradeInput == "C" || gradeInput == "c")
		{
			gradeScore = 2;
		}
		if (gradeInput == "C-" || gradeInput == "c-")
		{
			gradeScore = 2 - 0.3;
		}
		if (gradeInput == "C+" || gradeInput == "c+")
		{
			gradeScore = 2 + 0.3;
		}//end of C grade code 


		if (gradeInput == "D" || gradeInput == "d")
		{
			gradeScore = 1;
		}
		if (gradeInput == "D-" || gradeInput == "d-")
		{
			gradeScore = 1 - 0.3;
		}
		if (gradeInput == "D+" || gradeInput == "d+")
		{
			gradeScore = 1 + 0.3;
		}//end of D grade code

		if (gradeInput == "F" || gradeInput == "f")
		{
			gradeScore = 0;
		}//end of F grade code

		cout << "The numeric values is : " << gradeScore << endl;
	}
	
	system("pause");
	return 0;
}//end of main code