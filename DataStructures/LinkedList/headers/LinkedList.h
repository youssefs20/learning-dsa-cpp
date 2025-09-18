#include <iostream>
#include "Node.h"

using namespace std;
class LinkedList
{
    // as long as i make linked list i should have head and tail pointer
    //head points to first node and tail pointes to last node
    // the creation of node must be done inside the linked list class
    Node *head, *tail;
    public:
    LinkedList(){
        head = tail = NULL;
    }


    void Add(int data){
        Node *node = new Node(data);
        //creating a new node every time add is called
        if(head == NULL)
        {
            //check if the list is empty
            head = tail = node;
            //if it is empty both head and tail point to the new node
        }
        else
        {
            tail->next = node;
            node-> prev = tail;
            tail = node;
        }
    
    }
    void Display()
    {
        Node *Current = head;
        //new pointer pointing to head
        while(Current !=NULL){
            cout << Current->Data<<" ";
            Current = Current->next;
            //making current point to the next node 
        }
    }

    void Remove(int data)
    {
        Node *node = getNodeByData(data);
        if(node == NULL) return;
        
        if(node == head)
        {
            if(node == tail)
            {
                head = tail = NULL;
            }
            else
            {
                head = head->next;
                head->prev = NULL;
            }

        }
        else if (node == tail){
            tail = tail->prev;
            tail->next = NULL;
        }
        else{
            node->prev->next = node->next;
            node->next->prev = node->prev;

        }
            
            
        delete node;



    }

    //TO-DO: implement insert after and insert before functions
    void InsertAfter(int data, int afterData)
    {
        Node *curr = getNodeByData(afterData);
        if(curr == NULL) return;

        Node *node = new Node(data);
        if(curr == tail) {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
        else
        {
            node->next = curr->next;
            node->prev = curr;
            curr->next->prev = node;
            curr->next = node;
        }
    }


    //TO-DD
    int GetDataByIndex(int index)
    {
        Node *Ind=head;
        //as long as i dont know the length i should do a while loop
        int count = 0;
        while (Ind!=NULL)
        {
            if(count == index){
                return Ind->Data;
            }
            Ind = Ind->next;
            count++;
        }
        return -1; //if index is out of range
        
    }

    private:
        //function that gets node by data
        Node* getNodeByData (int data)
        {
            Node *Current = head; 
            while(Current!=NULL)
            {
                if(data == Current->Data)
                {
                    return Current;
                }
                Current = Current->next;
            }
            return NULL;
        }

};