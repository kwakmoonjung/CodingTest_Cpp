#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (int i = 0; i < size(myString); i++){
        myString[i] = toupper(myString[i]);
    }
    return myString;
}