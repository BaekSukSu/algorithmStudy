#include <cstdio>

int main() {
    int H, M;

    scanf("%d %d", &H, &M);

    if(M < 45 && H == 0) {
        H = 23;
        int tmp = 45 - M;
        M = 60 - tmp;
    } else if(M < 45) {
        H = H - 1;
        int tmp = 45 - M;
        M = 60 - tmp;
    } else {
        M = M - 45;
    }

    printf("%d %d", H, M);

    return 0;
}