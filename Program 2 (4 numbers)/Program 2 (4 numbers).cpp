// Program 2 (4 numbers).cpp : This file contains the 'main' function. Program execution begins and ends there.
//Timothy Huff
//Program: PGM2
//Date: 9/1/2024
//Description: Program is to get 4 numbers from user find highest, lowest, average, and sort in descending and ascending orders
#include <iostream>

using namespace std;
//input 4 numbers
//print in increasing and decreasing order
//print largest, smallest, average

//insertion sort


void insertionSort(int arr[], int n) { //ai created loop from replit to sort array
    for (int i = 1; i < 4; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


int main() {
    int arr1[4];
    int sum = 0;
    char userChoice = 'y';

    while (userChoice == 'y') {//create loop to check if user wants to continue
        //input 4 values?
        cout << "Enter 4 values\n";
        for (int i = 0; i < 4; ++i) {// loop to create array
            cin >> arr1[i];
            sum = sum + arr1[i]; // get total
        }

        insertionSort(arr1, 4); // call function to sort numbers
        cout << endl;

        cout << "Array in Ascending Order: ";//loop to read array in ascending
        for (int i = 0; i < 4; ++i) {
            cout << arr1[i] << " ";
        }
        cout << endl;

        cout << "Array in Decending Order: ";//loop to read array in decending
        for (int i = 3; i >= 0; --i) {
            cout << arr1[i] << " ";
        }
        cout << endl;

        cout << endl;
        cout << "The largest number is: " << arr1[3] << endl;//print statements for largest, smallest , average
        cout << "The smallest number is: " << arr1[0] << endl;
        cout << "The average is: " << sum / 4 << endl; // numbers from sum divided by the amount of numbers to get average
        cout << endl;

        cout << "Do you want to go again? (y or n): "; //ask user for input to play again
        cin >> userChoice;
        userChoice = tolower(userChoice);//converts to lowercase
        while (userChoice != 'y' && userChoice != 'n') { //added loop to correct invalid inputs
            cout << "Invalid choice. Enter 'y' or 'n': ";
            cin >> userChoice;
            userChoice = tolower(userChoice); // corrected for upper
        }
    }
}