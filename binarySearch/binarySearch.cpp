#include <iostream>
#include <string>
using namespace std;

int binarySearch(int arr[], int size, int element);

int main()
{
        int myArray[]{1, 20, 32, 45, 505, 600}; //array needs to be sorted otherwise it will not work
        int size = sizeof(myArray) / sizeof(int);
        int element = 32;

        int showIndex = binarySearch(myArray, size, element);
        cout << "your value is at index: " << showIndex << endl; //if it's -1 then array is not available;

        return 0;
}

int binarySearch(int arr[], int size, int element)
{
        int low = 0;
        int mid{};
        int high = size - 1;

        while (low <= high)
        {
                mid = (high + low) / 2;

                if (element == arr[mid])
                {
                        return mid;
                }

                if (element > arr[mid])
                {
                        low = mid + 1; //mid becomes low 
                }
                else
                {
                        high = mid - 1; //mid become high
                }
        }
        return -1; //if the value is not available -1 will fire
}
