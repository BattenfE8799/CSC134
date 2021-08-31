// CSC 134
// M1HW1
// Elizabeth Battenfield
// 1/24/2021

#include <iostream>
using namespace std;

int main() {
  // This program will talk about my favorite movie. 
  // The movie's name
  string movieName = "Strange Magic";
  // year it came out
  int year = 2015;
  // box office gross
  double boxOfficeGross = 13.6;

  string song = "Stronger by Kelly Clarkson";

  string song2 = "Wild Thing by Chip Taylor";
  // print all the information about the movie

  cout << "My favorite movie \"" << movieName << "\" came out in " << year << "." << endl;
  cout << "It had a worldwide gross of about ";
  cout << boxOfficeGross << " million dollars." << endl;

  //extra information about movie
  cout << endl;
  cout << "One of the reasons \"" << movieName;
  cout << "\" is my favorite movie" << endl;
  cout << "is because it is a musical that ";
  cout << "uses popular songs like " << endl;
  cout << "'" <<song;
  cout << "' and '" << song2 << "'" <<endl;
  cout << " instead of making some for the movie." << endl;

  cout << endl;
  cout << "One of my favorite scenes is the ball where Mariane" << endl; 
  cout << " (the main character) has a song battle with her ex " << endl;
  cout << "where he is singing 'Mariane' and she is singing back";
  cout << endl << " at him '" << song << "'.";
  cout << endl;
  cout << endl;
  cout << "My favorite quote is from when Sunny meets the imp," << endl;
  cout << "\"Right now I'm not in a HaHa frame of mind." << endl;
  cout << "I'm in a AHH frame of mind.\"";
  cout << endl;
  cout << endl;
  cout << "Another favorite scene of mine is where Mariane" << endl;
  cout << " has a sword fight with the bog king." << endl;
}