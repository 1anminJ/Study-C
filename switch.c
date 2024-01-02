#include <stdio.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    for(int i = 0; i < LEN_INPUT; i++){
        if('A' <= s1[i] && 'Z' >= s1[i])
            s1[i] = s1[i] + 32;
        else if('a' <= s1[i] && 'z' >= s1[i])
            s1[i] = s1[i] - 32;
    }
    printf("result : %s", s1);
}