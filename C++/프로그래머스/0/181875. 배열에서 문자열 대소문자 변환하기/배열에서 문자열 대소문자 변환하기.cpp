#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for (int i = 0; i < size(strArr); i++){
        string str = strArr[i];
        if (i % 2 == 0){ // 짝수 인덱스는 소문자로
            for (int j = 0; j < size(str); j++){
                str[j] = tolower(str[j]);
            }
        }
        else{
            for (int j = 0; j < size(str); j++){
                str[j] = toupper(str[j]);
            }
        }
        strArr[i] = str;
    }
    return strArr;
}