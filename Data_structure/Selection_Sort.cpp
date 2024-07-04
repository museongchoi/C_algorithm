// 오름 차순 정렬
#include <iostream>
#include <algorithm>
using namespace std;

// arr 요소 하나를 다른 요소와 하나씩 비교
// 앞으로 돌아갈 필요는 없음. 제일 작은 값을 찾아서 비교하는 것이므로
void selectionSort(int arr[], int s)
{
    // 배열의 각 요소에 대해 반복합니다.
    for (int i = 0; i < s; i++)
    {
        // 현재 요소를 기준으로 남은 배열에서 가장 작은 값을 찾는다
        int minIdx = i;
        for (int j = i+1; j < s; j++)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        
        // swap() 함수 - 매개변수\파라미터 로 들어온 값을 서로 변경
        // 가장 작은 값을 현재 위치와 교환
        swap(arr[i], arr[minIdx]);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    // sizeof(arr) = 20, sizeof(arr[0]) = 4
    int s = sizeof(arr) / sizeof(arr[0]);   // s = 5

    // original array 출력
    cout << "Original array : ";
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";

    selectionSort(arr, s);

    // selectionSort 함수 사용 후 배열
    cout << "sort array : ";
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";
    
    return 0;
}

// 내림 차순 정렬
#include <iostream>
#include <algorithm>
using namespace std;

void selection_maxSort(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        int maxIdx = i;
        for (int j = i+1; j < s; j++)
        {
            if (arr[j] > arr[maxIdx])
                maxIdx = j;
        }

        if (i != maxIdx)
            swap(arr[i], arr[maxIdx]);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    // sizeof(arr) = 20, sizeof(arr[0]) = 4
    int s = sizeof(arr) / sizeof(arr[0]);   // s = 5

    cout << "Original array : ";
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";

    selection_maxSort(arr, s);

    cout << "maxSort array :";
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}