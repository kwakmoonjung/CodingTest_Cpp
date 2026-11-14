#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    vector<string> ans_list;
    for (int i = 0; i < size(my_string); i++){
        string ans = "";
        for (int j = 0; j < i; j++) {
            ans += my_string[j];
        }
        ans_list.push_back(ans);
    }
    
    vector<string>::iterator it;
    it = find(ans_list.begin(), ans_list.end(),is_prefix);
    
    if (it != ans_list.end()) {return 1;}
    else {return 0;}
}