/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tiara
 *
 * Created on June 2, 2019, 4:32 PM
 */
//Linked List Program 2
#include <cstdlib>

#include <iostream>
#include "List.h"
using namespace std;

int main(int argc, char** argv) {

    char selection;
    List L;
    ElementType value;
    const char SENTINEL = '6';

    cout << "Let's create your list!" << endl;
    cout << "Menu" << endl;
    cout << "1. Insert" << endl; //Adds values to the created list
    cout << "2. Delete" << endl; //Deletes values from the list
    cout << "3. Display" << endl; //Displays list values
    cout << "4. Sum" << endl; //Sums the list values
    cout << "5. Average" << endl; //Averages the list values
    cout << "6. Quit" << endl; //Exits the program

    cout << "Enter a number 1-6 for your menu selection: ";
    cin >> selection;
    cout << selection << endl;

    while (selection != '6') {
        switch (selection) {
            case '1':
            {
                cout << "Please enter the value you want to add: ";
                cin >> value;
                L.InsertAtEnd(value);

            }
                break;
            case '2':
            {
                cout << "Please enter the value you want to remove: ";
                cin >> value;
                cout << value;
                L.Delete(value);

            }
                break;
            case '3':
            {
                cout << "Here are the values in your list: ";
                L.Display();
            }
                break;
            case '4':
            {
                cout << "This is the sum of the values in your list: " << L.Sum();
            }
                break;
            case '5':
            {
                cout << "This is the average of the values in your list: " << L.Average();
            }
                break;
                //If anything else is entered besides the current selections
            default: cout << "Invalid selection." << endl;
        }
        cout << endl;
        cout << "Enter a number 1-6 for your menu selection: ";
        cin >> selection;
        cout << selection << endl;
    }
    return 0;
}


