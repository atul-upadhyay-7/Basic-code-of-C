#include <stdio.h>
// #include <math.h>

// int main() {
//     int num, originalNum, reversedNum = 0, remainder, numDigits;

//     // Input the number
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     // Store the original number for later comparison
//     originalNum = num;

//     // Find the number of digits using log10()
//     numDigits = (int)log10(num) + 1;

//     // Reverse the digits using mathematical operations
//     for (int i = 0; i < numDigits; i++) {
//         remainder = num % 10;  // Get the last digit
//         reversedNum += remainder * (int)pow(10, numDigits - i - 1);  // Build the reversed number
//         num /= 10;  // Remove the last digit from num
//     }

//     // Check if the original number is equal to the reversed number
//     if (originalNum == reversedNum) {
//         printf("%d is a palindrome.\n", originalNum);
//     } else {
//         printf("%d is not a palindrome.\n", originalNum);
//     }

//     return 0;
// }
