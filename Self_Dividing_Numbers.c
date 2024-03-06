#include <stdio.h>
int main() {
    int lower, upper;
    scanf("%d", &lower);
    scanf("%d", &upper);
    for (int i = lower; i <= upper; ++i) {
        int num = i;
        int isSelfDividing = 1;
        while (num > 0) {
            int digit = num % 10;
            if (digit == 0 || i % digit != 0) {
                isSelfDividing = 0;
                break;
            }
            num /= 10;
        }
        if (isSelfDividing) {
            printf("%d ", i);
        }
    }
    return 0;
}