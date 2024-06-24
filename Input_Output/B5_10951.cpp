
// 1 scanf
#include <stdio.h>

int main()
{
    int a, b;

    while (scanf("%d %d", &a, &b) != -1)
    {
        printf("%d\n", a+b);
    }
    
    return 0;
}


// 2-1 cin operator bool
#include <iostream>
using namespace std;

int main()
{
    int A, B;

    while (cin >> A >> B)
    {
        cout << A+B << "\n";
    }
    
    return 0;
}

// 2-2 eof()
#include <iostream>
using namespace std;

int main()
{
    int A, B;

    while (!(cin >> A >> B).eof())
    {
        cout << A+B << "\n";
    }
    
    return 0;
}

// 향상된 입출력 추가
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);   // 동기화 해제
    cin.tie(NULL);  // 입출력 끊기
    
    int a, b;
    
    while (cin >> a >> b) {
        cout << a+b << endl;
    }
    
    return 0;
}