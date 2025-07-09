#include <stdio.h>

int main() {
    int n, m;
    int arr[200]; // size enough to hold both arrays

    // Read n and elements of first array
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read m and elements of second array, store them after first array
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[n + i]);
    }

    // Print the combined array
    for (int i = 0; i < n + m; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}