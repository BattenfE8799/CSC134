// CSC 134
// M4LAB1
// Elizabeth Battenfield
// 3/15/2021
#include <iostream>

using namespace std;

int main()
{
    cout << "M4LAB1\n";

    //declare variables
    int height, width;

    // ask user for sizes

    cout << "How tall should the block be?" << endl;
    cin >> height;
    cout << "How wide should the block be?" << endl;
    cin >> width;
 // row
    cout << "One row" << endl;
    for (int j = 0; j < width; j++)
    {
        cout << "*" << " ";
    }
    // column
    cout << endl << "One column" << endl;
    for (int j = 0; j < height; j++)
    {
        cout << "*" << endl;
    }
    // block
    cout << "The entire block" << endl;
    for (int j = 0; j < height; j++)
    {
        for (int i = 0; i < width; i++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

}
