#include <iostream>
using namespace std;
void n_sum(int n)
{
    int static sum = 0;
    if (n == 0)
    {
        cout << sum << endl;
        return;
    }
    sum += n;
    n_sum(n - 1);
}
int main()
{
    int n;
    cin >> n;
    n_sum(n);
    return 0;
}