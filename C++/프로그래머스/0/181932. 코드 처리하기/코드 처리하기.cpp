#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    
    for (int i = 0; i < size(code); i++){
        if (code[i] == '1') {mode = (mode + 1) % 2;}
        
        else if (mode == 0){  // mode 0
            if (i % 2 == 0) {answer += code[i];}    // 짝수일 때만 추가
        }
        else{   // mode 1
            if (i % 2 == 1) {answer += code[i];}    // 홀수일 때만 추가
        }
    }
    if (answer == "") {return "EMPTY";}
    return answer;
}