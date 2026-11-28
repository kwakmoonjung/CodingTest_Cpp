#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string sub = "";
    
    for (char ch : my_string) {
        if (ch == ' ' && sub != "") {
            answer.push_back(sub);
            sub.clear();            
        }
        else if (ch == ' ' && sub == "") {
            continue;
        }
        else {
            sub += ch;
        }
    }
    if (sub != "") {answer.push_back(sub);}
    return answer;
}