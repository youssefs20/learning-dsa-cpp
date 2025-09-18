#include <iostream>
/* TO-DO : implement stack using Linkedlist */
using namespace std;
class Stack{
    // stack using array
    // intialize a pointer to array 
    int *arr;
    //optional to have size variable
    int size;
    int top;

    public:
    Stack(int size){
        //dynamically allocate the array
        arr = new int[size];
        this->size = size;
        top = -1; // stack is empty

    }


    // push operation
    void push(int data){
        if(isFull()){

            cout << "stack overflow"<< endl;
            return;
        }
        top ++;// increment the top
        arr[top]=data ;// add data to the top
        
    }


    // pop operation
    int pop(int data)
    {
        if(IsEmpty()){
            return -1;
        }
        data = arr[top];
        top --;
        return data;


    }

    void display(){
        for(int i=top; i>=0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    private:

    int isFull(){
        return top == size - 1;
    }
    int IsEmpty(){
        return top == -1;
    }
};