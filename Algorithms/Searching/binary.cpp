#include <iostream>
using namespace std;

int BinarySearch(int data, int *arr, int size)
{
	int minIndex = 0, maxIndex = size-1, midIndex ;
	//if i dont know how many iteration so use while loop
	while(minIndex <=maxIndex)
	{
		midIndex = (minIndex + maxIndex) / 2; 
		
		if(data == arr[midIndex]) return midIndex;
		
		if (data > arr[midIndex])
		{
			minIndex = midIndex + 1;
		}  
		else{
			maxIndex = midIndex -1;
		}
	}
    return -1; // not found
}

int main()
{
	int arr[6] = {1,2,3,4,5,6};
	int index = BinarySearch(4, arr, 6);
	if(index != -1)
		cout << "Found at index " << index << endl;
	else
		cout << "Not Found" << endl;
}