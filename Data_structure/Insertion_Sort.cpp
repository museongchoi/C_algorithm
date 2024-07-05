// insertion_sort 삽입 정렬
// 1. 현재 요소보다 작은 요소를 만날때까지 왼쪽으로 이동.
#include <iostream>
#include <algorithm>
using namespace std;

void display(int arr[], int s)
{
    cout << "arr : ";
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";
    
}

void insertion_Sort(int arr[], int s)
{
    for (int i = 1; i < s; i++)
    {
        // 현재 요소 저장 및 이전 요소들과 비교. key : 현재 정렬할 요소 저장
        // 현재 요소보다 작은 요소를 만날때까지 왼쪽으로 이동
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key)
        {
            display(arr, s);
            arr[j+1] = arr[j];
            j--;
        }
        // key 현재 요소보다 작은 값 arr[j] 를 발견 했다면 j+1 그 다음 순서로 요소 삽입.
        arr[j+1] = key;
    }
}

int main()
{
    // arr : 배열, s : 배열의 크기
    int arr[] = {5, 3, 8, 1, 2, 7};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Original arr : ";
    display(arr, s);

    cout << "Sort arr \n";
    insertion_Sort(arr, s);

    cout << "final sort : ";
    display(arr, s);

    return 0;
}

// 2. 가장 작은 요소를 찾아 맨 앞 (왼쪽) 부터 변경
#include <iostream>
#include <algorithm>
using namespace std;

void display(int arr[], int s)
{
    cout << "arr : ";
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void insertion_Sort(int arr[], int s)
{
    int min, minIdx;
    for (int i = 0; i < s; i++)
    {
        min = 100;
        for (int j = i+1; j < s; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
        display(arr, s);
    }
}

int main()
{
    int arr[] = {5, 3, 8, 1, 2, 7};
    int s = sizeof(arr) / sizeof(arr[0]);

    display(arr, s);
    insertion_Sort(arr, s);
    display(arr, s);

    return 0;
}
