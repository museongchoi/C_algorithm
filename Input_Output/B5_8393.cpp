// 합
// 1. for 문
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }
    cout << total;
    return 0;
}

// 2. 수열 합 공식
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    cout << n * (n+1) / 2;
    return 0;
}