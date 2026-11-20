#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    for (int i = 0; i < size(query); i++){
        int num = query[i];
        if (i % 2 == 0) { // 짝수 인덱스 -> 뒷부분 자르기
            arr.erase(arr.begin() + num + 1, arr.end());
        }
        else { // 홀수 인덱스 -> 앞부분 자르기
            arr.erase(arr.begin(), arr.begin() + num);
        }
    }
    return arr;
}