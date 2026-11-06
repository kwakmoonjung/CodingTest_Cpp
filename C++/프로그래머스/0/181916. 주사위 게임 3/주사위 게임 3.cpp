#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    vector<int> v = {a, b, c, d};
    vector<int> v_count = {};
    vector<int> :: iterator it;
    
    for (int i = 0; i < size(v); i++){
        it = find(v_count.begin(), v_count.end(), v[i]);
        if (it == v_count.end()) {
        int cnt = count(v.begin(), v.end(), v[i]);
        v_count.push_back(v[i]);
        }
    }
    
    if (size(v_count) == 1) {answer += 1111 * v[0];} // 모두 같은 값일 경우
    
    else if (size(v_count) == 4) {answer += *min_element(v.begin(), v.end());} // 모두 다른 값일 경우
    
    else if (size(v_count) == 3) { // 2개 중복이나 나머지가 다른 경우 p, p, q, r
        int p = v_count[0];
        int q = v_count[1];
        int r = v_count[2];
        int cnt_p = count(v.begin(), v.end(), p);
        int cnt_q = count(v.begin(), v.end(), q);
        int cnt_r = count(v.begin(), v.end(), r);
        if (cnt_p == 2) {answer += q * r;}
        else if (cnt_q == 2) {answer += p * r;}
        else {answer += q * p;}   
    }
    
    else if (size(v_count) == 2) {  
        int cnt1 = count(v.begin(), v.end(), v_count[0]);
        int cnt2 = count(v.begin(), v.end(), v_count[1]);
        
        if (cnt1 == 3 || cnt2 == 3){  // 3개 중복 p, p, p, q
            int p, q;
            if (cnt1 == 3) {p = v_count[0]; q = v_count[1];}
            else {p = v_count[1]; q = v_count[0];}
            answer += pow((10 * p + q), 2);
            }
    
        else if (cnt1 == 2 && cnt2 == 2) { // 2개씩 중복 p, p, q, q
            int p = v_count[0];
            int q = v_count[1];
            answer += (p + q) * abs(p - q);
        }
    }
    return answer;
}