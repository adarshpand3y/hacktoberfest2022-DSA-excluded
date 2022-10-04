#include <iostream>
#include <cstring>
#include <set>
using namespace std;

int main(){

    // 6
    // 1 4 1 5 4 4
    // op-
    // 2
    // 1 2
    // 5 0
    // as 4 is not in AP so excluded.

    int n;cin>>n;
    int arr[n];
    set <int> s;

    int diff[100005];
    memset(diff, 0, sizeof(int));
    int count[100005];
    memset(count, 0, sizeof(int));
    int last[100005];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if (count[arr[i]] == 0)
        {
            s.insert(arr[i]);
            
            count[arr[i]]++;
        }
        else if (diff[arr[i]] == 0 || diff[arr[i]] == (i - last[arr[i]]))
        {
            diff[arr[i]] = i - last[arr[i]];
            count[arr[i]]++;
        }
        else
        {
            s.erase(arr[i]);
        }
        last[arr[i]] = i;
    }

    cout<<s.size()<<endl;
    for(auto &t: s){
        cout<<t<<" "<<diff[t]<<endl;
    }

    return 0;
}
