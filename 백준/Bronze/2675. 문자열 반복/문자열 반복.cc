#include <cstdio>
#include <cstring>

int main() {
    int T;

    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        int number;
        char S[20];
        scanf("%d %s", &number, S);

        char P[160];

        int a = 0;
        for(int j = 0; j < strlen(S); j++) {
            for(int k = 0; k < number; k++) {
                P[a++] = S[j];
            }
        }

        for(int j = 0; j < a; j++) {
            printf("%c", P[j]);
        }
        printf("\n");
    }
    return 0;
}
