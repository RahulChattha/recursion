#include <iostream>
using namespace std;
bool check(int n, int st, int end)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    if (end + 1 == st || n == 2)
    {
        return 1;
    }
    if (n % st == 0)
    {
        return 0;
    }
    return check(n, st + 1, end);
}
int main()
{
    int n, st, end;
    cin >> n;
    cin >> st;
    cin >> end;
    cout << check(n, st, end) << endl;
    return 0;
}
