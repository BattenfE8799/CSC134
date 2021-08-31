// CSC 134
// M6HW1- Final
// Elizabeth Battenfield
// 5/10/2021
#include <iostream>
#include <vector>

using namespace std;
//declare functions
void question1(), question2(), question3();


int main()
{
    //declare variable
    int choice;
    cout << endl;
    cout << endl;
    cout << "Main Menu" << endl;
    cout << "1) Question 1" << endl;
    cout << "2) Question 2" << endl;
    cout << "3) Question 3" << endl;
    cin >> choice;

    while ((choice < 0) || (choice > 3) )
    {
        cout << "Main Menu" << endl;
        cout << "1) Question 1" << endl;
        cout << "2) Question 2" << endl;
        cout << "3) Question 3" << endl;
        cin >> choice;
    }
    if (choice == 1){
        question1();
    }
    if (choice == 2){
        question2();
    }
    if (choice == 3){
        question3();
    }
}
void question1()
{ // question 1
    // declare variables
    string month1, month2, month3;
    double rain1, rain2, rain3, average;

    //ask for user input on months and rain
    cout << "Enter the first month: " << endl;
    cin >> month1;
    cout << "Enter the second month: " << endl;
    cin >> month2;
    cout << "Enter the third month: " << endl;
    cin >> month3;

    cout << "Enter rainfall for " << month1 << endl;
    cin >> rain1;
    cout << "Enter rainfall for " << month2 << endl;
    cin >> rain2;
    cout << "Enter rainfall for " << month3 << endl;
    cin >> rain3;


    // calculate average
    average = (rain1 + rain2 + rain3) / 3.0;

    //print information and average
    cout << "The average rainfall for " << month1 << ", " << month2;
    cout << ", " << month3 << " is " << average << " inches." << endl;
    main();
}
void question2()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Question 2";
    /*
    Question 2: calculating the volume of a 3d hypperrectangle
    */
    cout << endl;

    //declare variables
    double width, length, height, volume;

    // ask for user input
    cout << "Enter the width of the block: " << endl;
    cin >> width;
    while (width <= 0)
    {
        cout << "Number must be greater than 0. Try again." << endl;
        cout << "Enter the width of the block: " << endl;
        cin >> width;
    }
    cout << "Enter the length of the block: " << endl;
    cin >> length;
    while (length <= 0)
    {
        cout << "Number must be greater than 0. Try again." << endl;
        cout << "Enter the length of the block: " << endl;
        cin >> length;
    }
    cout << "Enter the height of the block: " << endl;
    cin >> height;
    while (height <= 0)
    {
        cout << "Number must be greater than 0. Try again." << endl;
        cout << "Enter the height of the block: " << endl;
        cin >> height;
    }

    //calculate volume of block
    volume = length * width * height;

    //display volume
    cout << "Volume is " << volume << endl;
    main();
}
void question3(){
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Question 3";
    cout << endl;
    // question 3
    //declare variables
    int numeral, num;

    //ask user for number
    cout << "Enter a number (1-10): " << endl;
    cin >> numeral;

    // switch statement to display the roman numeral version
    switch(numeral)
    {
    case 1:
        cout << "The Roman numeral version of " << numeral << " is I." << endl;
        break;
    case 2:
        cout << "The Roman numeral version of " << numeral << " is II." << endl;
        break;
    case 3:
        cout << "The Roman numeral version of " << numeral << " is III." << endl;
        break;
    case 4:
        cout << "The Roman numeral version of " << numeral << " is IV." << endl;
        break;
    case 5:
        cout << "The Roman numeral version of " << numeral << " is V." << endl;
        break;
    case 6:
        cout << "The Roman numeral version of " << numeral << " is VI." << endl;
        break;
    case 7:
        cout << "The Roman numeral version of " << numeral << " is VII." << endl;
        break;
    case 8:
        cout << "The Roman numeral version of " << numeral << " is VII." << endl;
        break;
    case 9:
        cout << "The Roman numeral version of " << numeral << " is IX." << endl;
        break;
    case 10:
        cout << "The Roman numeral version of " << numeral << " is X." << endl;
        break;
    default:
        cout << "Enter a number between 1 and 10." << endl;
        break;
    }

    main();

}
