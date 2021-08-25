// SelectionSortFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void SelectionSort(int Array[], int ArraySize) {
    for (int i = 0; i < ArraySize - 1; i++) {
        int min = i;
        for (int j = i + 1; j < ArraySize; j++) {

            if (Array[j] < Array[min])
                min = j;
        }
        if (min != i) {
            int temp = Array[min];
            Array[min] = Array[i];
            Array[i] = temp;
        }
    }
   
}
int main()
{
    int x;
    int MyArray[900];

    cout << "enter your Array size" << endl;
    cin >> x;


    cout << "now enter your numbers for your array" << endl;
    for (int i = 0; i < x; i++) {
        cin >> MyArray[i];
    }

    SelectionSort(MyArray, x);

    for (int i = 0; i < x; i++) {
        cout << MyArray[i]<<"\t";
    }
    return 0;

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
