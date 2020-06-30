// favoriteMovies.cpp : This file contains the 'main' function. Program execution begins and ends there.
/******************************
/Programmer: Cesar Cervantes   /
/Date: Week 4				   /
/Program: stores and displays  /
/favorite movies through Arrays/
*******************************/

#include <iostream>
#include "Movie.h"
using namespace std;

	int main()
	{
		char filmname[50], filmrating[6];
		int year{};

		cout << "What is the title of the movie?: \n";
		cin.getline(filmname, 50);
		cout << "What year was it released? \n";
		cin >> year;
		cin.ignore();
		cout << "What is the rating (G, PG, PG-13, R, M): \n";
		cin.getline(filmrating, 6);
		//instantiate the movie object
		MyMovie movie1(filmname, year, filmrating);

		cout << "\nWhat is the next title: \n";
		cin.getline(filmname, 50);
		cout << "What year was it released? \n";
		cin >> year;
		cin.ignore();
		cout << "What is the rating (G, PG, PG-13, R, M) :\n";
		cin.getline(filmrating, 6);
		MyMovie movie2(filmname, year, filmrating);

		cout << "\nWhat is the next title: \n";
		cin.getline(filmname, 50);
		cout << "What year was it released? \n";
		cin >> year;
		cin.ignore();
		cout << "What is the rating (G, PG, PG-13, R, M) :\n";
		cin.getline(filmrating, 6);
		MyMovie movie3(filmname, year, filmrating);

		//print out all movies in the array:
		cout << "Your top three favorite movies are: \n";
		cout << "Movie title: " << movie1.getName();
		cout << "\nIt was released in: " << movie1.getYear() << "\n";
		cout << "It is rated: " << movie1.getRating() << endl << endl;

		cout << "Movie title: " << movie2.getName();
		cout << "\nIt was released in: " << movie2.getYear() << "\n";
		cout << "It is rated: " << movie2.getRating() << endl << endl;

		cout << "Movie title: " << movie3.getName();
		cout << "\nIt was released in: " << movie3.getYear() << "\n";
		cout << "It is rated: " << movie3.getRating() << endl << endl;
	}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
