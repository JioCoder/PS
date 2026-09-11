#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    while (n > 0) {
        answer += n % 10; // 맨 뒤 자릿수를 더한다
        n /= 10; // 맨 뒤 자릿수를 떼어낸다.
    }

    return answer;
}