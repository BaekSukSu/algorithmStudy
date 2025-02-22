#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair <string, int>& p1, pair <string, int>& p2) {
    if(p1.second == p2.second) {
        if(p1.first.length() == p2.first.length()) {
            return p1.first < p2.first;
        }
        return p1.first.length() > p2.first.length();
    }
    return p1.second > p2.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M;
    cin >> N >> M;
    string word;
    map<string, int> wordMap;

    for(int i=0; i<N; i++) {
        cin >> word;
        if(word.length() >= M) wordMap[word]++;
    }

    vector <pair <string, int>> wordVector (wordMap.begin(), wordMap.end());

    sort(wordVector.begin(), wordVector.end(), compare);

    for(int i=0; i<wordVector.size(); i++) {
        cout<< wordVector[i].first << '\n';
    }

    return 0;
}