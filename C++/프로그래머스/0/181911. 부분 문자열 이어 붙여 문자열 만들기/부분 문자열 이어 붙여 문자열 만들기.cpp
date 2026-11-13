#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for (int i = 0; i < size(my_strings); i++) {
        string str = my_strings[i];
        int start = parts[i][0];
        int end = parts[i][1];
        for (int j = start; j < end + 1; j++) {
            answer += str[j];
        }
    }
    return answer;
}