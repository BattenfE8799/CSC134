// CSC 134
// M2LAB1
// 3.11 Case Study
// Elizabeth Battenfield
// 2/8/2021


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Constants
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    //variable
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;

    //set the desired output formatting for numbers.
    cout << setprecision(2) << fixed << showpoint;

    //ask for crate dimensions, length, width, and height
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    //calculate volume, cost to produce it
    //the charge to the customer, and the profit
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    //display data calculated

    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;

    //initialize variables
    //get input for length, width, height
    //Calculate Volume in Cubic feet
    //Calculate cost
    //calculate customer price
    //calculate profit of any crate CGI builds
    //display data calculated
}
