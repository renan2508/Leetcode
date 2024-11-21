#include <stdio.h>
#include <stdbool.h>


bool isPerfectSquare(const int num) {
    for(long int i = 1;i<=num;i++) {
        printf("%d\n", i);
        if(i * i == num) {
            return true;
        }
        if(i * i > num){
            return false;
        }
    }
    return false;
}

int main(void){

    const int num = 2147483647;
    bool is_perfect = isPerfectSquare(num);
    if(is_perfect) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
