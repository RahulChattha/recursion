#include <iostream>
using namespace std;
bool check(int n, int i)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    if (n / 2 == i || n == 2)
    {
        return 1;
    }
    if (n % i == 0)
    {
        return 0;
    }

    return check(n, i + 1);
}

int main()
{
    int n;
    cin >> n;
    cout << check(n, 2) << endl;
    return 0;
}
