#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (int i = 0; i < size(queries); i++){
        int start = queries[i][0];
        int end = queries[i][1];
        
        for (int j = start; j < end + 1; j++) {
            arr[j]++;
        }
    }
    return arr;
}