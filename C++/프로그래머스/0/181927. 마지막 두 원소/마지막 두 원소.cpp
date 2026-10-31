#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int len = size(num_list);
    int last = num_list[len-1];
    int before = num_list[len-2];
    
    if (last > before){
        num_list.push_back(last-before);
    }
    else{
        num_list.push_back(last * 2);
    }
    return num_list;
}