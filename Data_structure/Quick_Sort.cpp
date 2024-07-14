#include <iostream>
#include <algorithm>
using namespace std;

void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int partition(int arr[], int left, int right)
{
    int q = left, low = left+1, high = right;

    while (low <= high)
    {
        // arr[q] 보다 arr[low]가 클때까지 low 진행
        while (arr[q] > arr[low] and low <= right)
            low++;
        // arr[q] 보다 arr[high]가 작을때까지 high 진행
        while (arr[q] < arr[high] and high > left)
            high--;
        if (low >= high)
            break;
        cout << low << " " << high;
        cout << "\n";
        swap(arr[low], arr[high]);
    }

    if (low >= high)
        swap(arr[q], arr[high]);

    display(arr, right);
    return high;
}

void quickSort(int arr[], int l, int r)
{
    int p;
    if(l < r)
    {
        p = partition(arr, l, r);
        quickSort(arr, l, p-1);
        quickSort(arr, p+1, r);
    }
}

int main()
{
	int arr[] = { 5,3,8,4,9,1,6,2,7 };
    int s = sizeof(arr) / sizeof(arr[0]);
    cout << "Original arr : ";
    display(arr, s);

	quickSort(arr, 0, s - 1);

    cout << "Sort arr : ";
	display(arr, s);

	return 0;
}

// 2.
#include <iostream>
#include <algorithm>
using namespace std;

void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// 1. q 보다 low 가 크면 멈춤, low 는 right 까지 진행
// 2. q 보다 high 가 작으면 멈춤, high는 left 전까지 진행.
// 3. q(피벗) 과 high 가 교환 되는 상황
// 3-1. low 와 high 가 같은 위치에 있을 때. (홀수인 경우)
// 3-2. low 와 high 서로 지나쳤을 경우.
int partition(int arr[], int left, int right)
{
    int q = left, low = left+1, high = right;

    while (low <= high)
    {
        // arr[q] 보다 arr[low]가 클때까지 low 진행
        while (arr[q] > arr[low] and low <= right)
            low++;
        // arr[q] 보다 arr[high]가 작을때까지 high 진행
        while (arr[q] < arr[high] and high > left)
            high--;
        if (low <= high)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }   
    }

    if (low >= high)
        swap(arr[q], arr[high]);

    display(arr, right);
    return high;
}

void quickSort(int arr[], int l, int r)
{
    int p;
    if(l < r)
    {
        p = partition(arr, l, r);
        quickSort(arr, l, p-1);
        quickSort(arr, p+1, r);
    }
}

int main()
{
	int arr[] = { 5,3,8,4,9,1,6,2,7 };
    int s = sizeof(arr) / sizeof(arr[0]);
    cout << "Original arr : ";
    display(arr, s);

	quickSort(arr, 0, s - 1);

    cout << "Sort arr : ";
	display(arr, s);

	return 0;
}


//#include <stdio.h>
//#define MAX_SIZE 9
//
//int partition(int* arr, int l, int r)
//{
//	int p = l;
//	int low = l + 1;
//	int high = r;
//	int tmp;
//
//	// low와 high가 서로 교차 하기 전까지 반복 
//	while (low <= high)
//	{
//		// p 값 보다 arr[low] 값이 클경우 멈춤, low 는 r 까지 움직인다
//		while (arr[p] > arr[low] && low <= r)
//		{
//			low++;
//		}
//		// p  값 보다 arr[high] 값이 작을 경우 멈춤, hight는 l 까지 움직인다
//		while (arr[p] < arr[high] && high > l)
//		{
//			high--;
//		}
//		if (low >= high)
//		{
//			break;
//		}
//		// low 와 high 를 바꿔준다
//		tmp = arr[low];
//		arr[low] = arr[high];
//		arr[high] = tmp;
//	}
//	if (low >= high)
//	{
//		// low 와 high 가 교차 후 high로 표시, high와 p(피벗) 을 바꾸어준다
//		tmp = arr[high];
//		arr[high] = arr[p];
//		arr[p] = tmp;
//	}
//	// p(피벗)을 반환
//	return high;
//}
//
//void display(int arr[])
//{
//	for (int i = 0; i < MAX_SIZE; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	puts("");
//}
//
//void quickSort(int* arr, int l, int r)
//{
//	int q;
//
//	if (l < r)
//	{
//		display(arr);
//		q = partition(arr, l, r);
//		quickSort(arr, l, q - 1);
//		quickSort(arr, q + 1, r);
//	}
//}
//
//int main()
//{
//	int arr[] = { 5,3,8,4,9,1,6,2,7 };
//	quickSort(arr, 0, MAX_SIZE - 1);
//	display(arr);
//
//	return 0;
//}