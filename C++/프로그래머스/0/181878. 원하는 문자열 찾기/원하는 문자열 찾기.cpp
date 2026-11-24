#include <string>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string pat_low = "", my_low = "";
    
    for (int i = 0; i < size(pat); i++){
        pat_low += tolower(pat[i]);
    }
    for (int i = 0; i < size(myString); i++){
        my_low += tolower(myString[i]);
    }
    
    size_t pos = my_low.find(pat_low);
    
    if (pos != string::npos) {return 1;}
    
    return 0;
}