// c++
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
		
    int n;
    cin >> n;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    
    return 0;
}

// c
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}