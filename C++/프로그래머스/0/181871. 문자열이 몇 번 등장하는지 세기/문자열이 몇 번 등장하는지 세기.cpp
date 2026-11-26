#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int len = size(pat);
    
    for (int i = 0; i < size(myString); i++){
        string substr = myString.substr(i, len);
        if (substr == pat) {answer++;}
    }
    return answer;
}