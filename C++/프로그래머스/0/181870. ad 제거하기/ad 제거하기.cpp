#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for (int i = 0; i < size(strArr); i++){
        int result = strArr[i].find("ad");
        if (result == -1) {answer.push_back(strArr[i]);}
    }
    return answer;
}