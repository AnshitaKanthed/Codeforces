#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        int count = 0;
        int x;
        for(int i=0;i<3;i++){
            cin >> x;
            if(x>a){
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}