#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    
    for (int i = 0; i < seoul.size(); i++ ) {
        if (seoul[i] == "Kim") {
            answer = "김서방은 " + to_string(i) + "에 있다";
            break; //  찾았으니 더 둘 필요 없음
        }
    }
    
    return answer;
}