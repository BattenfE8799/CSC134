// CSC 134
// M3HW1 - Gold
// Elizabeth Battenfield
// 3/1/2021
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Question 1
    cout << "Question 1" << endl;
    // chat bot with a short conversation.
    // declare variables
    string userYN;

    //chat program
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> userYN;

    // different paths with more to dialog
    if (userYN == "yes")
    {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (userYN == "no")
    {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else
    {
        cout << "If you're not sure... that's OK." << endl;
    }

    // Question 2
    cout << endl << endl;
    cout << "Question 2" << endl;
    // recipt

    //declare our variables
    double mealPrice;
    double taxRate = 0.08; // 8% is 8/100 or 0.08
    double taxAmount; // the $ of the tax due
    double total;  // meal + tax
    int dineIN;
    double tip;

    // get mealprice and if dine in or takeaway
    cout << "What is the price of your meal?" << endl;
    cin >> mealPrice;
    cout << "Please enter 1 for dine in, 2 for to go order." << endl;
    cin >> dineIN;

    //calculating tip
    if (dineIN == 1)
    {
        tip = mealPrice * 0.15;
    }
    else
    {
        tip = 0;
    }

    //calculate the tax amount and the total
    taxAmount = taxRate * mealPrice; //8% of 5.99
    total = mealPrice + taxAmount + tip;



    //print output
    cout << "Thank you for dining with us." << endl;
    cout << "Your meal price is $" << mealPrice << endl;
    cout << "The tax is $" << taxAmount << endl;
    if (tip > 0)
    {
        cout << "Your tip amount is $" << tip << endl;
    }
    cout << "Your total is $" << total << endl;
    cout << "Please come again." << endl;


    // Question 3
    cout << endl << endl;
    cout << "Question 3" << endl;
    //adventure


    // declare variables
    int choiceOne;
    int choiceTwo;
    int choiceThree;
    int live;
    int notLive;

    // declare situation for story game

    cout << "You are walking around lost in an unfamiliar city." << endl;
    cout << "There is a fork in road in front of you." << endl;
    cout << "" << endl << endl;

    // give them their first choice
    cout << "Which way do you go? left (1) or right (2)" << endl;
    cin >> choiceOne;

    // what path they chose
    if (choiceOne == 1) {
        cout << "A vampire jumps out of an ally and bites you." << endl;
        cout << "You have died." << endl;
    }
    else if (choiceOne == 2)
    {
        cout << "You go right, and walk until you come to a stoplight." << endl;
        cout << "You don't see any cars coming from any direction." << endl;
        cout << "Do you wait for the signal to cross (1), or cross now (2)?" << endl << endl;
        cin >> choiceTwo;

        if (choiceTwo == 2)
        {
            cout << "You decide to cross right now." << endl;
            cout << "As you cross the road, you feel the ground rumble." << endl;
            cout << "You look to your left and see a bunch of moose stampeeding down the road at you." << endl;
            cout << "You have died." << endl;
        }
        else if (choiceTwo == 1)
        {
            cout << "You decide to wait for the signal before crossing." << endl;
            cout << "while you wait, a stampede of moose travels through the intersection in front of you." << endl;
            cout << "After they pass through, the signal changes and you walk safely accross the road." << endl;
            cout << endl << endl;

            cout << "You start to get hungry and see two restaurants on this street." << endl;
            cout << "Do you go to the one on your left (1) or your right(2)?" << endl;
            cin >> choiceThree;

            if (choiceThree == 1)
            {
                cout << "You go into the restaurant on your left." << endl;
                cout << "It's empty. You leave and try the one on your right." << endl;
                cout << "It's empty as well." << endl;
                cout << "You continue walking down the street. Its never ending." << endl << endl;
                cout << "You never find your way and lose." << endl;

            }
            else if (choiceThree == 2)
            {
                cout << "You go into the restaurant on your right." << endl;
                cout << "It is a burger joint filled with people." << endl;
                cout << "You are able to eat your fill, and get directions." << endl << endl;
                cout << "You are no longer lost. You have won!" << endl;
            }
        }

    }


    // Question 4
    cout << endl << endl;
    cout << "Question 4" << endl;
    // math practice

    //declare variables
    int ranOne;
    int ranTwo;
    int userAnswer;
    int answer;

    // get random number and calculate answer
    srand(time(0));
    ranOne = (rand() % 100);
    ranTwo = (rand() % 100);
    answer = ranOne + ranTwo;

    //print numbers as addition problem
    cout << ranOne << " + " << ranTwo << " = ?" << endl;
    cin >> userAnswer;

    if (userAnswer == answer)
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect." << endl;
    }

    return 0;
}
