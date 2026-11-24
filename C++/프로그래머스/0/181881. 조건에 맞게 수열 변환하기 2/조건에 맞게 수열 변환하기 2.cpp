#include <string>
#include <vector>

using namespace std;

vector<int> muldev(vector<int>& arr){
    for (int i = 0; i < size(arr); i++){
        if (arr[i] >= 50 && arr[i] % 2 == 0) {arr[i] /= 2;}
        else if (arr[i] < 50 && arr[i] % 2 == 1) {arr[i] = arr[i] * 2 + 1;}
    }
    return arr;
}

int solution(vector<int> arr) {
    int answer = 0;
    int cnt = 0;
    
    while (true){
        vector<int> arr_before = arr;
        muldev(arr);
        cnt += 1;
        if (arr_before == arr) {break;}     
    }
    return cnt-1;
}

