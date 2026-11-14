#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = 0;
    vector<int>::iterator it;
    
    it = find(arr.begin() + idx, arr.end(), 1);
    if (it == arr.end()) {return -1;}
    answer = it - arr.begin();
    return answer;
}