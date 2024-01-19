using namespace std;
#include <bits/stdc++.h>

int main() {
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        if(n.length()>10){
            cout << n[0] << n.length()-2 << n[n.length()-1] << endl;
        }
        else{
            cout << n << endl;
        }
    }
    return 0;
}