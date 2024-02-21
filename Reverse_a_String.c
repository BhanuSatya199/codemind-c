#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Assuming a maximum string length of 100 characters
    scanf("%[^
]", str);

    int length = strlen(str);

    // Swap characters from the beginning and end of the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("%s
", str);

    return 0;
}