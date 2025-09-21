#include <iostream>
using namespace std;
struct Node {
    int Data;
    Node* Left , * Right;
    Node(int d)
    {
        Data = d;
        Left = Right = NULL;
    }
};

struct Tree
{
    Node* root;
    Tree()
    {
        root = NULL;
    }

    void Add(int value)
    {
        Node* newnode = new Node(value);
        if (root == NULL) root = newnode;
        else
        {
            Node* current = root;
            Node* parent ;
            while(current!=NULL)
            {
                parent = current;
                if(value > current->Data)
                    current = current->Right;
                else
                    current = current->Left;
            }
            if(value > parent->Data)
                parent->Right = newnode;
            else
                parent->Left = newnode;
        }

    }


    Node* GetNodeByData(int data)
    {
        Node* current = root;
        while(current != NULL)
        {
            if( data == current ->Data)
                return current;
            else if(data > current ->Data)
                current = current->Right;
            else
                current = current->Left;
        }
        return NULL;
    }
    Node* GetMaxRight(Node* node)
    {
        Node* current = node;
        while(current->Right!=NULL)
        {
            current = current->Right;
        }
        return current;
    }

    Node* GetParent(Node *node)
    {
        Node* parent= root;
        while(parent !=NULL)
        {
            if(parent->Left ==node || parent ->Right ==node)
                return parent;
            if(node->Data > parent->Data)
                parent = parent->Right;
            else
                parent = parent->Left;
        }
        return NULL;
    }



    void traverse()
    {
        Display(root);
    }

    void Display(Node *node)
    {
        if(node == NULL)
            return;
        Display(node->Left);
        cout << node->Data << " ";
        Display(node->Right);
    }
};


int main()
{
    Tree t;
    t.Add(10);
    t.Add(5);
    t.Add(15);
    t.Add(3);
    t.Add(7);
    t.traverse();
    return 0;



}