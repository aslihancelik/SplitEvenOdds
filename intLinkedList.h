#ifndef H_intLinkedList
#define H_intLinkedList

#include "unorderedLinkedList.h"

using namespace std;

class intLinkedList : public unorderedLinkedList<int>
{
public:

    void splitEvensOddsList(intLinkedList& evensList, intLinkedList& oddsList);

    // Function to rearrange the nodes of the linked list so
    // that evensList consists of even integers and oddsList
    // consists of odd integers.
    // Postcondition: evensList consists of even integers.
    // oddsList consists of odd integers.
    // The original list is empty.
    //
};

void intLinkedList::splitEvensOddsList(intLinkedList& evensList, intLinkedList& oddsList) {

    //Pointer to traverse the original list
    nodeType<int> *current = this->first;

    // Initialize evensList and oddsList to empty lists
    evensList.first = nullptr;
    evensList.last = nullptr;
    evensList.count = 0;

    oddsList.first = nullptr;
    oddsList.last = nullptr;
    oddsList.count = 0;

    // Traverse the original list
    while (current != nullptr) {

        // Check if the current node data is an even number
        if (current->info % 2 == 0) {
            // Add to the evensList
            //If evensList is empty
            if (evensList.count == 0) {
                //Set first node
                evensList.first = current;
            }
            else {
                // Otherwise, add current node to the end of evensList
                evensList.last->link = current;
            }
            // Update the last pointer
            evensList.last = current;
            // Increment evensList count
            evensList.count++;
            // Advance current to the next node
            current = current->link;
            // Set the link of the last node of evensList to nullptr
            evensList.last->link = nullptr;
        }
        else {
            // Add to the oddsList
            if (oddsList.count == 0) {
                oddsList.first = current; // First node in oddsList
            }
            else {
                // Link the current node to the end of the oddsList
                oddsList.last->link = current;  
            }
            // Update the last pointer
            oddsList.last = current;
            // Increment oddsList count
            oddsList.count++;
            // Advance current to the next node
            current = current->link;
            // Set the link of the last node of oddsList to nullptr
            oddsList.last->link = nullptr;
        }

    }

    // Clear the original list
    this->first = nullptr;
    this->last = nullptr;
    this->count = 0;

}


#endif