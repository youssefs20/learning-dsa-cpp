#include <iostream>

class Node
{
public:
    // void display() {
    //     std::cout << "This is the first class." << std::endl;
    // }
    //as long as i make linked list i should have i node class that has data and pointer to next node
    int Data;
    Node *next, *prev;

    Node(int data){
        //constructor that initializes data and sets next to null
        
        Data = data;
        next = prev = NULL;

    }
};
