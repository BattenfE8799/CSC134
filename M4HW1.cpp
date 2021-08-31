// CSC 134
// M4HW1
// Elizabeth Battenfield
// 3/22/2021

#include <iostream>

using namespace std;

int main()
{
    //declare variables
    int firstNum, secondNum, answer;

    // simple message, no variables
    cout << "2 times 5 is 10" << endl << endl;

    // get number from user
    cout << "Pick a number between 1 and 12:" << endl;
    cin >> firstNum;
    while( (firstNum < 1) || (firstNum > 12))
    {
    cout << "Pick a number between 1 and 12:" << endl;
    cin >> firstNum;
    }

    // loop
    secondNum = 1;
    while (secondNum != 13)
    {
        answer = firstNum * secondNum;
        cout << firstNum << " times " << secondNum << " is " << answer << endl;
        secondNum += 1;
    }
    }

