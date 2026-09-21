#include <string>
#include <vector>
#include <map>         

using namespace std;

int solution(vector<vector<string>> clothes) {
    map<string, int> cnt;

    for (vector<string> c : clothes) {
        cnt[c[1]]++;              // c[1]은 "종류". 이름(c[0])은 쓰지 않는다
    }

    int answer = 1;
    for (auto p : cnt) {
        answer *= (p.second + 1); // +1 = "이 종류는 안 입는다"는 선택지
    }

    return answer - 1;            // -1 = 아무것도 안 입는 경우 제외
}