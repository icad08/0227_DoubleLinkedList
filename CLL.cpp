#include <iostream>
#include <string>
using namespace  std;

struct Node{
    int noMhs;
    string name;
    Node* next;
    Node* prev;
};

Node * START = NULL;

void addNode(){
    Node * newNode = new Node (); // step 1: create a new node
    cout << "\nEnter the roll number of student: ";
    cin >> newNode -> noMhs; // assign value to the daata field of the new node
    cout << "\nEnter the name of student: ";
    cin >> newNode -> name; // assign value to the data field of the new node

    // insert the new node in the list
    if  (START == NULL || newNode ->noMhs <= START->noMhs) {

    if (START == NULL && newNode -> noMhs == START  -> noMhs) {
       cout << "\033 [31mDuplicate roll number not allowed\033]0m" << endl;
       return;  
    }
    // if the list is empty, make the new node the START
    newNode -> next  = START; // step 3: make the new node point to the first node
    if (START != NULL ) {
        START= ->prev  = newNode ;// step 4: make the first node point to the new node 
    }
    newNode->prev = newNode; // step 5: make the new node point to NULL
    START = newNode; // step 6: make the new node the first node
    }
}
else {
    // insert the new node in the middle or at the end
   node *current = START:
   node *previous = NULL;

   while (current != NULL && current->noMhs < newNode->noMhs) {
    previous = current;
    current = current->next;
   }
   newNode->next = current;
   newNode->prev = previous;

   if(previous != NULL){
    current -> prev = newNode;
   }
}


int main(){

}