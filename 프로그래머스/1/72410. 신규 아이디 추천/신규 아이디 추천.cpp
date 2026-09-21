#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string s = "";
    
    // 1단계 - 대문자를 소문자로
    for (char c : new_id) {
        if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
        s += c;
    }
    
    // 2단계 - 허용된 문자만 남기기
    string t = "";
    for (char c : s) {
        if ((c >= 'a' && c<= 'z') || (c >= '0' && c <= '9') || c == '-' || c == '_' || c == '.') {
            t += c;
        }
    }
    s = t;
    
    //  3단계 - 연속된 마침표를 하나로
    t = "";
    for (char c : s) {
        if (c == '.' && !t.empty() && t.back() == '.') continue; // 직전도 점이면 건너뜀
        t += c;
    }
    s = t;
    
    if (!s.empty() && s.front() == '.') s.erase(0, 1);
    if (!s.empty() && s.back() == '.') s.pop_back();
    
    // 5단계 - 비었으면 "a"
    if (s.empty()) s = "a";
    
    // 6단계 - 16자 이상이면 15자로 자르고, 끝이 점이면 제거
    if (s.length() >= 16) {
        s = s.substr(0, 15);
        if (s.back() == '.') s.pop_back();
    }
    
    // 7단계 2자 이하면 마지막 글자를 반복
    while (s.length() <= 2) {
        s += s.back();
    }
    
    return s;
}