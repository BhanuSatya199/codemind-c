#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int min = -1, max = -1;

    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (arr[i] == count) {
            if (min == -1 || arr[i] < min) {
                min = arr[i];
            }

            if (max == -1 || arr[i] > max) {
                max = arr[i];
            }
        }
    }

    if (min == -1 || max == -1) {
        printf("-1
");
    } else {
        printf("%d %d
", min, max);
    }

    return 0;
}