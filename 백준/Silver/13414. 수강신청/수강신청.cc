#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second < b.second;
}

int main() {

    int success, totalStu;
    cin >> success >> totalStu;

    unordered_map<string, int> map;

    string stuCode;
    for(int i=0; i<totalStu; i++) {
        cin >> stuCode;
        map[stuCode] = i;
    }

    vector<pair<string, int>> students(map.begin(), map.end());
    sort(students.begin(), students.end(), cmp);
    for (int i = 0; i < (success < students.size() ? success : students.size()); i++) {
        cout << students[i].first << '\n';
    }

    return 0;
}