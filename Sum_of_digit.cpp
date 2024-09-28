#include <iostream>
using namespace std;
void sumdigit(int n)
{
    int static sum = 0;
    if (n == 0)
    {
        cout << sum << endl;
        return ;
    }
    sum = sum + n % 10;
    sumdigit(n / 10);
}
int main()
{
    int n;
    cin >> n;
    sumdigit(n);

    return 0;
}