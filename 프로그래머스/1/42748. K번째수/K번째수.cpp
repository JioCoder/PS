#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (vector<int> cmd : commands) {
        int i = cmd[0], j = cmd[1], k = cmd[2];
        
        vector<int> part(array.begin() + (i - 1), array.begin() + j);
        
        sort(part.begin(), part.end());
        
        answer.push_back(part[k-1]);
    }
    
    return answer;
}