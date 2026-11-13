#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string, string is_suffix) {
    vector<string> answer_list;
    int len = size(my_string);
    
    for (int i = 0; i < len; i++) {
        string str = "";
        
        for (int j = i; j < len; j++) {
            str += my_string[j];
        }
        answer_list.push_back(str);
    }
    
    for (int k = 0; k < size(answer_list); k++){
        if (is_suffix == answer_list[k]) {return 1;}
    }
    return 0;
}