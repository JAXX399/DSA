#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int second_largest(vector<int> &arr, int n)
{
    int largest = arr[0];
    int second_largest = -1; // Initialize to -1 to handle cases with no second largest
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest; // Update second largest
            largest = arr[i];         // Update largest
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i]; // Update second largest if it's not equal to largest
        }
    }
    return second_largest;
}

int second_smallest(vector<int> &arr, int n)
{
    int smallest = arr[0];
    int second_smallest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] != smallest)
        {
            second_smallest = arr[i];
        }
    }
    return second_smallest;
}

int main()
{

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    second_largest(arr, n);
    second_smallest(arr, n);
    printf("The second largest number is: %d\n", second_largest(arr, n));
    printf("The second smallest number is: %d\n", second_smallest(arr, n));

    return 0;
}