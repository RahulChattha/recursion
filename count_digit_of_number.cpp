#include <iostream>
using namespace std;
int c_digit(int n)
{
    int static count = 0;
    if (n == 0)
    {
        return 0;
    }
    count++;
    c_digit(n / 10);
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << c_digit(n) << endl;
}