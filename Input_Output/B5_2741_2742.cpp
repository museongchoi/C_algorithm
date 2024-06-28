// n 찍기
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << '\n';
    }
    return 0;
}

// endl; 사용시 시간 초과 발생

// 2742
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        cout << i << '\n';
    }
}