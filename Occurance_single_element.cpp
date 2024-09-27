#include <iostream>
using namespace std;
int occurance(string str, int n, char key)
{
    int static count = 0, i = 0;
    if (n == 0)
    {
        return 0;
    }
    if (str[i] == key)
    {
        count++;
    }
    i++;
    occurance(str, n - 1, key);
    return count;
}
int main()
{
    string str;
    char key;
    cin >> str;
    cin >> key;
    cout << occurance(str, str.length(), key)<<endl;
    return 0;
}