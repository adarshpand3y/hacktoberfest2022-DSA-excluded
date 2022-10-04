#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5] = {12, 0, 7, 0, 45};
    int size = 5;
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    cout << "after compiling: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
