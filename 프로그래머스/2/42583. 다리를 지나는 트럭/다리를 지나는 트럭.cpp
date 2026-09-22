#include <string>
#include <vector>
#include <queue>        

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    // 다리를 길이 bridge_length짜리 큐로 만든다. 0 = 빈 칸
    queue<int> bridge;
    for (int i = 0; i < bridge_length; i++) bridge.push(0);

    int time = 0;        // 경과 시간
    int onBridge = 0;    // 다리 위 트럭들의 총 무게
    int idx = 0;         // 다음에 올릴 트럭 번호

    while (idx < truck_weights.size()) {
        time++;                        // 1초 경과

        onBridge -= bridge.front();    // 맨 앞 칸이 다리를 빠져나감
        bridge.pop();

        if (onBridge + truck_weights[idx] <= weight) {
            onBridge += truck_weights[idx];    // 새 트럭을 올린다
            bridge.push(truck_weights[idx]);
            idx++;
        } else {
            bridge.push(0);            // 무게 초과 → 빈 칸을 밀어넣음
        }
    }

    return time + bridge_length;       // 마지막 트럭이 다 건널 때까지
}