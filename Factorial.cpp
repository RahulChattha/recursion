#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return n * fact(n - 1);
}

int main()
{
    int n, factorial;
    cin >> n;
    factorial = fact(n);
    cout << "factorial of" << n << "is " << factorial << endl;
    return 0;
}