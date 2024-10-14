// SplitEvenOdds.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// This program demonstrates a linked list of integers that splits its elements into two separate lists :
// one for even numbers and one for odd numbers.After splitting, the original list becomes empty.

// Key operations in this file include :
// Inserting integers into the list.
// Splitting the list into even and odd lists.
// Printing the elements of all lists using a range - based for loop with iterators.


#include <iostream>
#include "intLinkedList.h"

using namespace std;

int main() {

    // Create an instance of intLinkedList
    intLinkedList list;

    // Read values from the user to populate the list
    int numElements;
    cout << "Please enter the number of elements you would like to insert to the list: ";
    cin >> numElements;

    //Prompt the user to enter the values one by one while adding them to the list
    for (int i = 1; i <= numElements; ++i) {
        int value;
        cout << "Enter value " << i << ": ";
        cin >> value;
        list.insertLast(value);
    }

    cout << "Original list: ";
    // Display the original list using the range-based for loop with iterators

    for (auto x : list) { 
        cout << x << " ";
    }
    cout << endl;

    // Create two empty lists to hold even and odd numbers
    intLinkedList evensList;
    intLinkedList oddsList;

    // Call splitEvensOddsList to split the original list into evens and odds
    list.splitEvensOddsList(evensList, oddsList);

    // Display the even numbers list using range-based for loop with iterators
    cout << "Even numbers list: ";
    for (auto x : evensList) { 
        cout << x << " ";
    }
    cout << endl;

    // Display the odd numbers list using range-based for loop with iterators
    cout << "Odd numbers list: ";
    for (auto x : oddsList) { 
        cout << x << " ";
    }
    cout << endl;

    // Check if the original list is empty after the split use range-based for loop with iterators
    cout << "Original list after splitting (should be empty): ";
    for (auto x : list) { 
        cout << x << " ";
    }
    cout << endl;


    return 0;

}
