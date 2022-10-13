#include <iostream>
using namespace std;
int majorityElement(int a[], int size)
{

    // your code here
    int i = 0;
    int j = size - 1;
    int count = 1;
    int index = 0;
    cout << a[i] << endl;
    cout << a[j] << endl;
    while (j > i)
    {
        cout << "j" << a[j] << endl;
        int n = a[i] ^ a[j];
        cout << n << endl;
        if (n == 0)
        {
            cout << "heloo" << endl;
            count++;
            index = j;
            j--;
            cout << count << endl
                 << index << endl;
        }
        else
        {
            j--;
            cout << j << endl;
        }
    }
    if (count > (size / 2))
    {
        cout << count << " " << index;
        return a[index];
    }
    else if (count == 1 || count == 0)
    {
        return -1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << majorityElement(arr, n);
    return 0;
}