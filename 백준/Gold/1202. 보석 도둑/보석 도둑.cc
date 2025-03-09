#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

bool compare(const pair<int, int>& p1, const pair<int, int>& p2) {
    if(p1.first == p2.first) {
        return p1.second > p2.second;
    }
    return p1.first < p2.first;
}

int main() {
    int weight, value;
    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> jewels(N);
    for(int i=0; i<N; i++) {
        cin >> weight >> value;
        jewels[i] = {weight, value};
    }

    vector<int> bag(K);
    for(int i=0; i<K; i++) {
        cin >> bag[i];
    }

    sort(jewels.begin(), jewels.end(), compare);
    sort(bag.begin(), bag.end());

    long long ans = 0;

    priority_queue<int> pq;
    int cnt = 0;
    for(int i=0; i<K; i++) {
        while(cnt < N && bag[i] >= jewels[cnt].first) {
            pq.push(jewels[cnt].second);
            cnt++;
        }
        if(!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
    }

    cout << ans << endl;
}
