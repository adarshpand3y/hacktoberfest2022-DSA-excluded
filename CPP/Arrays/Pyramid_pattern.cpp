#include <bits/stdc++.h>

#define ll long long int
#define nl '\n'
#define forf (i, a, n) for (int i = 1; i <= n; i++)
#define forb (i, b, n) for (int i = b; i >= n; i--)
#define pb push_back
#define vector vector<int> v
using namespace std;

int main()
{
    int a;
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        // for printing spaces
        for (int j = a; j >= i; j--)
        {
            cout << " ";
        }
        
        // for printing '*' 
        for (int k = 1; k <= (i * 2) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}