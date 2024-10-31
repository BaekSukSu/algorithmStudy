#include <cstdio>

int main() {
    int number = 0;
    scanf("%d", &number);

    int array[number];

    int n;
    for(int k = 0; k < number; k++) {
        scanf("%d", &n);
        array[k] = n;
    }

    for(int i = 0; i < number; i++) {
        for(int j = 0; j < number; j++) {
            if(array[i] < array[j]) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }

    for(int i = 0; i < number; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}