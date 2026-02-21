#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

int countPartitions(char *s, int start, int n) {
    if (start == n)
        return 1;

    int count = 0;

    for (int i = start; i < n; i++) {
        if (isPalindrome(s, start, i)) {
            count += countPartitions(s, i + 1, n);
        }
    }

    return count;
}

int main() {
    char str[100];
    scanf("%s", str);

    int n = strlen(str);
    int result = countPartitions(str, 0, n);

    printf("%d\n", result);

    return 0;
}
