// for 문 사용
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <=n; i++)
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

// 2. while 문
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int i = 1;
	cin >> n;

	while (i < n + 1)
	{
		for (int j = 0; j < n + i - 1; j++)
		{
			if (j <= n - i - 1)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
        }
		cout << '\n';
		i++;
	}
}
