// for
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
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    for (int i = n-1; i > 0; i--)
    {
        for (int k = 1; k <= n-i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}

// for + if
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n*2-1; i++)
    {
        if (i <= n)
        {
            for (int k = 1; k <= n-i; k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 2*i-1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int k = 1; k <= i-n; k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 2*(2*n-i)-1; j++)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}

// for + if + 변수
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n*2; i++)
    {
        int stars, spaces;

        if (i<=n)
        {
            spaces = n-i;
            stars = 2*i-1;
        } else {
            spaces = i-n;
            stars = 2*(2*n-i)-1;
        }
        
        // 공백 출력
        for (int k = 0; k < spaces; k++)
        {
            cout << " ";
        }
        // 별 출력
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}