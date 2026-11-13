#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for (int i = 0; i < size(intStrs); i++){
        string num_str = intStrs[i];
        string num_str2 = "";
        
        for (int j = s; j < s+l; j++) {
            num_str2 += num_str[j];
        }
        int num = stoi(num_str2);
        if (num > k) {answer.push_back(num);}
    }
    return answer;
}