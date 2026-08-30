#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    // 1. 전화번호 목록을 사전 순으로 정렬
    sort(phone_book.begin(), phone_book.end());
    
    for (size_t i = 0; i < phone_book.size() - 1; i++){
        // phone_book[i]가 phone_book[i+1]의 접두어인지 확인
        // string::find는 해당 문자열이 시작하는 위치를 반환하며, 0이면 접두어임을 의미
        
        if(phone_book[i+1].find(phone_book[i]) == 0)
            return false;
    }
    return true;
}