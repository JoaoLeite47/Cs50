#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number;
    while(true) {
    number = get_int("Put the number here! ");
        if (number > 8 || number < 1) {
        continue;
    } else {
        for(int i = 0; i < number; i++) {
            for(int j = 0; j < number; j++) {
                if (i + j < number - 1) {
                    printf(" ");
                } else {
                    printf("#");
                }
            }
            printf("\n");
            }
        }
    }
}