#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    for (int i = 0; i < size(arr);){
        if (size(stk) == 0) {stk.push_back(arr[i]); i++;}
        else {
            if (stk.back() < arr[i]) {stk.push_back(arr[i]); i++;}
            else {stk.erase(stk.end() - 1);}
        }
    }
    return stk;
}