#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, length, weight;
    cin >> n >> length >> weight;

    queue <int> truck;
    for(int i=0; i<n; i++) {
        int w;
        cin >> w;
        truck.push(w);
    }

    queue <int> bridge;
    for(int i=0; i<length; i++) {
        bridge.push(0);
    }

    int totalWeight, time=0;

    while(!truck.empty() || totalWeight > 0) {
        time++;

        totalWeight -= bridge.front();
        bridge.pop();

        if(!truck.empty() && totalWeight + truck.front() <= weight) {
            totalWeight += truck.front();
            bridge.push(truck.front());
            truck.pop();
        } else {
            bridge.push(0);
        }
    }

    cout << time << endl;
    return 0;
}