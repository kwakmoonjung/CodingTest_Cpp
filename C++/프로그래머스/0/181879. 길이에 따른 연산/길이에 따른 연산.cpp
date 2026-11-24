#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    if (size(num_list) >= 11) {
        for (int i = 0; i < size(num_list); i++){
            answer += num_list[i];
        }
        return answer;
    }
    else {
        int answer = 1;
        for (int i = 0; i < size(num_list); i++){
            answer *= num_list[i];
        }
        return answer;
    }
}