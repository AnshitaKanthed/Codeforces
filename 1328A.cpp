#include <iostream>
using namespace  std;
int main() {
    int t,a,b;
    cin >> t;
    while(t--){
        int div=0,y=0;
        cin >> a >> b;
        if(a%b==0){
            cout << 0 << endl;
            continue;
        }
        div=a/b;
        y=(div+1)*b;
        cout << y-a << endl;
    }
    return 0;
}

