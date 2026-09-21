#include <string>
#include <vector>
#include <map>         

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> cnt;

    for (string name : participant) cnt[name]++;   // 참가자 +1
    for (string name : completion)  cnt[name]--;   // 완주자 -1

    for (auto p : cnt) {
        if (p.second > 0) {        // 0으로 안 깎인 사람
            answer = p.first;
            break;                 // 찾았으니 멈춤
        }
    }

    return answer;
}