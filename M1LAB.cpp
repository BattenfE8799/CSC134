// CSC 134
// M1LAB
// Elizabeth Battenfield
// 1/24/2021

#include <iostream>
using namespace std;

int main() {
  // This program will simulate an apple orchard.
  // The owner's name
  string name = "Elizabeth Battenfield";
  // number of apples owned
  int apples = 100;
  // price per apple
  double pricePerApple = 0.25;

  // calculate the total price of the apples
  double totalPrice = apples * pricePerApple;

  // print all the information about the orchard

  cout << "Welcome to " << name;
  cout << " 's apple orchard." << endl;
  cout << "We have " << apples;
  cout << " apples in stock" << endl;
  cout << "Apples are currently $";
  cout << pricePerApple << " each." << endl;
  cout << "If you want them all, that is $" << totalPrice << endl;
}