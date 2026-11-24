#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (int i = 0; i < size(myString); i++){
        if (myString[i] == 'a') {myString[i] -= 32;}
        else if (myString[i] == 'A') {}
        else {myString[i] = tolower(myString[i]);}
    }
    return myString;
}