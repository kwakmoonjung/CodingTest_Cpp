#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    int start, end, k = 0;
    
    for (int i = 0; i < size(queries); i++){
        int min = 9999999;
        
        start = queries[i][0];
        end = queries[i][1];
        k = queries[i][2];
        
        for (int j = start; j < end + 1; j++){
            if (arr[j] > k && arr[j] < min){
                min = arr[j];
            }
        }
        
        if (min != 9999999) {answer.push_back(min);}
        else {answer.push_back(-1);}
    }
    return answer;
}