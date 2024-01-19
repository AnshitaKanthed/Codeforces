using namespace std;
#include <bits/stdc++.h>

int main() {
    int n,a,b,c;
    int count = 0;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        if(a+b+c>=2){
            count = count+1;
        }
    }
    cout << count << endl;
    return 0;
}