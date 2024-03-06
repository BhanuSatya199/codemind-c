#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int min=0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2== 0 && i % 2 != 0) {
            min++;
        }
    }
    if (min>=1) {
        printf("False");
    } else {
        printf("True");
    }

    return 0;
}