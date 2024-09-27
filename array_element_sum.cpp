#include <iostream>
using namespace std;
int arrsum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int static sum = 0;
    sum += arr[0];

    arrsum(arr + 1, n - 1);
    return sum;
}
int main()
{
    int n = 5;
    int arr[5] = {39, 32, 40, 23, 34};
    cout << arrsum(arr, n) << endl;

    return 0;
}