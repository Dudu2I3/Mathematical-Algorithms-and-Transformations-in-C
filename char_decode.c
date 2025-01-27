#include <stdio.h>

void encode();
void decode();

int main() {
    int mode;
    if (scanf("%d", &mode) != 1) {
        printf("n/a\n");
        return 1;
    }

    if (getchar() != ' ') {
        printf("n/a\n");
        return 1;
    }

    if (mode == 0) {
        encode();
    } else if (mode == 1) {
        decode();
    } else {
        printf("n/a\n");
        return 1;
    }

    return 0;
}

void encode() {
    return;
}

void decode() {
    char ch1,ch2;
    while(scanf("%X",ch1)){
        scanf("%c",ch2);
        if (ch2 == ' ') printf("%X",ch2);
        else if (ch2 == '\n') {
            printf("%X",ch2);
            return;
        }
        else{
            printf("n/a");
            return;
        }
    }
}