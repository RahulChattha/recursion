#include <iostream>
using namespace std;
int print(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return 0;
    }
    print(n - 1);
    cout << n << " ";

    return 0;
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    print(n);
}