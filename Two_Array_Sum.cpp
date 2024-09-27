#include <iostream>
using namespace std;
void sum_arr(int *arr1, int *arr2, int *sum, int n)
{
    if (n == 0)
    {
        return;
    }
    *sum = *arr1 + *arr2;
    sum_arr(arr1 + 1, arr2 + 1, sum + 1, n - 1);
}
int main()
{
    int arr1[4] = {12, 34, 12, 44};
    int arr2[4] = {34, 23, 1, 0};
    int sum[4] = {};
    sum_arr(arr1, arr2, sum, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << sum[i] << " ";
    }
    return 0;
}