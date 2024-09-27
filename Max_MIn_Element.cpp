#include <iostream>
using namespace std;
void max_min_element(int *arr, int &max, int &min, int n)
{
    if (n == 1)
    {
        return;
    }
    if (*arr > max)
    {
        max = arr[0];
    }
    if (*arr < min)
    {
        min = arr[0];
    }

    max_min_element(arr + 1, max, min, n - 1);
}
int main()
{
    int n = 10;
    int arr[10] = {12, 33, 443, 2, 1, 78, 9, 56, 3, 29};
    int max = arr[0];
    int min = arr[0];

    max_min_element(arr, max, min, n);
    cout << max << " . " << min << endl;
}