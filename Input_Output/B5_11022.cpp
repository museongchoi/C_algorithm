// 1
#include <iostream>
using namespace std;

int main()
{   
    int t, a, b;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b;
        printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
    }
    return 0;
}

// 2
#include <iostream>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b;
        
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << "\n";
    }
    return 0;
}

// 3
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, a, b;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> a >> b;
        
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << "\n";
    }
    return 0;
}