// CSC 134
// M2T1
// Receipt Calculator
// Elizabeth Battenfield
// 2/4/2020


#include <iostream>
using namespace std;

int main()
{
    //declare our variables
    double mealPrice = 5.99;
    double taxRate = 0.08; // 8% is 8/100 or 0.08
    double taxAmount; // the $ of the tax due
    double total;  // meal + tax

    //calculate the tax amount and the total
    taxAmount = taxRate * mealPrice; //8% of 5.99
    total = mealPrice + taxAmount;
    //print output
    cout << "Thank you for dining with us." << endl;
    cout << "Your meal total is $" << mealPrice << endl;
    cout << "The tax is $" << taxAmount << endl;
    cout << "Your total is $" << total << endl;
    cout << "Please come again." << endl;
}
