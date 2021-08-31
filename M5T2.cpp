// CSC 134
// M5T2
// Elizabeth Battenfield
// 3/29/2021
#include <iostream>

using namespace std;

int square(int number)
{  /* function that takes an int, and returns the square of that int(value returning)*/
    //declare variable
    int result;
    // square number
    result = number * number;
    return result;

}

void printAnswer(int count, int result)
{  /* function that prints one line of the answer(void) */
    cout << count << " squared= " << result << endl;
}
int main()
{
    //declare variables
    int count = 1;
    int result;
    //count some numbers and find a result for each
    while(count <= 10){

        result = square(count);
        printAnswer(count, result);
        count ++;
    }

}
