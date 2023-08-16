#include <stdio.h>
#include <string.h>

void wordrev(char *str) {
    int length = strlen(str);
    int start = 0;

    for (int i = 0; i < length; i++) {
        if (str[i] == '.' || i == length - 1) {
            int end = (i == length - 1) ? i : i - 1;

            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }
    }

    // Reverse the entire string
    int fullEnd = length - 1;
    while (start < fullEnd) {
        char temp = str[start];
        str[start] = str[fullEnd];
        str[fullEnd] = temp;
        start++;
        fullEnd--;
    }
}

int main() {
    char input[1000];
    printf("Input: ");
    scanf("%[^\n]", input);

    wordrev(input);

    printf("Output: %s\n", input);

    return 0;
}
