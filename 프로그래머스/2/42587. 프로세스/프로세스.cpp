#include <string>
#include <vector>
#include <queue>        
#include <algorithm>    

using namespace std;

int solution(vector<int> priorities, int location) {

    queue<pair<int, int>> q;
    for (int i = 0; i < priorities.size(); i++) {
        q.push({priorities[i], i});
    }

    sort(priorities.begin(), priorities.end(), greater<int>());

    int idx = 0;     // 지금 실행될 차례의 우선순위
    int order = 0;   // 몇 번째로 실행했나

    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();

        if (cur.first == priorities[idx]) {   // 지금 실행될 차례가 맞다
            order++;
            idx++;
            if (cur.second == location) return order;   // 찾던 프로세스!
        } else {
            q.push(cur);                      // 아직 차례 아님 → 맨 뒤로
        }
    }

    return 0;
}