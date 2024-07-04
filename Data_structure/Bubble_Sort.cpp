// swap() 함수 사용
#include <iostream>
#include <algorithm>
using namespace std;

// arr[] : 정렬할 배열 \ s : 배열의 크기
void bubble_Sort(int arr[], int s)
{
    bool swapped;
    // 배열의 각 요소에 대해 반복 : s-1 을 하는 이유는 j+1 로 현재idx 와 다음idx를 비교하기 위해 (idx 오버플로우 발생 방지)
    for (int i = 0; i < s-1; i++)
    {
        swapped = false;
        // 배열의 끝까지 비교 및 교환을 반복.
        // 이미 정렬된 마지막 요소는 비교하지 않는다.
        for (int j = 0; j < s-i-1; j++)
        {
            // 요소 교환 : 인접한 두 요소를 비교하며 필요시 교환한다.
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        // 조기 종료 : 내부 루프에서 요소 교환이 발생하지 않으면 정렬이 완료된 것으로 간주하고 외부 루프를 종료합니다.
        if (!swapped)
            break;
    }
}

int main()
{
    int arr[] = {5, 3, 8, 1, 2, 7};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Original arr : ";
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";

    bubble_Sort(arr, s);

    cout << "bubble sort array : ";
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";
    
    return 0;
}

// display 배열 출력 함수와 while 문 사용 bubble 정렬 함수
#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
    int arr[] = {5, 3, 8, 1, 2, 7};

    //display(arr);
    return 0;
}