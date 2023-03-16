#include <stdio.h>

struct Numbers {
    int num1;
    int num2;
} me;

int main() {
    struct Numbers me;
    me.num1 = 3;
    me.num2 = 4;
    int sum = me.num1 + me.num2;
    
    printf("%d + %d = %d\n", me.num1, me.num2, sum);
    
    return 0;
}