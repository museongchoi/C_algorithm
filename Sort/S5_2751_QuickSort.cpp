// 수 정렬 하기 2
// 시간 초과 남
// 1. sort 함수 사용 x
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void display(const vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\n";
}

int partition(vector<int> &arr, int left, int right)
{
    int q = arr[left], low = left+1, high = right;

    while (low <= high)
    {
        while (low <= right && arr[low] < q)
            low++;
        while (high >= left && arr[high] > q)
            high--;
        if (low < high)
            swap(arr[low], arr[high]);
    }
    
    swap(arr[left], arr[high]);
    
    return high;
}

void Quick_sort(vector<int> &arr, int l, int r)
{
    int p;
    if(l < r)
    {
        p = partition(arr, l, r);
        Quick_sort(arr, l, p-1);
        Quick_sort(arr, p+1, r);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Quick_sort(arr, 0, n-1);

    display(arr, n);
    
    return 0;
}

// 2. sort 함수 사용
#include <iostream>
#include <vector>
#include <algorithm> // std::sort 사용
using namespace std;

void display(const vector<int>& arr)
{
    for (int num : arr)
        cout << num << "\n";
}

int main()
{
    ios::sync_with_stdio(false); // 입출력 속도 향상
    cin.tie(nullptr); // 입출력 속도 향상

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    display(arr);
    
    return 0;
}
