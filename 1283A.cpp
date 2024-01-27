#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int h,m,r;
        cin >> h >> m;
        r = ((24-h)*60)-m;
        cout << r << endl;
    }

    return 0;
}