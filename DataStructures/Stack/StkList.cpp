//A stack using linked list
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* link;
};

Node* top;
void push(int data)
{
    Node* temp = new Node();
    if (!temp)
    {
        cout << "\n Stack Overflow";
        exit(1);
    }
    temp->data = data;
    temp->link = top;
    top = temp;
}
int isEmpty()
{
    return top == NULL;
}

int peek()
{
    if (!isEmpty())
        return top->data;
    else
        exit(1);
}

void pop()
{
    Node* temp;
    /* if (top == NULL)
    {
        cout << "\nStack Underflow" ;
        exit(1);
    } */
    if(isEmpty()){
        cout << "\nStack Underflow" ;
        exit(1);
    }
    else
    {
        temp = top;
        top = top->link;
        free(temp);
    }
}

void display()
{
    Node* temp;
    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " \t";
            temp = temp->link;
        }
    }
}

int main()
{
    push(11);
    push(22);
    push(33);
    push(44);

    display();
    cout << "\n Top element is: "<< peek() << "\n\n";

    pop();
    pop();

    display();
    cout << "\n Top element is : "<< peek();

    return 0;
}
