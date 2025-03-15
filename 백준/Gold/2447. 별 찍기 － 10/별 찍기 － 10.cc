#include <iostream>
#include <vector>

using namespace std;

int N;
vector<vector<char>> starArray;

void star(int size, int x, int y) {
    if (size == 1) {
        starArray[x][y] = '*';
        return;
    }

    int newSize = size / 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != 1 || j != 1) {  // 가운데 부분은 비우기
                star(newSize, x + i * newSize, y + j * newSize);
            }
        }
    }
}

int main() {
    cin >> N;

    // 배열 초기화 (공백 ' '으로 채우기)
    starArray.assign(N, vector<char>(N, ' '));

    star(N, 0, 0);

    // 출력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << starArray[i][j];
        }
        cout << '\n'; // endl 대신 '\n' 사용 (속도 향상)
    }

    return 0;
}
