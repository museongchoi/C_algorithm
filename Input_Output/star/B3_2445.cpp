// 문자열 사용
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string s;

    for (int i = 0; i < 2*n; i++)
    {
        s += " ";
    }
    
    for (int i = 0, step = 1; i >= 0; i+=step)
    {
        if (i == n-1)
        {
            step *= -1;
        }
        string cs = s;
        for (int j = 0; j <= i; ++j)
        {
            cs[j] = cs[2*n-1-j] = '*';
        }
        cout << cs << "\n";
    }

    return 0;
}

// 1
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int k = 1; k <= (n*2)-(2*i); k++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int k = 1; k <= (n*2)-(2*i); k++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}

// 함수 생성
#include <iostream>
using namespace std;

void top(int);
void bottom(int);

int main()
{
    int n;
    cin >> n;

    top(n);
    bottom(n);
    return 0;
}

void top(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int k = 1; k <= (N*2)-(2*i); k++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
}

void bottom(int N)
{
    for (int i = N-1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int k = 1; k <= (N*2)-(2*i); k++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
}