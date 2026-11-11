#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    int i = 1;
    string num_str = "";
    while (true) {
        
        bitset<32> decimal_to_binary(i);
        string binary_string = decimal_to_binary.to_string();
        int num = 5 * stoi(binary_string);
        
        if (num >= l && num <= r) {answer.push_back(num);}
        if (num > r) {break;}
        i++;
    }
    if (answer.empty()) {answer.push_back(-1);}
    return answer;
}