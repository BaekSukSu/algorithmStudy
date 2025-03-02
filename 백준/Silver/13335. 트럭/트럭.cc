#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, w, L;
    cin >> n >> w >> L;

    queue<int> trucks;
    for (int i = 0; i < n; i++) {
        int truck;
        cin >> truck;
        trucks.push(truck);
    }

    queue<int> bridge; // 현재 다리 위의 트럭
    int bridge_weight = 0, time = 0;

    // 다리의 길이만큼 0으로 초기화 (트럭이 없는 상태)
    for (int i = 0; i < w; i++) {
        bridge.push(0);
    }

    while (!trucks.empty() || bridge_weight > 0) {
        time++;

        // 다리에서 맨 앞 트럭 제거
        bridge_weight -= bridge.front();
        bridge.pop();

        // 새로운 트럭을 다리에 올릴 수 있는지 확인
        if (!trucks.empty() && bridge_weight + trucks.front() <= L) {
            bridge_weight += trucks.front();
            bridge.push(trucks.front());
            trucks.pop();
        } else {
            bridge.push(0); // 트럭이 못 올라가면 빈 공간(0)을 추가
        }
    }

    cout << time << endl;
    return 0;
}
