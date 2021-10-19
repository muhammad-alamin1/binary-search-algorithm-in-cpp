#include <iostream>
using namespace std;

int binary_search(int arr[], int low_index, int high_index, int find_number);

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40, 47, 50, 80, 95, 100 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int low_index = 0, high_index = n - 1;
    int find_number = 95;

    int result = binary_search(arr, low_index, high_index, find_number);

    (result == -1) ? cout << "Element is not present in array"
                          : cout << "Element is present at index " << result;

    return 0;
}

int binary_search(int arr[], int low_index, int high_index, int find_number)
{
    while(low_index <= high_index)
    {
        int mid = low_index + (high_index - low_index) / 2;
        if(find_number == arr[mid])
            return mid;
        if(arr[mid] < find_number)
            low_index = mid + 1;
        else
            high_index = mid - 1;
    }
    return -1;
}

