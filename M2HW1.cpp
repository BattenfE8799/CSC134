// CSC 134
// M2HW1
// Q1 - bank account
// Elizabeth Battenfield
// 2/8/2021

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "**************** Question 1 ****************";
    cout << endl << endl;
    //initialize variables
    string name;
    double startBalance;
    double deposit;
    double withdrawal;
    double endBalance;

    // set decimal point amount
    cout << setprecision(2) << fixed << showpoint;

    // ask for user name using whitespace, starting balance
    // amount for deposit and withdrawal
    cout << "What is your name?: \n";
    getline(cin, name);
    cout << "What is your starting balance?: \n";
    cin >> startBalance;
    cout << "How much are you depositing today: \n";
    cin >> deposit;
    cout << "How much are you withdrawing today: \n";
    cin >> withdrawal;

    //calculate new balance
    endBalance = startBalance + deposit - withdrawal;

    // display account name and number, and final balance
    cout << "Account owner: " << name << endl;
    cout << "Account number: 230098761" << endl;
    cout << "Account ending balance: $" << endBalance << endl;








    // ask for user name using whitespace
    // ask for starting account balance
    // ask for amount of deposit
    // as for amount of withdrawal
    // calculate new balance
    // display name on account
    // display account number
    // display final account balance

    cout << endl << endl;
    cout << "**************** Question 2 ****************";
    cout << endl << endl;
// CSC 134
// M2HW1
// Q2 - crate update
// Elizabeth Battenfield
// 2/8/2021


    //Constants
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

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

    //initialize variables
    //get input for length, width, height
    //Calculate Volume in Cubic feet
    //Calculate cost
    //calculate customer price
    //calculate profit of any crate CGI builds
    //display data calculated

    // updates:
    //cost per cubic foot is now 0.3
    // cannot raise charge per cubic foor above .52
    // print all $ with 2 decimal places


    cout << endl << endl;
    cout << "**************** Question 3 ****************";
    cout << endl << endl;

// CSC 134
// M2HW1
// Q3 - pizza party
// Elizabeth Battenfield
// 2/8/2021


    //set constant for how many slices per person
    const int NUM_SLICES_PER_PERSON = 3;

    //set variables: numPizza, numSlices, numPeople
    int numPizza;
    int numSlices;
    int totalSlices;
    int numPeople;
    int numPeopleSlices;
    int leftOver;

    // as for input for:
    cout << "How many pizzas did you order: " << endl;
    cin >> numPizza;
    cout << "How many slices does each pizza have: " << endl;
    cin >> numSlices;
    cout << "How many people are coming: " << endl;
    cin >> numPeople;

    //calculate how many pieces of pizza are left over
    totalSlices = numPizza * numSlices;
    numPeopleSlices = numPeople * NUM_SLICES_PER_PERSON;
    leftOver = totalSlices - numPeopleSlices;

    // display how many pieces are left over after party
    cout << "You have " << leftOver << " slices of pizza left." << endl;



    //set variables: numPizza, numSlices, numPeople
    // as for input for:
        //how many pizzas
        //how many slices per pizza
        // how many visitors are coming
    //calculate how many pieces of pizza are left over
    // display how many pieces are left over after party


    cout << endl << endl;
    cout << "**************** Question 4 ****************";
    cout << endl << endl << endl;

// CSC 134
// M2HW1
// Q4 - Cheering
// Elizabeth Battenfield
// 2/8/2021

    //set variables
    string letsGo = "Let's go ";
    string school = "FTCC";
    string team = "Trojans";
    string cheerOne;
    string cheerTwo;

    //use strings contantation to build cheer one and cheer two
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    //display Let's go FTCC*3, Let's go Trojans
    cout << cheerOne << endl << cheerOne << endl << cheerOne << endl;
    cout << cheerTwo << endl;
    return 0;

    //display Let's go FTCC*3, Let's go Trojans
    //use string school, team;
    //don't print any raw strings, only string variables
    //string letsGo, school, team, cheerOne, cheerTwo
    //use strings contantation to build cheer one and cheer two
    // use the + operator to build strings

}
