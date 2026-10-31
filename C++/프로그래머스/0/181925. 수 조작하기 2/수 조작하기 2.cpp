#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int before = numLog[0];
    
    for (int i = 1; i < size(numLog); i++){
        if ((numLog[i] - before) == 1) {answer += 'w';}
        else if ((numLog[i] - before) == -1) {answer += 's';}
        else if ((numLog[i] - before) == 10) {answer += 'd';}
        else {answer += 'a';}
        before = numLog[i];
    }
    return answer;
}