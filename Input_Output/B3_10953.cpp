// cin
#include <iostream>
using namespace std;

int main() {
    int t, a, b;
    char comma;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> comma >> b;
        cout << a+b << endl;
    }
    
    return 0;
}

// scanf
#include <iostream>
using namespace std;

int main() {
    int t, a, b;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        scanf("%d, %d", &a, &b);
        cout << a+b << endl;
    }
    
    return 0;
}

// 문자열 계산
#include <iostream>
using namespace std;

int T;

int main() {
    cin >> T;

    while(T--) {
        string s;
        cin >> s;

        // int add = s[0] + s[2] - 96;
        int add = (s[0]-'0') + (s[2]-'0');
        cout << add << "\n";
    }

}