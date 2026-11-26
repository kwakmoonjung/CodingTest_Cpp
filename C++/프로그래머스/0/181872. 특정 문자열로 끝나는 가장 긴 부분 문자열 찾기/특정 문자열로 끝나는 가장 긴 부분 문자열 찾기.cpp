#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int lastStart = -1;
    int len = size(pat);
    
    for (int i = 0; i < size(myString); i++){
        string mysub = myString.substr(i, len);
        if (mysub == pat) {lastStart = i;}    
        }
    
    for (int i = 0; i < lastStart+len; i++){
        answer += myString[i];
    }
    return answer;
}