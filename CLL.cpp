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

    // insert the new code in the list
    if (START == NULL && newNode -> noMhs == START  -> noMhs) {
        
    }
}


int main(){

}