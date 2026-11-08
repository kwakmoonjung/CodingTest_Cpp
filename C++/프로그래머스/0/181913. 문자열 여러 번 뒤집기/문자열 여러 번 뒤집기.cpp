#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    for (int i = 0; i < size(queries); i++){
        int start = queries[i][0];
        int end = queries[i][1];
        
        reverse(my_string.begin() + start, my_string.begin() + end + 1);
        
        // string prev = my_string.substr(start, len);
        // cout << prev << endl;
        
        // for (int j = start; j < start + len/2; j++){
        //     my_string[j] = my_string[j + len];
        // }
    }
    return my_string;
}