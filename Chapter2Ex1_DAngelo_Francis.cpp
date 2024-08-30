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

	cout << "Please enter the initial of your first name: " << endl;
	cin >> firstInitial;
	cout << "Please enter the initial of your middle name: " << endl;
	cin >> middleInitial;
	cout << "Please enter the initial of your last name: " << endl;
	cin >> lastInitial;
	cout << "Your initials are: " << firstInitial << middleInitial << lastInitial;
}