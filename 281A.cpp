using namespace std;
#include <iostream>
#include <string>

int main() {
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s << endl;
    return 0;
}