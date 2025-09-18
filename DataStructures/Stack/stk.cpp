#include <iostream>
#include "headers/Stack.h"
//Stack using array
using namespace std;
int main() 
{
    Stack stk(5);// creating object of stack class
    stk.push(10);
    stk.push(12);
    stk.push(13);
    stk.push(14);
    stk.push(11);
    int poppedVAlue = stk.pop(4); //int because pop returns an integer
    cout << "popped value is " << poppedVAlue << endl; 
}