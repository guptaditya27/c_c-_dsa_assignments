#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to create a dynamically allocated array of strings
char** generateCombinations(char* str, int n, int r, int* count) {
    // Calculate the number of combinations
    *count = 1;
    for (int i = 0; i < r; i++)
        *count *= (n - i) / (i + 1);
    
    char** combinations = (char**)malloc(*count * sizeof(char*));
    for (int i = 0; i < *count; i++) {
        combinations[i] = (char*)malloc((r + 1) * sizeof(char));
    }

    int index = 0;
    int* data = (int*)malloc(r * sizeof(int));
    generateCombinationsUtil(str, n, r, 0, data, 0, combinations, &index);
    free(data);
    return combinations;
}

// Utility function to generate combinations
void generateCombinationsUtil(char* str, int n, int r, int index, int* data, int i, char** combinations, int* indexRef) {
    if (index == r) {
        for (int j = 0; j < r; j++)
            combinations[*indexRef][j] = str[data[j]];
        combinations[*indexRef][r] = '\0';
        (*indexRef)++;
        return;
    }

    if (i >= n)
        return;

    data[index] = i;
    generateCombinationsUtil(str, n, r, index + 1, data, i + 1, combinations, indexRef);

    generateCombinationsUtil(str, n, r, index, data, i + 1, combinations, indexRef);
}

int main() {
    char str[] = "ABCD";
    int r = 2;
    int count;
    char** combinations = generateCombinations(str, strlen(str), r, &count);
    
    printf("Combinations:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", combinations[i]);
        free(combinations[i]);
    }
    free(combinations);

    return 0;
}
