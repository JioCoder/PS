#include <string>
#include <vector>
#include <set> // set 쓰려면 필요

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> s;
    
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j <numbers.size(); j++) {
            s.insert(numbers[i] + numbers[j]);
        }
    }
    
    for (int x : s) answer.push_back(x); // set을 vector로 옮기기
    return answer; 

}