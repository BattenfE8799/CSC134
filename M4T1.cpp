// CSC 134
// M4T1
// Elizabeth Battenfield
// 3/8/2021
#include <iostream>

using namespace std;

int main()
{
    // Program 5-3
    // using a simple while loop.
    int number = 0;


    while (number < 5)
    {
        cout << "Hello\n";
        number++;
    }
    cout << "That's all!\n";
    cout << endl << endl << endl;

    // Program 5-6
    // displays a list of numbers and their squares
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER;

    cout << "Number\tNumber Squared\n";

    while (num <= MAX_NUMBER)
    {
        cout << num << "\t" << (num * num) << endl;
        num++;
    }
    return 0;

}
