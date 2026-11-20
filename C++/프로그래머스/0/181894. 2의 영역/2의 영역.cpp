#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    bool flag_start = false;
    
    int cnt = count(arr.begin(), arr.end(), 2);
    if (cnt == 0) {return {-1};}
    if (cnt == 1) {return {2};}
    
    while (size(arr)) {
        auto it_begin = arr.begin();
        int num = *it_begin;
        auto it = find(arr.begin(), arr.end(), 2);
        
        if (it != arr.end() && flag_start == false && num == 2) { // 첫번째 2 찾은 경우
            flag_start = true;
            answer.push_back(num);
        }
        
        else if (it != arr.end() && flag_start) { // 2는 찾았는데 첫번째가 2가 아닌 경우
            answer.push_back(num);
        } 
        
        else if (it == arr.end()) { // 2가 더이상 없는 경우
            return answer;
        }
        
        arr.erase(arr.begin());
    }
}