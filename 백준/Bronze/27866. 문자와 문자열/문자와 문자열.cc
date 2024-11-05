#include <cstdio>

int main() {
    char word[1000];
    int index;

    scanf("%s", word);
    scanf("%d", &index);

    printf("%c", word[index-1]);

    return 0;
}