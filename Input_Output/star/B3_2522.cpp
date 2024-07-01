// 1. 1 ~ n \ n+1 ~ 2*n-1
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
            for (int k = 1; k <= n-i; k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << "\n";
        } else {
            for (int k = 1; k <= n-(2*n-i); k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 2*n-i; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }
    return 0;
}

// 전체 for 문 자체를 나누기
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n-i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= n-1; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n-i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

// 절대값 사용
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	for (int i = 1; i <= n * 2 - 1; ++i) {
		for (int j = 1; j <= abs(n - i); ++j) {
			cout << " ";
		}
		for (int j = 1; j <= n - abs(n - i); ++j) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}