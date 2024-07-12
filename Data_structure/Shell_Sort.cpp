// 셸 정렬 Shell
// 1.
#include <iostream>
using namespace std;

void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void inssort(int arr[], int first, int last, int gap, int s)
{
    int key, j;
    for (int i = first+gap; i <= last; i += gap)
    {
        key = arr[i];
        for (j = i-gap; j >= first && key < arr[j]; j -= gap)
        {
            // 내림 차순이므로 뒤에 값이 앞에 값보다 작으면 요소 변경.
            arr[j+gap] = arr[j];
        }
        arr[j+gap] = key;
    }
}

void shell_sort(int arr[], int s)
{
    // gap을 구한다. 전체 배열 길이를 2로 나눈뒤 만약 짝수일 시 1을 더한다.
    int i, gap;
    for(gap = s/2; gap > 0; gap /= 2)
    {
        if(gap % 2 == 0)
            gap += 1;
        for (i = 0; i < gap; i++)
        {
            // inssort() : first 에 대한 gap 간격의 요소 크기를 비교하는 함수
            inssort(arr, i, s-1, gap, s); // 배열, first idx, last idx, gap
        }
    }
}

int main()
{
    int arr[] = {10, 8, 6, 20, 4, 3, 22, 1, 0, 15, 16};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array : ";
    display(arr, s);

    cout << "arr sort : ";
    // gap 을 구하여 반복하며 정렬 하는 함수
    shell_sort(arr, s);

    cout << "final array : ";
    display(arr, s);

    return 0;
}

// 2. inssort() → j - for 문 → 조건 사용
#include <iostream>
using namespace std;

void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void inssort(int arr[], int first, int last, int gap, int s)
{
    int key, j;
    for (int i = first+gap; i <= last; i += gap)
    {
        key = arr[i];
        for (j = i-gap; j >= first; j -= gap)
        {
            if (key < arr[j]) // 내림 차순이므로 뒤에 값이 앞에 값보다 작으면 요소 변경.
                arr[j+gap] = arr[j];
            else
                break;
        }
        arr[j+gap] = key;
    }
}

void shell_sort(int arr[], int s)
{
    // gap을 구한다. 전체 배열 길이를 2로 나눈뒤 만약 짝수일 시 1을 더한다.
    int i, gap;
    for(gap = s/2; gap > 0; gap /= 2)
    {
        if(gap % 2 == 0)
            gap += 1;
        for (i = 0; i < gap; i++)
        {
            // inssort() : first 에 대한 gap 간격의 요소 크기를 비교하는 함수
            inssort(arr, i, s-1, gap, s); // 배열, first idx, last idx, gap
        }
    }
}

int main()
{
    int arr[] = {10, 8, 6, 20, 4, 3, 22, 1, 0, 15, 16};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array : ";
    display(arr, s);

    cout << "arr sort : ";
    // gap 을 구하여 반복하며 정렬 하는 함수
    shell_sort(arr, s);

    cout << "final array : ";
    display(arr, s);

    return 0;
}

// 3
#include <iostream>
using namespace std;

void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void shell_sort(int arr[], int s)
{
    for (int gap = s/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < s; i++)
        {
            int tmp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > tmp; j -= gap)
            {
                arr[j] = arr[j-gap];
            }
            arr[j] = tmp;
        }
    }
}

int main()
{
    int arr[] = {10, 8, 6, 20, 4, 3, 22, 1, 0, 15, 16};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array : ";
    display(arr, s);

    shell_sort(arr, s);

    cout << "sort array : ";
    display(arr, s);

    return 0;
}

// 4. while 문 사용
#include <iostream>
using namespace std;

void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void while_shell_sort(int arr[], int s)
{
    int i, j, tmp;
    int gap = s/2;

    while (gap > 0)
    {
        for (int i = gap; i < s; i++)
        {
            int tmp = arr[i];
            j = i;
            // j 가 gap 보다 크거나 같아야 한다. && arr[j-gap] : 앞에 값이 tmp : 현재 변경 요소 값보다 작으면 변경
            // j 가 gap 보다 작아지면 arr[j-gap] 접근이 배열의 유효 범위를 벗어날 수 있기 때문이다. 배열의 인덱스가 음수가 되는 것을 방지.
            while (j >= gap && arr[j-gap] > tmp)
            {
                arr[j] = arr[j-gap]; // 조건 : 앞에 값이 큼. 즉, gap 간격인 앞에 값을 현재 tmp 가 가르키는 arr[j] 자리 뒤에 저장.
                j -= gap; 
            }
            arr[j] = tmp;
        }
        gap /= 2;
    }
}

int main()
{
    int arr[] = {10, 8, 6, 20, 4, 3, 22, 1, 0, 15, 16};
    int s = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array : ";
    display(arr, s);

    while_shell_sort(arr, s);

    cout << "sort array : ";
    display(arr, s);

    return 0;
}