#include<iostream>
using namespace std;
// queue using linked list
struct node{
    int data;
    node* next;
    node(int d){
        data = d;
        next = NULL;
    }
};

struct quelist
{
    node* front, *rear;
    quelist(){
        front = rear = NULL;
    }

    void enqueue(int d)
    {
        node* temp = new node(d);
        //checking if queue is empty
        if(rear ==NULL){
            front = rear = temp; 
        }
        else{
            rear->next = temp;
            rear = temp;
        }

    }
    void dequeue(){
        if(front == NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        //creating a temp node to store front node
        node* temp = front;
        front = front->next;
        //if front becomes null, then rear should also be null
        if(front == NULL){
            rear = NULL;
        }
        delete temp;
    }
};

int main(){
    quelist q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<"Front element: "<<q.front->data<<endl;
    cout<<"Rear element: "<<q.rear->data<<endl;
    cout << "the next element after front is: " << q.front->next->data << endl;
    q.dequeue();
    cout<<"Front element after dequeue: "<<q.front->data<<endl;
    cout<<"Rear element after dequeue: "<<q.rear->data<<endl;
    return 0;
}
