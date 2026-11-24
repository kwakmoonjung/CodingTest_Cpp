#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    char alp_char = alp[0];
    for (int i = 0; i < size(my_string); i++){
        if (my_string[i] == alp_char) {my_string[i] = toupper(my_string[i]);}
    }
    return my_string;
}