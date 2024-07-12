// 합병 정렬
#include <iostream>
#include <vector>
using namespace std;

void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// 두 개의 배열을 합병하는 함수
// 1. 두 개의 배열을 정렬하여 새로운 배열에 저장.
// 1-1. 두 개의 배열의 각 첫번째 요소부터 비교하여 새로운 배열 arr1에 저장.
// 2. 두 개중 남아있는 요소가 있는 배열을 찾고, 해당 배열에 남아있는 요소를 arr1에 저장
// 3. 정렬되어 저장된 새로운 배열 arr1 요소들을 원래 배열 arr에 저장. arr == arr1
void Merge(int arr[], int l, int mid, int r)
{
    // arr1 정렬 요소들을 저장할 배열
    vector<int> arr1(l+r+1);
    // l, mid, r 은 고정 값 : 왼쪽 가운데 오른쪽 \ p : 왼쪽 리스트 idx, q : 오른쪽 리스트 idx, i : arr1 배열 저장할 위치. idx 이동시 사용
    int p, q, k;
    p = l;
    q = mid + 1;
    k = l;

    // p, q 값을 비교하여 새로만든 배열에 넣는다
    while (p <= mid && q <= r)
    {
        if (arr[p] < arr[q])
        {
            arr1[k] = arr[p];
            p++;
        } else {
            arr1[k] = arr[q];
            q++;
        }
        k++;
    }

    // p, q 둘중 하나가 끝나면 나머지는 순서대로 배열에 넣는다
    if (p > mid)
    {
        for (int j = q; j <= r; j++)
        {
            arr1[k] = arr[j];
            k++;
        }
            
    } else {
        for (int j = p; j <= mid; j++)
        {
            arr1[k] = arr[j];
            k++;
        }            
    }

    // 원래 배열에 삽입
    for (int i = l; i <= r; i++)
        arr[i] = arr1[i];
}

// 재귀함수
// 배열의 길이가 1이 될때까지. 즉, 하나의 요소를 가질 떄 까지 나눈다.
// merge 함수를 사용하여 정렬한 뒤 병합한다.
void Merge_Sort(int arr[], int l, int r)
{
    int mid;
    if (l < r)
    {
        mid = (l+r)/2;
        Merge_Sort(arr, l, mid);
        Merge_Sort(arr, mid+1, r);
        Merge(arr, l, mid, r);
    }
}


int main()
{
    int arr[] = { 27, 10, 12, 20, 25, 13, 15 };
    int s = sizeof(arr) / sizeof(arr[0]);

    display(arr, s);

    Merge_Sort(arr, 0, s-1);

    display(arr, s);
    return 0;
}

// arr1 새로운 배열과 k를 0부터 시작
#include <iostream>
#include <vector>
using namespace std;

void display(int arr[], int s) {
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void Merge(int arr[], int l, int mid, int r) {
    vector<int> arr1(r - l + 1);
    int p = l, q = mid + 1, k = 0;

    // p, q 값을 비교하여 새로 만든 배열에 넣는다
    while (p <= mid && q <= r) {
        if (arr[p] < arr[q]) {
            arr1[k++] = arr[p++];
        } else {
            arr1[k++] = arr[q++];
        }
    }

    // 남아 있는 요소들을 배열에 넣는다
    while (p <= mid) {
        arr1[k++] = arr[p++];
    }
    while (q <= r) {
        arr1[k++] = arr[q++];
    }

    // 원래 배열에 삽입
    for (int i = l; i <= r; i++) {
        arr[i] = arr1[i - l];
    }
}

void Merge_Sort(int arr[], int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        Merge_Sort(arr, l, mid);
        Merge_Sort(arr, mid + 1, r);
        Merge(arr, l, mid, r);
    }
}

int main() {
    int arr[] = {27, 10, 12, 20, 25, 13, 15};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    display(arr, s);

    Merge_Sort(arr, 0, s - 1);

    cout << "Sorted array: ";
    display(arr, s);

    return 0;
}



// c 언어
// #include <stdio.h>
// #define MAX_SIZE 7

// /* 합병 정렬 */
// /* 모든 요소가 하나로 분리 될 때까지 left ~ mid 와 mid+1 ~ right 
// 둘로 나누어 다시 합치는 Merge함수는 좌우를 비교하여 작은 값을
// 배열에 차례대로 넣는다 */

// // merge 함수가 mergesort 함수 아래 생성되어있기 때문에 위에 호출을 먼저 해준 것 이다
// void merge(int* arr, int l, int mid, int r);

// //재귀함수
// void mergesort(int* arr, int l, int r)
// {
// 	int mid;
	
// 	if (l < r)
// 	{
// 		mid = (l + r) / 2;
// 		mergesort(arr, l, mid);
// 		mergesort(arr, mid + 1, r);
// 		merge(arr, l, mid, r);
// 	}
// }

// void merge(int* arr, int l, int mid, int r)
// {
// 	int arr1[MAX_SIZE] = { 0, };

// 	// left, mid, right는 고정 값
// 	// p, q, i로 가르켜 이동시킨다
// 	int p, q, i;
// 	p = l;
// 	q = mid +1;
// 	i = l;

// 	// p, q 값을 비교하여 새로만든 배열에 넣는다
// 	while (p <= mid && q <= r)
// 	{
// 		if (arr[p] < arr[q])
// 		{
// 			arr1[i] = arr[p];
// 			p++;
// 		}
// 		else
// 		{
// 			arr1[i] = arr[q];
// 			q++;
// 		}
// 		i++;
// 	}
// 	// p, q 둘중 하나가 끝나면 나머지는 순서대로 배열에 넣는다
// 	if (p > mid)
// 	{
// 		for (int j = q; j <= r; j++)
// 		{
// 			arr1[i] = arr[j];
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		for (int k = p; k <= mid; k++)
// 		{
// 			arr1[i] = arr[k];
// 			i++;
// 		}
// 	}

// 	for (i = l; i <= r; i++)
// 	{
// 		arr[i] = arr1[i];
// 	}
	
// }

// void display(int arr[])
// {
// 	for (int i = 0; i < MAX_SIZE; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}

// 	puts("");
// }

// int main()
// {
// 	int arr[] = { 27, 10, 12, 20, 25, 13, 15 };
// 	mergesort(arr, 0, 6);
// 	display(arr);

// 	return 0;
// }