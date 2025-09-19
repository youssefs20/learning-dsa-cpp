#include <iostream>
using namespace std;
void swap(int &first, int &second)
{
    int temp = first;
    first = second;
    second = temp;

}


void SelectionSort(int *arr, int size)
{
    for(int counter = 0 ; counter < size ; counter++)
    {
        int minIndex = counter;
        for(int index = minIndex; index < size ; index++)
        {
            if(arr[index]<arr[minIndex])
            {
                minIndex = index;
            }
        }
        swap(arr[counter], arr[minIndex]);
    }
}

void Display(int *arr, int size)
{
    for(int i = 0 ; i <size ; i++){
        cout << arr[i] << " ";
    }

}

int main()
{
    int arr[6] = {3,5,4,6,2,1};
    SelectionSort(arr, 6);

    Display(arr, 6);
}