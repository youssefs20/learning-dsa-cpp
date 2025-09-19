#include<iostream>
using namespace std;

void swap(int &first, int &second)
{
    int temp = first;
    first = second;
    second = temp;

}

void BubbleSort(int *arr,int size)
{
    int iteration =0;
    int sorted = 0; // assume array is not sorted

    for(int counter = 0 ; counter < size-1 && sorted == 0 ; counter++){
        sorted = 1; // assume array is sorted

        for(int index = 0 ; index < size-1-counter; index++)
        {
            if(arr[index]>arr[index+1])
            {
                /* int temp = arr[index];
                arr[index]= arr[index+1];
                arr[index+1]=temp; */
                swap(arr[index],arr[index+1]);
                sorted = 0; // array is not sorted
            }
            iteration++;

        }    
    }
    cout<<"number of iterations : "<<iteration<<endl;
}

void Display(int *arr, int size){

    for( int index = 0; index<size;index++)
    {
        cout<<arr[index]<<" ";
    }
    cout<<endl;
}

int main(){
    //int arr[6]= {3,5,4,6,2,1};
    int arr[6]= {1,2,3,4,5,6};
    BubbleSort(arr,6);

    Display(arr,6);

    // BubbleSort(arr,6);
    // Display(arr,6);



}
