#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {5, 4, 1, 3, 2};
    int s = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, arr+s);

    for (int element : arr)
    {
        cout << element << " ";
    }

    return 0;
}