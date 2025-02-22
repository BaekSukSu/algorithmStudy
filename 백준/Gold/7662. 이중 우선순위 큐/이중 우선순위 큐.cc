#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int K;
    cin >> K;

    for (int i = 0; i < K; i++) {
        int n;
        cin >> n;

        char c;
        int num;
        multiset<int> s;  // 중복을 허용하는 정렬된 자료구조

        for(int j = 0; j < n; j++) {
            cin >> c >> num;
            if(c == 'I') {
                s.insert(num);  // O(log n)
            } else if(c == 'D') {
                if(s.empty()) continue;
                if(num == 1) {
                    s.erase(prev(s.end()));  // 최댓값 삭제 (O(log n))
                } else if(num == -1) {
                    s.erase(s.begin());  // 최솟값 삭제 (O(log n))
                }
            }
        }

        if(s.empty()) cout << "EMPTY" << endl;
        else {
            cout << *prev(s.end()) << " " << *s.begin() << endl;  // O(1)
        }
    }
}
