/******************************
/Programmer: Cesar Cervantes   /
/Date: Week 4				   /
/Program: stores and displays  /
/favorite movies through Arrays/
*******************************/

#include "Movie.h"
#include <iostream>
using namespace std;
//default constructor
MyMovie::MyMovie()
{
	filmName = "";
	year = 1900;
	rating = "G";
}
MyMovie::MyMovie(string name, int year, string rating)
{
	filmName = name;
	while (year < 1950 || year > 2017)
	{
		cout << "invalid year, please re-enter between 1950 and present:" << endl;
			cin >> year;
			cin.ignore();
	}
	this->year = year;
	this->rating = rating;
}

MyMovie::~MyMovie()
{
	//Todo auto-generated destructor stub
}
string MyMovie::getName()
{
	return filmName;
}
void MyMovie::setName(string name)
{
	filmName = name;
}
int MyMovie::getYear()
{
	return year;
}
void MyMovie::setYear(int year)
{
	while (year < 1950 || year > 2017)
	{
		cout << "invalid year, please re-enter between 1950 and present:" << endl;
		cin >> year;
	}
	this->year = year;
}
string MyMovie::getRating()
{
	return rating;
}
void MyMovie::setRating(string rating)
{
	this->rating = rating;
}