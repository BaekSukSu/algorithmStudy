#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Conference {
public:
    unsigned int start;
    unsigned int end;

    Conference(unsigned int s = 0, unsigned int e = 0) : start(s), end(e) { }
};

bool compare(Conference& a, Conference& b) {
    if (a.end == b.end) return a.start < b.start;
    return a.end < b.end;
}

int main() {
    int count;
    cin >> count;

    vector<Conference> con(count);

    for (int i = 0; i < count; i++) {
        cin >> con[i].start >> con[i].end;
    }

    sort(con.begin(), con.end(), compare);

    int conNum = 1; // 첫 번째 회의 포함
    int i = 0;

    for (int j = 1; j < count; j++) {
        if (con[i].end <= con[j].start) { // 겹치지 않는 회의 선택
            i = j;
            conNum++;
        }
    }

    cout << conNum << endl;

    return 0;
}
