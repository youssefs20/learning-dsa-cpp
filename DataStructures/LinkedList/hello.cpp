#include <iostream>
#include "headers/LinkedList.h"

using namespace std;
int main() {
    LinkedList list;
    list.Add(10);
    list.Add(20);
    list.Add(30);
    list.InsertAfter(25, 20);
    list.Display();
    std::cout << std::endl;

    list.GetDataByIndex(3);
    std::cout << list.GetDataByIndex(3) << std::endl; 













  return 0;
}