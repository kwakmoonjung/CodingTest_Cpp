#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (int i = 0; i < size(queries); i++){
        vector<int> query = queries[i];
        int s = query[0];
        int e = query[1];
        int k = query[2];
        for (int j = s; j < e+1; j++){
            if (j % k == 0) {arr[j] += 1;}
        }
    }
    return arr;
}