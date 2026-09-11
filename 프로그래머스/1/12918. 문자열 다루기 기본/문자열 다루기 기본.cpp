#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    // 길이가 4도 6도 아니면 바로 탈락
    if (s.length() != 4 && s.length() != 6) {
        answer = false;
    } else {
        for (char c : s) {
            if (c < '0' || c > '9') { // 숫자가 아닌 문자가 하나라도 있으면 탈락
                answer = false;
                break;
            }
        }
    }
    return answer;
}