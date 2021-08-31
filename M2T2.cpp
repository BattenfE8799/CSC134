// CSC 134
// M2T2
// Apples Store 2
// Elizabeth Battenfield
// 2/8/2020

#include <iostream>

using namespace std;

int main()
{
  // This program will simulate an apple orchard.
  // declaring variables
  string name;
  int numApples;
  double pricePerApple;

  //asking for input

  cout << "Please enter your name: " << endl;
  cin >> name;

  // number of apples do they have
  cout << "How many apples are there?: " << endl;
  cin >> numApples;

  // price per apple via cin
  cout << "How much per apple?: " << endl;
  cin >> pricePerApple;

  // calculate the total price of the apples
  double totalPrice = numApples * pricePerApple;

  // print all the information about the orchard

  cout << "Welcome to " << name << "'s apple orchard." << endl;
  cout << "We have " << numApples;
  cout << " apples in stock" << endl;
  cout << "Apples are currently $";
  cout << pricePerApple << " each." << endl;
  cout << "If you want them all, that is $" << totalPrice << endl;

}
