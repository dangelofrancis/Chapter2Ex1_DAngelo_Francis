/*
TITLE: Chapter 2 Exercise 1 - Checkpoint 2.14
FILE NAME: Chapter2Ex1_DAngelo_Francis.cpp
PROGRAMMER: D'Angelo Francis
DATE: 8/2024
REQUIREMENTS: Write a program that has the following character variables: first, middle, and last. 
Store your initials in these variables then display them on the screen
*/

#include <iostream>
using namespace std;

int main()
{
	char firstInitial;
	char middleInitial;
	char lastInitial;
	string firstName;

	cout << "Please enter the initial of your first name: ";
	cin >> firstInitial;
	cout << "Please enter the initial of your middle name: ";
	cin >> middleInitial;
	cout << "Please enter the initial of your last name: ";
	cin >> lastInitial;
	cout << "Your initials are: " << firstInitial << middleInitial << lastInitial << endl;
	cout << "Please enter your first name: ";
	cin >> firstName;
	cout << "Your first name is: " << firstName;

}