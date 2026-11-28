#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string sub = "";
    int len = size(my_string);
    
    for (int i = 0; i <= len; i++) {
        if (i == len) {answer.push_back(sub);}
        if (my_string[i] == ' ') {answer.push_back(sub); sub = "";}
        else {sub += my_string[i];}
        
    }
    return answer;
}