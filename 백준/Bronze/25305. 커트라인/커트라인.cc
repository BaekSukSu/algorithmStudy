#include <cstdio>

int main() {
    int N, k;
    scanf("%d %d", &N, &k);

    int score[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(score[i] > score[j]) {
                int tmp = score[i];
                score[i] = score[j];
                score[j] = tmp;
            }
        }
    }

    printf("%d", score[k-1]);

    return 0;
}