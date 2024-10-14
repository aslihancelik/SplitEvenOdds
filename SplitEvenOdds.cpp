// SplitEvenOdds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "intLinkedList.h"

using namespace std;

int main() {
    // Create an instance of intLinkedList
    intLinkedList list;

    // Insert some values into the original list
    list.insertLast(10);
    list.insertLast(15);
    list.insertLast(20);
    list.insertLast(25);
    list.insertLast(30);

    // Display the original list
    cout << "Original list: ";
    //list.print(); // Assuming print() is defined in unorderedLinkedList
    /*
    cout << "Original list: ";
    for (auto it = list.begin(); it != list.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    */

    // Display the original list using the range-based for loop
    cout << "Original list: ";
    for (auto x : list) { // Use range-based for loop with iterators
        cout << x << " ";
    }
    cout << endl;

    // Create two empty lists to hold even and odd numbers
    intLinkedList evensList;
    intLinkedList oddsList;

    // Call splitEvensOddsList to split the original list into evens and odds
    list.splitEvensOddsList(evensList, oddsList);
    /*
    // Display the even numbers list
    cout << "\nEven numbers list: ";
    evensList.print(); // Assuming print() is defined in unorderedLinkedList

    // Display the odd numbers list
    cout << "\nOdd numbers list: ";
    oddsList.print(); // Assuming print() is defined in unorderedLinkedList

    // Display the original list after splitting (should be empty)
    cout << "\nOriginal list after splitting (should be empty): ";
    list.print(); // Assuming print() is defined in unorderedLinkedList
    */
    /*
    cout << "Even numbers list: ";
    for (auto it = evensList.begin(); it != evensList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Odd numbers list: ";
    for (auto it = oddsList.begin(); it != oddsList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Check if the original list is empty after the split
    cout << "Original list after splitting (should be empty): ";
    for (auto it = list.begin(); it != list.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    */

    // Display the even numbers list
    cout << "Even numbers list: ";
    for (auto x : evensList) { // Use range-based for loop with iterators
        cout << x << " ";
    }
    cout << endl;

    // Display the odd numbers list
    cout << "Odd numbers list: ";
    for (auto x : oddsList) { // Use range-based for loop with iterators
        cout << x << " ";
    }
    cout << endl;

    // Check if the original list is empty after the split
    cout << "Original list after splitting (should be empty): ";
    for (auto x : list) { // Use range-based for loop with iterators
        cout << x << " ";
    }
    cout << endl;


    return 0;
}
