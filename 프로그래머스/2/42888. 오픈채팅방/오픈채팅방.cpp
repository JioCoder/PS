#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer; 
    
    unordered_map<string, string> nick; 
    vector<pair<char, string>> logs; 
    for (const string& r : record) {
        stringstream ss(r);
        string cmd, uid, name;
        ss >> cmd >> uid >> name;
        
        if (cmd == "Enter") {
            nick[uid] = name;
            logs.push_back({'E', uid});
        } else if (cmd == "Leave") {
            logs.push_back({'L', uid});
        } else {
            nick[uid] = name;
        }
    }
    answer.reserve(logs.size());
    for (auto& [act, uid] : logs) {
        if (act == 'E') answer.push_back(nick[uid] + "님이 들어왔습니다.");
        else
            answer.push_back(nick[uid] + "님이 나갔습니다.");
    }
    return answer;
}