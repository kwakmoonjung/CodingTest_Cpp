#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (int i = 'A'; i <= 'Z'; i++) {
        int cnt = count(my_string.begin(), my_string.end(), i);
        answer.push_back(cnt);
    }
    for (int i = 'a'; i <= 'z'; i++) {
        int cnt = count(my_string.begin(), my_string.end(), i);
        answer.push_back(cnt);
    }
    cout << size(answer);
    return answer;
}