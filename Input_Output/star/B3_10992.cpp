// 1. 공백 출력 후 첫번째 줄과 마지막 줄에는 *로만 출력 나머지는 별 공백 별로 출력
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
            if (i == 1 or i == n)
            {
                cout << "*";
            } else {
                if (j == 1 or j == 2*i-1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}

// 2. 공백 별 공백 별 패턴
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
        // 마지막 줄 출력
		if (i == num) 
        {	
            for (int i = 1; i <= 2*num-1; i++) cout << "*"; 
        }
		else {
            // 공백 출력
			for (int j = num - i; j > 0; j--) 
            { 
                cout << " ";
            } 
            // 별 출력
			cout << "*";
            // i가 1이 아닐때, 공백 출력 후 별 고정 출력. 즉, 첫번째 줄에서 출력하지 않음.
			if (i != 1) {
				for (int j = 1; j <= (i - 1) * 2 - 1; j++) 
                { 
                    cout << " "; 
                }
				cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}
