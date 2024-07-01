// 최소, 최대
// 1. 배열 + sort 사용
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    
    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout << arr[0] << " " << arr[n-1];
    return 0;
}

// 2. 조건 사용 배열 x
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;

    int minval, maxval;
    minval = 1000001;
    maxval = -1000001;
    
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x < minval)
        {
            minval = x;
        }
        if (x > maxval)
        {
            maxval = x;
        }
    }
    cout << minval << " " << maxval;
    
    return 0;
}