#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Function prototype for the assembly function
extern void cvtRGBToGray(uint8_t *img2, uint8_t *img1, int m, int n);

int main() {
    int m = 3; // width
    int n = 3; // height
    uint8_t img1[3][3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{1, 2, 6}, {2, 6, 7}, {9, 4, 8}},
        {{1, 5, 7}, {1, 3, 3}, {3, 4, 6}}
    };
    uint8_t img2[3][3] = {0}; // leave this '0' pls

    // Print the original image for debugging purposes
    printf("Original Image:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("(%d, %d, %d) ", img1[i][j][0], img1[i][j][1], img1[i][j][2]);
        }
        printf("\n");
    }

    // Call the assembly function
    cvtRGBToGray(&img2[0][0], &img1[0][0][0], m, n);
    
    // Debug print: Check if the function call returned
    printf("Assembly function called\n");

(R + G + B) / 3    // Print the grayscale image
    printf("Grayscale Image:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d ", img2[i][j]);
        }
        printf("\n");
    }

    // Debug print: Check if the program reaches this point
    printf("Program finished\n");

    return 0;
}
