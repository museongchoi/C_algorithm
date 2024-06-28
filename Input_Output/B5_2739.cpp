// 2739 구구단
// scanf / printf
#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}

// cin / cout
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 9; i++)
    {
        cout << n << " * " << i << " = " << n*i << '\n';
    }
    return 0;
}