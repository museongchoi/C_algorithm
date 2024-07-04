#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n-i; k++)
            cout << " ";
        for (int j = 1; j <= 2*i-1; j++)
        {
            if (j%2 == 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}

// 공백 출력 \ 별+공백 \ 별+줄바꿈
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n - i; ++j) {
			cout << " ";
		}
		
		for (int j = 1; j < i; ++j) {
			cout << "* ";
		}
		cout << "*\n";
	}

	return 0;
}