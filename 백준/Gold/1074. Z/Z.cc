#include <iostream>
using namespace std;

int N, r, c;
int point;

int position(int a1, int a2, int size) {
    if (size == 1) {
        return point;
    }

    int half = size / 2;

    if (r < a1 + half && c < a2 + half) { // 1사분면
        return position(a1, a2, half);
    }
    else if (r < a1 + half && c >= a2 + half) { // 2사분면
        point += half * half;
        return position(a1, a2 + half, half);
    }
    else if (r >= a1 + half && c < a2 + half) { // 3사분면
        point += 2 * half * half;
        return position(a1 + half, a2, half);
    }
    else { // 4사분면
        point += 3 * half * half;
        return position(a1 + half, a2 + half, half);
    }
}


int main() {
    cin >> N >> r >> c;

    int sqaured = 1;
    for(int i=0; i<N; i++)
        sqaured = sqaured * 2;


    cout << position(0, 0, sqaured) << endl;
}
