#include <iostream>
using namespace std;
int max_robbery(int arr[], int n)
{

    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }
   return max(arr[n-1] + max_robbery(arr, n - 2), max_robbery(arr, n - 1));
  
}
int main()
{
    int arr[] = {2, 17, 9, 3, 1};
    cout << max_robbery(arr, 5) << endl;
    return 0;
}