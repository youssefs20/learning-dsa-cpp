#include<iostream>
using namespace std;
void BubbleSort(int *arr,int size)
{
    for(int index = 0 ; index < size; index++)
    {
        if(arr[index]>arr[index+1])
        {
            int temp = arr[index];
            arr[index]= arr[index+1];
            arr[index+1]=temp;
        }

    }    
}
void Display(int *arr, int size){

    for( int index = 0; index<size;index++)
    {
        cout<<arr[index]<<" ";
    }
}

int main(){
    int arr[3,5,4,6,2,1];
    BubbleSort(arr,6);

    Display(arr,6);



}