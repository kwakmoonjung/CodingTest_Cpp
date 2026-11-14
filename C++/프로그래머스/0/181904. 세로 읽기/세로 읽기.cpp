#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    int row = size(my_string) / m;
    for (int i = c; i <= size(my_string); i += m) {
        answer += my_string[i-1];    
    }
    return answer;
}