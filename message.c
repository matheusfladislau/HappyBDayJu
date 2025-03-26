#include <stdio.h>
#include <unistd.h>

#define clear() printf("\033[H\033[J")
#define FIM 16

void gotoxy(int x,int y) {
    printf("%c[%d;%df", 0x1B, y, x);
}

void confetti(int i, int x) {
    for(int j = 0; j < FIM; j++) {
        int xcalc;
        if (i % 2 == 0) {
            xcalc = (j % 2 == 0) ? x : x+1;
        } else {
            xcalc = (j % 2 == 0) ? x+1 : x;
        }
        gotoxy(xcalc, j);
        printf(" # ");
    }
}

void message(int n) {
    switch (n) {
        case 1:
            printf("  ____       _       ____        _        ____  U _____ u _   _    ____     \n");
            break;
        case 2:
            printf("U|  _\"\\ uU  /\"\\  uU |  _\"\\ u U  /\"\\  u U | __\")u\\| ___\"|/| \\ |\"|  / __\"| u  \n");
            break;
        case 3:
            printf("\\| |_) |/ \\/ _ \\/  \\| |_) |/  \\/ _ \\/   \\|  _ \\/ |  _|\" <|  \\| |>\\___ \\/   \n");
            break;
        case 4:
            printf(" |  __/   / ___ \\   |  _ <    / ___ \\    | |_) | | |___ U| |\\  |u u___) |   \n");
            break;
        case 5:
            printf(" |_|     /_/   \\_\\  |_| \\_\\  /_/   \\_\\   |____/  |_____| |_| \\_|  |____/>>  \n");
            break;
        case 6:
            printf(" ||>>_    \\\\    >>  //   \\\\_  \\\\    >>  _|| \\\\_  <<   >> ||   \\\\,-.)(  (__) \n");
            break;
        case 7:
            printf("(__)__)  (__)  (__)(__)  (__) (__)  (__)(__) (__)(__) (__)(_\")  (_/(__)      \n");
            break;
        case 8:
            printf("     _      _   _                                                            \n");
            break;
        case 9:
            printf("  U |\"| uU |\"|u| |                                                           \n");
            break;
        case 10:
            printf(" _ \\| |/  \\| |\\| |                                                           \n");
            break;
        case 11:
            printf("| |_| |_,-.| |_| |                                                           \n");
            break;
        case 12:
            printf(" \\___/-(_/<<\\___/                                                            \n");
            break;
        case 13:
            printf("  _//    (__) )(                                                             \n");
            break;
        case 14:
            printf(" (__)        (__)                                                            \n");
            break;
    }
}

int main() {
    clear();
    for (int i = 0; i < FIM; i++) {
        gotoxy(10, i);
        message(i);
        confetti(i, 90);
        confetti(i, 1);
        fflush(stdout);
        sleep(1);
    }

    return 0;
}
