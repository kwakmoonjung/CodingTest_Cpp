#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    int len = size(my_string);
    
    for (int i = 0; i < len; i++) {
        string str = "";
        for (int j = i; j < len;  j++) {
            str += my_string[j];
        }
        answer.push_back(str);
    }
    sort(answer.begin(), answer.end());
    return answer;
}