#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45; // 0 ~ 9 까지의 합
    
    for (int x : numbers) {
        answer -= x; // 있는 숫자를 빼나간다.
    }
    
    return answer;
}