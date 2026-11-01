#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {

    int first, second = 0;
    
    for (int i = 0; i < size(queries); i++){
        first = queries[i][0];
        second = queries[i][1];
        swap(arr[first], arr[second]);
    }
    
    return arr;
}