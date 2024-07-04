// 별찍기-9
// 1. for 문 안 if else 사용
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 2*n-1; i++)
    {
        if (i <= n)
        {
            for (int k = 1; k < i; k++)
                cout << " ";
            for (int j = 1; j <= 2*(n-i)+1; j++)
                cout << "*";
            cout << "\n";
        } else {
            for (int k = 1; k <= 2*n-i-1; k++)
                cout << " ";
            for (int j = 0; j < 2*(i-n)+1; j++)
                cout << "*";
            cout << "\n";
        }
    }
    return 0;
}

// 2. 구간 나눔
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < i; k++)
            cout << " ";
        for (int j = 1; j <= 2*(n-i)+1; j++)
            cout << "*";
        cout << "\n";
    }
    for (int i = 1; i <= n-1; i++)
    {
        for (int k = 1; k <= n-1-i; k++)
            cout << " ";
        for (int j = 1; j <= 2*i+1; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}