#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    auto it_l = find(str_list.begin(), str_list.end(), "l");
    auto it_r = find(str_list.begin(), str_list.end(), "r");
    int num_l = it_l - str_list.begin(); // l의 인덱스
    int num_r = it_r - str_list.begin(); // r의 인덱스
    
    if (num_l < num_r) { // l이 먼저 나올 경우
        for (int i = 0; i < num_l; i++) {answer.push_back(str_list[i]);}
    }
    else { // r이 먼저 나올 경우
        for (int i = num_r + 1; i < size(str_list); i++) {answer.push_back(str_list[i]);}
    }
    
    return answer;
}