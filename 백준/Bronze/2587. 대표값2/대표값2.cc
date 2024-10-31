#include <cstdio>

int main() {
    int array[5];
    for(int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(array[i] < array[j]) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }

    int result = 0;
    for(int k = 0; k < 5; k++) {
        result += array[k];
    }
    result = result / 5;
    
    printf("%d\n", result);
    printf("%d", array[2]);

    return 0;
}