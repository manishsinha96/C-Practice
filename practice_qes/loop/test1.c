#include <stdio.h>
#include <stdlib.h>

char* solve(int N, char* ch) {
    char* result = (char*)malloc((N + 1) * sizeof(char)); // Allocate memory for the result, including space for the null terminator

    for (int i = 0; i < N; i++) {
        result[i] = ch[i]; // Copy each character to the result array
    }

    result[N] = '\0'; // Null-terminate the result string

    return result; // Return the concatenated string
}

int main() {
    int N;
    printf("Enter the number of characters: ");
    scanf("%d", &N); // Read the number of characters from the user

    // Allocate memory to store N characters
    char* ch = (char*)malloc(sizeof(char) * N);

    printf("Enter the characters: ");
    for (int i = 0; i < N; i++) {
        // Use a space before %c to avoid reading any leftover newline characters
        scanf(" %c", &ch[i]);
    }

    // Get the concatenated string
    char* out_ = solve(N, ch);

    // Print the result
    printf("Concatenated string: %s\n", out_);

    // Free the allocated memory
    free(ch);
    free(out_);

    return 0;
}
