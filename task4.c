#include <stdio.h>
#include <string.h>

// Function to perform Run-Length Encoding
void runLengthEncoding(char* input) {
    int length = strlen(input);
    
    // Iterate through the string
    for (int i = 0; i < length; i++) {
        int count = 1;
        
        // Count the occurrence of the same character
        while (i < length - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        
        // Print the character and its count
        printf("%c%d", input[i], count);
    }
}

int main() {
    char input[] = "aaabbbccdddaa";
    
    printf("Original String: %s\n", input);
    printf("Encoded String: ");
    
    // Call the RLE function
    runLengthEncoding(input);
    
    return 0;
}
