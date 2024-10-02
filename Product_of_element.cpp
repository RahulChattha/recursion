#include <iostream>
using namespace std;
void product_arr(int *arr, int n)
{
    int static product = 1;
    if (n == 0)
    {
        cout << product << endl;
        return;
    }
    product *= *arr;
    product_arr(arr + 1, n - 1);
}
int main()
{
    int arr[4] = {12, 3, 2, 2};
    product_arr(arr, 4);
     return 0;
}