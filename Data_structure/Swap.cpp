// std::swap() 사용
#include <iostream>
#include <algorithm> // std::swap() 사용 헤더파일 == #include <utility>
using namespace std;

int main()
{
    int a = 10, b = 20;
    cout << "a : " << a << ", b : " << b << "\n";

    swap(a, b);
    cout << "a : " << a << ", b : " << b << "\n";

    return 0;
}

// temp 사용 a 와 b 변경
#include <iostream>
using namespace std;

void ch_tmp(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "a : " << a << ", b : " << b;
}

int main()
{
    int a = 10, b = 20;
    cout << "a : " << a << ", b : " << b << "\n";
    ch_tmp(a, b);
    return 0;
}