using namespace std;
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << n - s.length() << endl;
    return 0;
}