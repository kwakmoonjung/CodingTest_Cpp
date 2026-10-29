#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int ans1, ans2 = 0;
    ans1 = stoi(to_string(a) + to_string(b));
    ans2 = 2*a*b;
    
    if (ans1 > ans2){
        return ans1;
    }
    else{
        return ans2;
    }
}