#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int len = size(my_string);
    int start = len - n;
    
    for (int i = start; i < size(my_string); i++){
        answer += my_string[i];
    }
    return answer;
}