#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    string ans;
    int n;
    
    cin >> str >> n;
    
    for (int i = 0; i < n; i++) {
        ans += str;
    }
    
    cout << ans;
    
    return 0;
}