#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string sub = "";
    
    for (char ch : my_string) {
        if (ch == ' ') {
            answer.push_back(sub);
            sub.clear();
        }
        else {
            sub += ch;
        }
    }
    answer.push_back(sub);
    
    return answer;
}