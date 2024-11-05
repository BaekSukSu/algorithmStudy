#include <cstdio>

int main() {
    int array[5];

    int result = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
        result += (array[i] * array[i]);
    }
    
    printf("%d\n", result % 10);

    return 0;
}