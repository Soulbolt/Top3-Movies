/******************************
/Programmer: Cesar Cervantes   /
/Date: Week 4				   /
/Program: stores and displays  /
/favorite movies through Arrays/
*******************************/
#pragma once

#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>
using namespace std;

class MyMovie
{
private:
	string filmName;
	int year;
	string rating;

public:
	MyMovie();
	MyMovie(string, int, string);
	~MyMovie();
	void setName(string);
	string getName();
	void setYear(int);
	int getYear();
	void setRating(string);
	string getRating();
};

#endif /* MOVIE_H_ */
