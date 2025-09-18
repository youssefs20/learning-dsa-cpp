#include <iostream>

using namespace std;
class Queue{
    // queue using array
    int *arr;
    int size, front , rear;
    

    public: 
    Queue(int size){
        this-> size= size;
        arr = new int [size];// dynamically allocate the array
        front = rear = -1;
    }


    void enqueue(int data){
        if(IsFull()){
            cout << "Queue Overflow" << endl;
            return ;
        }
        if(IsEmpty()){
            front++;
        }
        rear++;
        arr[rear] = data;
        cout<< data <<"enqueued to queue"<< endl;
    }


    int DeQueue(int &data){
        if(IsEmpty()){
            
        }





    }


    private:

    int IsFull(){
        return rear == size -1;
    }
    int IsEmpty(){
        return front == -1;
    }


};