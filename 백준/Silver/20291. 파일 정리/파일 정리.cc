#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, int> ext_count;
    
    while (n--) {
        string filename;
        cin >> filename;
        
        // 마지막 '.' 이후가 확장자
        size_t dot_pos = filename.find_last_of('.');
        string ext = filename.substr(dot_pos + 1);
        
        ext_count[ext]++;
    }
    
    // 자동 정렬된 확장자 출력
    for (const auto& pair : ext_count) {
        cout << pair.first << " " << pair.second << "\n";
    }
    
    return 0;
}
