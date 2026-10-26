#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {    
    string sol1 = to_string(a) + to_string(b);
    string sol2 = to_string(b) + to_string(a);
    
    int i1 = stoi(sol1);
    int i2 = stoi(sol2);
    if (i1 >= i2){
        return i1;
    }
    else{
        return i2;
    }
}