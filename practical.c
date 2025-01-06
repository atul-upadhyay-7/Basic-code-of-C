// 1. Print your name.
// #include <stdio.h>

// int main() {
//     printf("Atul\n");
//     return 0;
// }
// 2. Print full name in 2 lines.
// #include <stdio.h>

// int main() {
//     printf("Atul\nUpadhyay\n");
//     return 0;
// }
// 3. Print your name in the center of the screen.
// #include <stdio.h>

// int main() {
//     printf("\n\n\n\n\n\t\t\tAtul Upadhyay\n\n\n\n\n");
//     return 0;
// }
// 4. Print some patterns using ‘\n’ & ‘\t’.
// #include <stdio.h>

// int main() {
//     printf("Pattern 1:\n");
//     printf("*\n\t**\n\t\t***\n\t\t\t****\n\n");

//     printf("Pattern 2:\n");
//     printf("\t\t*\n\t*\t*\n*\t\t*\t*\n");
//     return 0;
// }
// 5. Print some patterns using ‘\n’ & ‘\t’.
// #include <stdio.h>

// int main() {
//     printf("Pattern 3:\n");
//     printf("1\t2\t3\t4\n\n");
//     printf("5\t6\t7\t8\n\n");
//     printf("9\t10\t11\t12\n");
//     return 0;
// }
// 6. Add 2 numbers.
// #include <stdio.h>

// int main() {
//     int a, b, sum;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     sum = a + b;
//     printf("Sum = %d\n", sum);
//     return 0;
// }
// 7. Find average of 3 numbers.
// #include <stdio.h>

// int main() {
//     float num1, num2, num3, average;
//     printf("Enter three numbers: ");
//     scanf("%f %f %f", &num1, &num2, &num3);
//     average = (num1 + num2 + num3) / 3;
//     printf("Average = %.2f\n", average);
//     return 0;
// }
// 8. Find area of rectangle and circle.
// #include <stdio.h>

// #define PI 3.14159

// int main() {
//     float length, width, radius, area_rectangle, area_circle;

//     // Rectangle
//     printf("Enter length and width of the rectangle: ");
//     scanf("%f %f", &length, &width);
//     area_rectangle = length * width;
//     printf("Area of rectangle = %.2f\n", area_rectangle);

//     // Circle
//     printf("Enter radius of the circle: ");
//     scanf("%f", &radius);
//     area_circle = PI * radius * radius;
//     printf("Area of circle = %.2f\n", area_circle);

//     return 0;
// }
// 9. Swap 2 numbers using 3rd variable.
// #include <stdio.h>

// int main() {
//     int x, y, temp;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);

//     temp = x;  // Storing the value of x in temp
//     x = y;     // Assigning the value of y to x
//     y = temp;  // Assigning the value of temp (original x) to y

//     printf("After swapping: x = %d, y = %d\n", x, y);
//     return 0;
// }
// 10. Swap 2 numbers without 3rd variable.
// #include <stdio.h>

// int main() {
//     int x, y;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);

//     x = x + y;  // Sum of x and y is stored in x
//     y = x - y;  // Subtracting y from the sum gives the original x
//     x = x - y;  // Subtracting the new y from the sum gives the original y

//     printf("After swapping: x = %d, y = %d\n", x, y);
//     return 0;
// }
// 11. Find the maximum of 2 numbers.
// #include <stdio.h>

// int main() {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     if (a > b)
//         printf("Maximum = %d\n", a);
//     else
//         printf("Maximum = %d\n", b);

//     return 0;
// }
// 12. Find the maximum of 3 numbers using nested if.
// #include <stdio.h>

// int main() {
//     int a, b, c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a > b) {
//         if (a > c)
//             printf("Maximum = %d\n", a);
//         else
//             printf("Maximum = %d\n", c);
//     } else {
//         if (b > c)
//             printf("Maximum = %d\n", b);
//         else
//             printf("Maximum = %d\n", c);
//     }

//     return 0;
// }
// 13. Find the maximum of 3 numbers using else if else ladder.
// #include <stdio.h>

// int main() {
//     int a, b, c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a > b && a > c)
//         printf("Maximum = %d\n", a);
//     else if (b > a && b > c)
//         printf("Maximum = %d\n", b);
//     else
//         printf("Maximum = %d\n", c);

//     return 0;
// }
// 14. Generate student’s result based on percentage.
// #include <stdio.h>

// int main() {
//     float percentage;
//     printf("Enter the percentage: ");
//     scanf("%f", &percentage);

//     if (percentage >= 90)
//         printf("Grade: A\n");
//     else if (percentage >= 75)
//         printf("Grade: B\n");
//     else if (percentage >= 50)
//         printf("Grade: C\n");
//     else if (percentage >= 35)
//         printf("Grade: D\n");
//     else
//         printf("Fail\n");

//     return 0;
// }
// 15. Generate electricity bill based on usage of units.
// #include <stdio.h>

// int main() {
//     int units;
//     float bill;
//     printf("Enter electricity usage in units: ");
//     scanf("%d", &units);

//     if (units <= 100)
//         bill = units * 1.5;
//     else if (units <= 300)
//         bill = 100 * 1.5 + (units - 100) * 2.0;
//     else
//         bill = 100 * 1.5 + 200 * 2.0 + (units - 300) * 3.0;

//     printf("Total Electricity Bill = Rs. %.2f\n", bill);
//     return 0;
// }
// 16. Create calculator using switch case.
// #include <stdio.h>

// int main() {
//     char operator;
//     float num1, num2, result;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf(" %c", &operator);
//     printf("Enter two numbers: ");
//     scanf("%f %f", &num1, &num2);

//     switch (operator) {
//         case '+':
//             result = num1 + num2;
//             printf("Result = %.2f\n", result);
//             break;
//         case '-':
//             result = num1 - num2;
//             printf("Result = %.2f\n", result);
//             break;
//         case '*':
//             result = num1 * num2;
//             printf("Result = %.2f\n", result);
//             break;
//         case '/':
//             if (num2 != 0)
//                 result = num1 / num2;
//             else
//                 printf("Error: Division by zero\n");
//             break;
//         default:
//             printf("Invalid operator\n");
//     }

//     return 0;
// }
// 17. Find area of rectangle, circle and square using switch case.
// #include <stdio.h>
// #define PI 3.14159

// int main() {
//     int choice;
//     float length, width, radius, side, area;

//     printf("Choose a shape to calculate the area:\n");
//     printf("1. Rectangle\n2. Circle\n3. Square\n");
//     printf("Enter your choice: ");
//     scanf("%d", &choice);

//     switch (choice) {
//         case 1:
//             printf("Enter length and width of the rectangle: ");
//             scanf("%f %f", &length, &width);
//             area = length * width;
//             printf("Area of Rectangle = %.2f\n", area);
//             break;

//         case 2:
//             printf("Enter the radius of the circle: ");
//             scanf("%f", &radius);
//             area = PI * radius * radius;
//             printf("Area of Circle = %.2f\n", area);
//             break;

//         case 3:
//             printf("Enter the side length of the square: ");
//             scanf("%f", &side);
//             area = side * side;
//             printf("Area of Square = %.2f\n", area);
//             break;

//         default:
//             printf("Invalid choice\n");
//     }

//     return 0;
// }
// 18. Print the sum of first 10 numbers.
// #include <stdio.h>

// int main() {
//     int sum = 0;
//     for (int i = 1; i <= 10; i++) {
//         sum += i;
//     }
//     printf("Sum of the first 10 numbers = %d\n", sum);
//     return 0;
// }
// 19. Print the sum of odd and even numbers between 51 and 550.
// #include <stdio.h>

// int main() {
//     int odd_sum = 0, even_sum = 0;

//     for (int i = 51; i <= 550; i++) {
//         if (i % 2 == 0)
//             even_sum += i;
//         else
//             odd_sum += i;
//     }

//     printf("Sum of even numbers = %d\n", even_sum);
//     printf("Sum of odd numbers = %d\n", odd_sum);
//     return 0;
// }
// 20. Reverse a given number.
// #include <stdio.h>

// int main() {
//     int num, reversed = 0, remainder;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     while (num != 0) {
//         remainder = num % 10;
//         reversed = reversed * 10 + remainder;
//         num /= 10;
//     }

//     printf("Reversed number = %d\n", reversed);
//     return 0;
// }
// 21. Check whether given number is palindrome.
// #include <stdio.h>

// int main() {
//     int num, original, reversed = 0, remainder;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     original = num;

//     while (num != 0) {
//         remainder = num % 10;
//         reversed = reversed * 10 + remainder;
//         num /= 10;
//     }

//     if (original == reversed)
//         printf("The number is a palindrome.\n");
//     else
//         printf("The number is not a palindrome.\n");

//     return 0;
// }
// 22. Check whether given number is Armstrong.
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int num, original, remainder, n = 0;
//     double result = 0;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     original = num;

//     // Count the number of digits
//     while (num != 0) {
//         num /= 10;
//         n++;
//     }

//     num = original;

//     // Calculate the sum of digits raised to the power of n
//     while (num != 0) {
//         remainder = num % 10;
//         result += pow(remainder, n);
//         num /= 10;
//     }

//     if ((int)result == original)
//         printf("The number is an Armstrong number.\n");
//     else
//         printf("The number is not an Armstrong number.\n");

//     return 0;
// }
// 23. Generate a Fibonacci series of N Numbers.
// #include <stdio.h>
// int main() {
//     int n, t1 = 0, t2 = 1, nextTerm;

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: ");
//     for (int i = 1; i <= n; i++) {
//         printf("%d ", t1);
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }

//     return 0;
// }
// 24. Generate a Fibonacci series up to N Numbers.
// #include <stdio.h>

// int main() {
//     int limit, t1 = 0, t2 = 1, nextTerm;

//     printf("Enter the maximum value for the Fibonacci series: ");
//     scanf("%d", &limit);

//     printf("Fibonacci Series: ");
//     while (t1 <= limit) {
//         printf("%d ", t1);
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }

//     return 0;
// }

// 25. Generate a multiplication table for any given number.
// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter a number to generate its multiplication table: ");
//     scanf("%d", &num);

//     printf("Multiplication Table for %d:\n", num);
//     for (int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", num, i, num * i);
//     }

//     return 0;
// }
// 26. Generate result sheet for 5 students using for loop.#include <stdio.h>

// int main() {
//     int marks[5][3]; // 5 students and 3 subjects
//     int total[5];
//     float average[5];

//     for (int i = 0; i < 5; i++) {
//         total[i] = 0;
//         printf("\nEnter marks for Student %d:\n", i + 1);
//         for (int j = 0; j < 3; j++) {
//             printf("  Subject %d: ", j + 1);
//             scanf("%d", &marks[i][j]);
//             total[i] += marks[i][j];
//         }
//         average[i] = total[i] / 3.0;
//     }

//     printf("\nResult Sheet:\n");
//     printf("Student\tTotal\tAverage\n");
//     for (int i = 0; i < 5; i++) {
//         printf("%d\t%d\t%.2f\n", i + 1, total[i], average[i]);
//     }

//     return 0;
// }
// 41. Multiply first 10 numbers using 1-D Array.
// #include <stdio.h>

// int main() {
//     int arr[10];
//     long long product = 1;

//     // Initialize the array with the first 10 numbers
//     for (int i = 0; i < 10; i++) {
//         arr[i] = i + 1;
//     }

//     // Multiply the numbers
//     for (int i = 0; i < 10; i++) {
//         product *= arr[i];
//     }

//     printf("Product of the first 10 numbers = %lld\n", product);
//     return 0;
// }
// 42. Arrange a given numbers in ascending order.
// #include <stdio.h>

// int main() {
//     int n, temp;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];

//     printf("Enter the elements: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Bubble Sort (Ascending)
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("Numbers in ascending order: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
// 43. Arrange a given numbers in descending order.
// #include <stdio.h>

// int main() {
//     int n, temp;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];

//     printf("Enter the elements: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Bubble Sort (Descending)
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] < arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("Numbers in descending order: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
// 44. Reverse the order of numbers.
// #include <stdio.h>

// int main() {
//     int n;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];

//     printf("Enter the elements: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Numbers in reverse order: ");
//     for (int i = n - 1; i >= 0; i--) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
// 45. Add 2 Matrix.
// #include <stdio.h>

// int main() {
//     int rows, cols;

//     printf("Enter the number of rows and columns of the matrices: ");
//     scanf("%d %d", &rows, &cols);

//     int mat1[rows][cols], mat2[rows][cols], sum[rows][cols];

//     printf("Enter elements of the first matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &mat1[i][j]);
//         }
//     }

//     printf("Enter elements of the second matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &mat2[i][j]);
//         }
//     }

//     // Add the matrices
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             sum[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }

//     printf("Sum of matrices:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// 46. Multiply 2 Matrix.
// #include <stdio.h>

// int main() {
//     int rows1, cols1, rows2, cols2;

//     printf("Enter the number of rows and columns of the first matrix: ");
//     scanf("%d %d", &rows1, &cols1);
//     printf("Enter the number of rows and columns of the second matrix: ");
//     scanf("%d %d", &rows2, &cols2);

//     if (cols1 != rows2) {
//         printf("Matrix multiplication is not possible.\n");
//         return 0;
//     }

//     int mat1[rows1][cols1], mat2[rows2][cols2], product[rows1][cols2];

//     printf("Enter elements of the first matrix:\n");
//     for (int i = 0; i < rows1; i++) {
//         for (int j = 0; j < cols1; j++) {
//             scanf("%d", &mat1[i][j]);
//         }
//     }

//     printf("Enter elements of the second matrix:\n");
//     for (int i = 0; i < rows2; i++) {
//         for (int j = 0; j < cols2; j++) {
//             scanf("%d", &mat2[i][j]);
//         }
//     }

//     // Initialize the product matrix to zero
//     for (int i = 0; i < rows1; i++) {
//         for (int j = 0; j < cols2; j++) {
//             product[i][j] = 0;
//         }
//     }

//     // Multiply the matrices
//     for (int i = 0; i < rows1; i++) {
//         for (int j = 0; j < cols2; j++) {
//             for (int k = 0; k < cols1; k++) {
//                 product[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }

//     printf("Product of matrices:\n");
//     for (int i = 0; i < rows1; i++) {
//         for (int j = 0; j < cols2; j++) {
//             printf("%d ", product[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// 47. Count total number of words in a string.
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char str[100];
//     int i = 0, word_count = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     // Loop through the string to count words
//     while (str[i]) {
//         // If the current character is a space, check if the previous character is a non-space
//         if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ') {
//             word_count++;
//         }
//         i++;
//     }

//     printf("Total number of words: %d\n", word_count);
//     return 0;
// }
// 48. Find the length of a string.
// #include <stdio.h>

// int main() {
//     char str[100];
//     int length = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     // Loop through the string to count the length
//     while (str[length] != '\0') {
//         length++;
//     }

//     printf("Length of the string is: %d\n", length);
//     return 0;
// }
// 49. Toggling of string.
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char str[100];
    
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     // Loop through the string and toggle the case of each character
//     for (int i = 0; str[i]; i++) {
//         if (isupper(str[i])) {
//             str[i] = tolower(str[i]);
//         } else if (islower(str[i])) {
//             str[i] = toupper(str[i]);
//         }
//     }

//     printf("Toggled string: %s\n", str);
//     return 0;
// }
// 50. Check whether given string is palindrome.
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     int length, i, flag = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     // Remove the newline character if present
//     str[strcspn(str, "\n")] = '\0';

//     length = strlen(str);

//     // Check for palindrome
//     for (i = 0; i < length / 2; i++) {
//         if (str[i] != str[length - 1 - i]) {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag) {
//         printf("The string is not a palindrome.\n");
//     } else {
//         printf("The string is a palindrome.\n");
//     }

//     return 0;
// }
// 51. Create a calculator using UDF.
// #include <stdio.h>

// // Function prototypes
// float add(float a, float b);
// float subtract(float a, float b);
// float multiply(float a, float b);
// float divide(float a, float b);

// int main() {
//     float num1, num2;
//     int choice;

//     printf("Enter two numbers: ");
//     scanf("%f %f", &num1, &num2);

//     printf("Select operation:\n");
//     printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
//     printf("Enter choice: ");
//     scanf("%d", &choice);

//     switch(choice) {
//         case 1:
//             printf("Result: %.2f\n", add(num1, num2));
//             break;
//         case 2:
//             printf("Result: %.2f\n", subtract(num1, num2));
//             break;
//         case 3:
//             printf("Result: %.2f\n", multiply(num1, num2));
//             break;
//         case 4:
//             if (num2 != 0)
//                 printf("Result: %.2f\n", divide(num1, num2));
//             else
//                 printf("Error: Division by zero\n");
//             break;
//         default:
//             printf("Invalid choice\n");
//     }

//     return 0;
// }

// // Function definitions
// float add(float a, float b) {
//     return a + b;
// }

// float subtract(float a, float b) {
//     return a - b;
// }

// float multiply(float a, float b) {
//     return a * b;
// }

// float divide(float a, float b) {
//     return a / b;
// }
// 52. Find area of rectangle, square and circle using UDF.
// #include <stdio.h>
// #define PI 3.14159

// // Function to calculate the area of a rectangle
// float area_of_rectangle(float length, float width) {
//     return length * width;
// }

// // Function to calculate the area of a square
// float area_of_square(float side) {
//     return side * side;
// }

// // Function to calculate the area of a circle
// float area_of_circle(float radius) {
//     return PI * radius * radius;
// }

// int main() {
//     float length, width, side, radius;

//     // Input for rectangle
//     printf("Enter the length and width of the rectangle: ");
//     scanf("%f %f", &length, &width);
//     printf("Area of the rectangle: %.2f\n", area_of_rectangle(length, width));

//     // Input for square
//     printf("Enter the side length of the square: ");
//     scanf("%f", &side);
//     printf("Area of the square: %.2f\n", area_of_square(side));

//     // Input for circle
//     printf("Enter the radius of the circle: ");
//     scanf("%f", &radius);
//     printf("Area of the circle: %.2f\n", area_of_circle(radius));

//     return 0;
// }


// 53. Find Factorial of a number using Recursion.
// #include <stdio.h>

// // Function prototype
// int factorial(int n);

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("Factorial of %d is %d\n", num, factorial(num));

//     return 0;
// }

// // Recursive function to calculate factorial
// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// 54. Swap 2 numbers using Pass by Reference.
// #include <stdio.h>

// // Function prototype
// void swap(int *a, int *b);

// int main() {
//     int num1, num2;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

//     swap(&num1, &num2);

//     printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

//     return 0;
// }

// // Function to swap the values of two numbers
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// Sem 2 Practical

// 1. Write a c program to increase or decrease the existing size of an 1D array.
// #include <stdio.h>
// #include <stdlib.h>

// void printArray(int *array, int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int n, newSize;
//     printf("Enter the initial size of the array: ");
//     scanf("%d", &n);

//     // Allocate memory for the array
//     int *array = (int *)malloc(n * sizeof(int));
//     if (array == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     // Initialize the array
//     for (int i = 0; i < n; i++) {
//         array[i] = i + 1; // Example initialization
//     }

//     printf("Original array: ");
//     printArray(array, n);

//     // Resize the array
//     printf("Enter the new size of the array: ");
//     scanf("%d", &newSize);

//     array = (int *)realloc(array, newSize * sizeof(int));
//     if (array == NULL && newSize > 0) {
//         printf("Memory reallocation failed!\n");
//         return 1;
//     }

//     // Initialize new elements if size is increased
//     if (newSize > n) {
//         for (int i = n; i < newSize; i++) {
//             array[i] = i + 1; // Example initialization
//         }
//     }

//     printf("Resized array: ");
//     printArray(array, newSize);

//     // Free allocated memory
//     free(array);
//     return 0;
// }

// 2. Write a c program on 2D array to Increase & Decrease
// i) No of subarrays
// ii) elements in the subarrays
// #include <stdio.h>
// #include <stdlib.h>

// void print2DArray(int **array, int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", array[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int rows, cols, newRows, newCols;

//     printf("Enter the initial number of subarrays (rows): ");
//     scanf("%d", &rows);
//     printf("Enter the initial number of elements in each subarray (columns): ");
//     scanf("%d", &cols);

//     // Allocate memory for the 2D array
//     int **array = (int **)malloc(rows * sizeof(int *));
//     for (int i = 0; i < rows; i++) {
//         array[i] = (int *)malloc(cols * sizeof(int));
//     }

//     // Initialize the 2D array
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             array[i][j] = (i + 1) * (j + 1); // Example initialization
//         }
//     }

//     printf("Original 2D array:\n");
//     print2DArray(array, rows, cols);

//     // Resize the number of rows
//     printf("Enter the new number of subarrays (rows): ");
//     scanf("%d", &newRows);

//     array = (int **)realloc(array, newRows * sizeof(int *));
//     for (int i = rows; i < newRows; i++) { // Allocate new rows if increasing
//         array[i] = (int *)malloc(cols * sizeof(int));
//         for (int j = 0; j < cols; j++) {
//             array[i][j] = (i + 1) * (j + 1); // Initialize new rows
//         }
//     }

//     // Resize the number of columns in each row
//     printf("Enter the new number of elements in each subarray (columns): ");
//     scanf("%d", &newCols);

//     for (int i = 0; i < newRows; i++) {
//         array[i] = (int *)realloc(array[i], newCols * sizeof(int));
//         for (int j = cols; j < newCols; j++) {
//             array[i][j] = (i + 1) * (j + 1); // Initialize new columns
//         }
//     }

//     printf("Resized 2D array:\n");
//     print2DArray(array, newRows, newCols);

//     // Free allocated memory
//     for (int i = 0; i < newRows; i++) {
//         free(array[i]);
//     }
//     free(array);

//     return 0;
// }
// Write a to display present date and time using c language.
// #include <stdio.h>
// #include <time.h>

// int main() {
//     time_t currentTime;
//     time(&currentTime);

//     printf("Current Date and Time: %s", ctime(&currentTime));
//     return 0;
// }
// Write a c program to demonstrate pre-processor directives
// i) Macros
// ii) Conditional Compilation
// #include <stdio.h>
// #define PI 3.14159 // Macro for PI
// #define AREA_OF_CIRCLE(r) (PI * (r) * (r)) // Macro for area

// #define DEBUG 1 // Enable conditional compilation

// int main() {
//     double radius = 5.0;
//     printf("Area of Circle: %.2f\n", AREA_OF_CIRCLE(radius));

// #ifdef DEBUG
//     printf("Debug mode: Radius = %.2f\n", radius);
// #endif

//     return 0;
// }

//  Write a C program that uses functions to perform the following Operations.
// i) Reading a complex number
// ii) Writing a complex number
// iii) Addition of two complex numbers
// iv) Multiplication of two complex numbers
// #include <stdio.h>

// typedef struct {
//     float real;
//     float imag;
// } Complex;

// Complex readComplex() {
//     Complex c;
//     printf("Enter real and imaginary parts: ");
//     scanf("%f %f", &c.real, &c.imag);
//     return c;
// }

// void printComplex(Complex c) {
//     printf("%.2f + %.2fi\n", c.real, c.imag);
// }

// Complex addComplex(Complex a, Complex b) {
//     Complex result = {a.real + b.real, a.imag + b.imag};
//     return result;
// }

// Complex multiplyComplex(Complex a, Complex b) {
//     Complex result = {a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real};
//     return result;
// }

// int main() {
//     Complex c1 = readComplex();
//     Complex c2 = readComplex();

//     printf("First Complex Number: ");
//     printComplex(c1);

//     printf("Second Complex Number: ");
//     printComplex(c2);

//     printf("Sum: ");
//     printComplex(addComplex(c1, c2));

//     printf("Product: ");
//     printComplex(multiplyComplex(c1, c2));

//     return 0;
// }

// Write a c program to store records of n students based on roll_no, name, gender and 5 subject marks
// i) Calculate percentage each student using 5 subjects.
// ii) Display the student list according to their percentages.
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct {
//     int roll_no;
//     char name[50];
//     char gender;
//     int marks[5];
//     float percentage;
// } Student;

// void calculatePercentage(Student *s) {
//     int total = 0;
//     for (int i = 0; i < 5; i++) {
//         total += s->marks[i];
//     }
//     s->percentage = total / 5.0;
// }

// void sortStudents(Student *students, int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (students[j].percentage < students[j + 1].percentage) {
//                 Student temp = students[j];
//                 students[j] = students[j + 1];
//                 students[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     printf("Enter the number of students: ");
//     scanf("%d", &n);

//     Student *students = (Student *)malloc(n * sizeof(Student));

//     for (int i = 0; i < n; i++) {
//         printf("Enter details for student %d (roll_no, name, gender, 5 marks):\n", i + 1);
//         scanf("%d %s %c", &students[i].roll_no, students[i].name, &students[i].gender);
//         for (int j = 0; j < 5; j++) {
//             scanf("%d", &students[i].marks[j]);
//         }
//         calculatePercentage(&students[i]);
//     }

//     sortStudents(students, n);

//     printf("Sorted Student List (by Percentage):\n");
//     for (int i = 0; i < n; i++) {
//         printf("Roll No: %d, Name: %s, Gender: %c, Percentage: %.2f%%\n",
//                students[i].roll_no, students[i].name, students[i].gender, students[i].percentage);
//     }

//     free(students);
//     return 0;
// }

// Write a C program to store n employee records based on EMP_ID,EMP_NAME,EMP_DEPTID,EMP_PHNO,EMP_SALARY and
// display all the details of employees using EMP_NAME in sorted order.
// #include <stdio.h>
// #include <string.h>

// // Define structure for Employee
// struct Employee {
//     int emp_id;
//     char emp_name[100];
//     int emp_deptid;
//     char emp_phno[15];
//     float emp_salary;
// };

// // Function to sort employees by EMP_NAME
// void sortEmployeesByName(struct Employee employees[], int n) {
//     struct Employee temp;
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (strcmp(employees[i].emp_name, employees[j].emp_name) > 0) {
//                 temp = employees[i];
//                 employees[i] = employees[j];
//                 employees[j] = temp;
//             }
//         }
//     }
// }

// // Function to display employee details
// void displayEmployees(struct Employee employees[], int n) {
//     printf("\n%-10s %-20s %-10s %-15s %-10s\n", "EMP_ID", "EMP_NAME", "DEPT_ID", "PHONE", "SALARY");
//     printf("---------------------------------------------------------------\n");
//     for (int i = 0; i < n; i++) {
//         printf("%-10d %-20s %-10d %-15s %-10.2f\n", employees[i].emp_id, employees[i].emp_name, employees[i].emp_deptid, employees[i].emp_phno, employees[i].emp_salary);
//     }
// }

// int main() {
//     int n;

//     printf("Enter the number of employees: ");
//     scanf("%d", &n);

//     struct Employee employees[n];

//     // Input employee details
//     for (int i = 0; i < n; i++) {
//         printf("\nEnter details for employee %d:\n", i + 1);
//         printf("EMP_ID: ");
//         scanf("%d", &employees[i].emp_id);
//         getchar(); // To consume newline left by scanf
//         printf("EMP_NAME: ");
//         fgets(employees[i].emp_name, sizeof(employees[i].emp_name), stdin);
//         employees[i].emp_name[strcspn(employees[i].emp_name, "\n")] = '\0'; // Remove trailing newline
//         printf("EMP_DEPTID: ");
//         scanf("%d", &employees[i].emp_deptid);
//         getchar();
//         printf("EMP_PHNO: ");
//         fgets(employees[i].emp_phno, sizeof(employees[i].emp_phno), stdin);
//         employees[i].emp_phno[strcspn(employees[i].emp_phno, "\n")] = '\0';
//         printf("EMP_SALARY: ");
//         scanf("%f", &employees[i].emp_salary);
//     }

//     // Sort employees by name
//     sortEmployeesByName(employees, n);

//     // Display sorted employee details
//     printf("\nEmployee details sorted by EMP_NAME:\n");
//     displayEmployees(employees, n);

//     return 0;
// }

// 1. Write a c program to implement selection Sort & Bubble sort
// 2. Write a C program to reverse the elements within a given range in a sorted list. Example :
// input : 10
// 9 1 2 4 3 4 6 7 8 10
// 3 8
// output: 1 2 8 7 6 4 4 3 9 10
// the sorted list of given array elements is 1 2 3 4 4 6 7 8 9 10 , after reversing the elements with in the range 3 and 8 is 1 2 8 7
// 6 4 4 3 9 10
// #include <stdio.h>

// // Function to implement Selection Sort
// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         int min_idx = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min_idx]) {
//                 min_idx = j;
//             }
//         }
//         int temp = arr[min_idx];
//         arr[min_idx] = arr[i];
//         arr[i] = temp;
//     }
// }

// // Function to implement Bubble Sort
// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// // Function to reverse elements within a given range
// void reverseInRange(int arr[], int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }

// // Function to display an array
// void displayArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int choice;

//     printf("Choose an operation:\n");
//     printf("1. Selection Sort\n");
//     printf("2. Bubble Sort\n");
//     printf("3. Reverse elements within a range in a sorted list\n");
//     scanf("%d", &choice);

//     if (choice == 1 || choice == 2) {
//         int n;
//         printf("Enter the number of elements: ");
//         scanf("%d", &n);

//         int arr[n];
//         printf("Enter the elements: ");
//         for (int i = 0; i < n; i++) {
//             scanf("%d", &arr[i]);
//         }

//         if (choice == 1) {
//             selectionSort(arr, n);
//             printf("Array after Selection Sort: ");
//         } else {
//             bubbleSort(arr, n);
//             printf("Array after Bubble Sort: ");
//         }
//         displayArray(arr, n);

//     } else if (choice == 3) {
//         int n;
//         printf("Enter the number of elements: ");
//         scanf("%d", &n);

//         int arr[n];
//         printf("Enter the elements: ");
//         for (int i = 0; i < n; i++) {
//             scanf("%d", &arr[i]);
//         }

//         selectionSort(arr, n);
//         printf("Sorted Array: ");
//         displayArray(arr, n);

//         int rangeStart, rangeEnd;
//         printf("Enter the range (start and end) to reverse elements: ");
//         scanf("%d %d", &rangeStart, &rangeEnd);

//         if (rangeStart >= 1 && rangeEnd <= n && rangeStart < rangeEnd) {
//             reverseInRange(arr, rangeStart - 1, rangeEnd - 1);
//             printf("Array after reversing elements in the range [%d, %d]: ", rangeStart, rangeEnd);
//             displayArray(arr, n);
//         } else {
//             printf("Invalid range!\n");
//         }
//     } else {
//         printf("Invalid choice!\n");
//     }

//     return 0;
// }

// 1. Write a c program to implement Insertion sort & Quick sort 
// 2. Write a c program to sort the given n integers and perform following operations
// i) Find the products of every two odd position elements
// ii) Find the sum of every two even position elements Explanation:
// Input : 9
// 1 9 8 3 5 4 7 2 6
// Output: 3 15 35 63
// 6 10 14
// The sorted list of given input is 1 2 3 4 5 6 7 8 9, the product of alternative odd position elements is 1*3 = 3,3*5=15,5*7=35...
// and the sum of two even position elements 2+4 =6,4+6=10.
// #include <stdio.h>

// // Function to implement Insertion Sort
// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// // Function to implement Quick Sort
// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pivot = arr[high];
//         int i = low - 1;

//         for (int j = low; j < high; j++) {
//             if (arr[j] <= pivot) {
//                 i++;
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//         int temp = arr[i + 1];
//         arr[i + 1] = arr[high];
//         arr[high] = temp;

//         int pi = i + 1;
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// // Function to find the products of every two odd position elements
// void productOddPositions(int arr[], int n) {
//     printf("Products of odd position elements: ");
//     for (int i = 0; i < n; i += 4) {
//         if (i + 2 < n) {
//             printf("%d ", arr[i] * arr[i + 2]);
//         }
//     }
//     printf("\n");
// }

// // Function to find the sum of every two even position elements
// void sumEvenPositions(int arr[], int n) {
//     printf("Sum of even position elements: ");
//     for (int i = 1; i < n; i += 4) {
//         if (i + 2 < n) {
//             printf("%d ", arr[i] + arr[i + 2]);
//         }
//     }
//     printf("\n");
// }

// // Function to display an array
// void displayArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int choice;

//     printf("Choose an operation:\n");
//     printf("1. Insertion Sort\n");
//     printf("2. Quick Sort\n");
//     printf("3. Sort and perform operations on sorted elements\n");
//     scanf("%d", &choice);

//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter the elements: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     if (choice == 1) {
//         insertionSort(arr, n);
//         printf("Array after Insertion Sort: ");
//         displayArray(arr, n);

//     } else if (choice == 2) {
//         quickSort(arr, 0, n - 1);
//         printf("Array after Quick Sort: ");
//         displayArray(arr, n);

//     } else if (choice == 3) {
//         insertionSort(arr, n);
//         printf("Sorted Array: ");
//         displayArray(arr, n);

//         productOddPositions(arr, n);
//         sumEvenPositions(arr, n);

//     } else {
//         printf("Invalid choice!\n");
//     }

//     return 0;
// }

// Write a C Program to implement Merge Sort.

// #include <stdio.h>

// // Function to merge two halves
// void merge(int arr[], int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     int L[n1], R[n2];

//     for (int i = 0; i < n1; i++) {
//         L[i] = arr[left + i];
//     }
//     for (int j = 0; j < n2; j++) {
//         R[j] = arr[mid + 1 + j];
//     }

//     int i = 0, j = 0, k = left;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// // Function to implement Merge Sort
// void mergeSort(int arr[], int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;

//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);

//         merge(arr, left, mid, right);
//     }
// }

// // Function to display an array
// void displayArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter the elements: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     mergeSort(arr, 0, n - 1);
//     printf("Array after Merge Sort: ");
//     displayArray(arr, n);

//     return 0;
// }

// 1. Write a c program to sort in ascending order and reverse the individual row elements of an mxn matrix
// Printed on : 01-01-2024 08:45 PM Page 2 of 4
// Subject Syllabus
// 303105151 - Computational Thinking for
// Structured Design-2

// input : 3 4
// 1 4 2 3
// 7 8 10 9
// 6 3 5 2
// output:
// 4 3 2 1
// 10 9 8 7
// 6 5 3 2
// #include <stdio.h>

// // Function to sort an array in descending order
// void reverseSort(int arr[], int n) {
//     for (int i = 0; i < n / 2; i++) {
//         int temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
// }

// // Function to implement Merge Sort
// void merge(int arr[], int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     int L[n1], R[n2];

//     for (int i = 0; i < n1; i++) {
//         L[i] = arr[left + i];
//     }
//     for (int j = 0; j < n2; j++) {
//         R[j] = arr[mid + 1 + j];
//     }

//     int i = 0, j = 0, k = left;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(int arr[], int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;

//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);

//         merge(arr, left, mid, right);
//     }
// }

// // Function to process and display the matrix
// void processMatrix(int m, int n, int matrix[m][n]) {
//     for (int i = 0; i < m; i++) {
//         mergeSort(matrix[i], 0, n - 1); // Sort each row in ascending order
//         reverseSort(matrix[i], n);      // Reverse the sorted row
//     }

//     printf("Processed Matrix:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int m, n;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &m, &n);

//     int matrix[m][n];
//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     processMatrix(m, n, matrix);

//     return 0;
// }

// 2. Write a c program to sort elements in row wise and print the elements of matrix in Column major order
// Input: 3 4
// 1 4 2 3
// 7 8 10 9
// 6 3 5 2
// Output:
// 1 7 2
// 2 8 3
// 3 9 5
// 4 10 6
// Explanation:
// The sorted matrix according to the conditions is
// 1 2 3 4
// 7 8 9 10
// 2 3 5 6
// after sorting matrix the elements as to be printed in column major order
// 1 7 2
// 2 8 3
// 3 9 5
// 4 10 6
// #include <stdio.h>

// // Function to implement Merge Sort
// void merge(int arr[], int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     int L[n1], R[n2];

//     for (int i = 0; i < n1; i++) {
//         L[i] = arr[left + i];
//     }
//     for (int j = 0; j < n2; j++) {
//         R[j] = arr[mid + 1 + j];
//     }

//     int i = 0, j = 0, k = left;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(int arr[], int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;

//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);

//         merge(arr, left, mid, right);
//     }
// }

// // Function to process and display the matrix
// void processMatrix(int m, int n, int matrix[m][n]) {
//     for (int i = 0; i < m; i++) {
//         mergeSort(matrix[i], 0, n - 1); // Sort each row in ascending order
//     }

//     printf("Processed Matrix in Column Major Order:\n");
//     for (int j = 0; j < n; j++) {
//         for (int i = 0; i < m; i++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int m, n;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &m, &n);

//     int matrix[m][n];
//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     processMatrix(m, n, matrix);

//     return 0;
// }
// 1. Write a c program to perform linear Search.
// #include <stdio.h>

// // Function to perform linear search
// int linearSearch(int arr[], int n, int key) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             return i; // Return index if the key is found
//         }
//     }
//     return -1; // Return -1 if the key is not found
// }

// int main() {
//     int arr[] = {2, 4, 0, 9, 3, 7};  // Sample array
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 9;  // Element to search for
    
//     int result = linearSearch(arr, n, key);
//     if (result != -1) {
//         printf("Element %d found at index %d\n", key, result);
//     } else {
//         printf("Element %d not found in the array\n", key);
//     }
    
//     return 0;
// }
// 2. Write a c program to perform binary search.
// #include <stdio.h>

// // Function to perform binary search
// int binarySearch(int arr[], int n, int key) {
//     int left = 0;
//     int right = n - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         // Check if key is present at mid
//         if (arr[mid] == key) {
//             return mid; // Return index if the key is found
//         }

//         // If key is greater, ignore left half
//         if (arr[mid] < key) {
//             left = mid + 1;
//         }
//         // If key is smaller, ignore right half
//         else {
//             right = mid - 1;
//         }
//     }
//     return -1; // Return -1 if the key is not found
// }

// int main() {
//     int arr[] = {0, 2, 3, 4, 7, 9};  // Sorted array
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 4;  // Element to search for
    
//     int result = binarySearch(arr, n, key);
//     if (result != -1) {
//         printf("Element %d found at index %d\n", key, result);
//     } else {
//         printf("Element %d not found in the array\n", key);
//     }

//     return 0;
// }

// Write a c program to Create a single Linked list and perform Following Operations
// A. Insertion At Beginning
// B. Insertion At End
// C. Insertion After a particular node
// D. Insertion Before a particular node
// E. Insertion at specific position
// F. Search a particular node
// G. Return a particular node
// H. Deletion at the beginning
// I. Deletion at the end
// J. Deletion after a particular node
// K. Deletion before a particular node
// L. Delete a particular node
// M. Deletion at a specific position
// #include <stdio.h>
// #include <stdlib.h>

// // Define structure for linked list node
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to create a new node
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// // A. Insertion at Beginning
// void insertAtBeginning(struct Node** head, int data) {
//     struct Node* newNode = createNode(data);
//     newNode->next = *head;
//     *head = newNode;
// }

// // B. Insertion at End
// void insertAtEnd(struct Node** head, int data) {
//     struct Node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode;
//     } else {
//         struct Node* temp = *head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }

// // C. Insertion After a Particular Node
// void insertAfter(struct Node* prevNode, int data) {
//     if (prevNode == NULL) {
//         printf("The given previous node cannot be NULL.\n");
//         return;
//     }
//     struct Node* newNode = createNode(data);
//     newNode->next = prevNode->next;
//     prevNode->next = newNode;
// }

// // D. Insertion Before a Particular Node
// void insertBefore(struct Node** head, int data, int key) {
//     if (*head == NULL) return;

//     if ((*head)->data == key) {
//         insertAtBeginning(head, data);
//         return;
//     }

//     struct Node* temp = *head;
//     while (temp->next != NULL && temp->next->data != key) {
//         temp = temp->next;
//     }
//     if (temp->next == NULL) {
//         printf("Node with value %d not found.\n", key);
//         return;
//     }
//     struct Node* newNode = createNode(data);
//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// // E. Insertion at Specific Position
// void insertAtPosition(struct Node** head, int data, int position) {
//     if (position == 0) {
//         insertAtBeginning(head, data);
//         return;
//     }

//     struct Node* temp = *head;
//     for (int i = 0; temp != NULL && i < position - 1; i++) {
//         temp = temp->next;
//     }
//     if (temp == NULL) {
//         printf("The position is out of range.\n");
//         return;
//     }

//     struct Node* newNode = createNode(data);
//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// // F. Search a Particular Node
// int searchNode(struct Node* head, int key) {
//     struct Node* temp = head;
//     int position = 0;
//     while (temp != NULL) {
//         if (temp->data == key) {
//             return position;
//         }
//         position++;
//         temp = temp->next;
//     }
//     return -1;  // Return -1 if key not found
// }

// // G. Return a Particular Node
// struct Node* returnNode(struct Node* head, int position) {
//     struct Node* temp = head;
//     for (int i = 0; temp != NULL && i < position; i++) {
//         temp = temp->next;
//     }
//     return temp;
// }

// // H. Deletion at the Beginning
// void deleteAtBeginning(struct Node** head) {
//     if (*head == NULL) {
//         printf("The list is empty.\n");
//         return;
//     }
//     struct Node* temp = *head;
//     *head = (*head)->next;
//     free(temp);
// }

// // I. Deletion at the End
// void deleteAtEnd(struct Node** head) {
//     if (*head == NULL) {
//         printf("The list is empty.\n");
//         return;
//     }
//     struct Node* temp = *head;
//     if (temp->next == NULL) {
//         free(temp);
//         *head = NULL;
//         return;
//     }
//     while (temp->next != NULL && temp->next->next != NULL) {
//         temp = temp->next;
//     }
//     free(temp->next);
//     temp->next = NULL;
// }

// // J. Deletion After a Particular Node
// void deleteAfter(struct Node* prevNode) {
//     if (prevNode == NULL || prevNode->next == NULL) {
//         printf("The given node is invalid.\n");
//         return;
//     }
//     struct Node* temp = prevNode->next;
//     prevNode->next = temp->next;
//     free(temp);
// }

// // K. Deletion Before a Particular Node
// void deleteBefore(struct Node** head, int key) {
//     if (*head == NULL || (*head)->data == key) {
//         printf("No node before the given node.\n");
//         return;
//     }
//     struct Node* temp = *head;
//     if (temp->next && temp->next->data == key) {
//         deleteAtBeginning(head);
//         return;
//     }
//     while (temp->next != NULL && temp->next->next != NULL && temp->next->next->data != key) {
//         temp = temp->next;
//     }
//     if (temp->next == NULL || temp->next->next == NULL) {
//         printf("Node with value %d not found.\n", key);
//         return;
//     }
//     struct Node* toDelete = temp->next;
//     temp->next = temp->next->next;
//     free(toDelete);
// }

// // L. Delete a Particular Node
// void deleteNode(struct Node** head, int key) {
//     if (*head == NULL) {
//         printf("The list is empty.\n");
//         return;
//     }
//     if ((*head)->data == key) {
//         deleteAtBeginning(head);
//         return;
//     }
//     struct Node* temp = *head;
//     while (temp->next != NULL && temp->next->data != key) {
//         temp = temp->next;
//     }
//     if (temp->next == NULL) {
//         printf("Node with value %d not found.\n", key);
//         return;
//     }
//     struct Node* toDelete = temp->next;
//     temp->next = temp->next->next;
//     free(toDelete);
// }

// // M. Deletion at Specific Position
// void deleteAtPosition(struct Node** head, int position) {
//     if (*head == NULL) {
//         printf("The list is empty.\n");
//         return;
//     }
//     if (position == 0) {
//         deleteAtBeginning(head);
//         return;
//     }

//     struct Node* temp = *head;
//     for (int i = 0; temp != NULL && i < position - 1; i++) {
//         temp = temp->next;
//     }
//     if (temp == NULL || temp->next == NULL) {
//         printf("The position is out of range.\n");
//         return;
//     }
//     struct Node* toDelete = temp->next;
//     temp->next = temp->next->next;
//     free(toDelete);
// }

// // Function to print the list
// void printList(struct Node* head) {
//     if (head == NULL) {
//         printf("The list is empty.\n");
//         return;
//     }
//     struct Node* temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     struct Node* head = NULL;

//     // Perform operations
//     insertAtBeginning(&head, 10);
//     insertAtEnd(&head, 20);
//     insertAtEnd(&head, 30);
//     insertAfter(head, 15);
//     insertBefore(&head, 5, 10);
//     insertAtPosition(&head, 25, 2);

//     printf("Linked List: ");
//     printList(head);

//     printf("Search for node with value 20: %d\n", searchNode(head, 20));
//     printf("Node at position 2: %d\n", returnNode(head, 2)->data);

//     deleteAtBeginning(&head);
//     deleteAtEnd(&head);
//     deleteAfter(head);
//     deleteBefore(&head, 20);
//     deleteNode(&head, 15);
//     deleteAtPosition(&head, 1);

//     printf("Linked List after deletions: ");
//     printList(head);

//     return 0;
// }

// 1. Write a program to Reverse a singly Linked list.
// #include <stdio.h>
// #include <stdlib.h>

// // Define structure for linked list node
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to create a new node
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to reverse the linked list
// void reverseList(struct Node** head) {
//     struct Node* prev = NULL;
//     struct Node* current = *head;
//     struct Node* next = NULL;

//     while (current != NULL) {
//         next = current->next;  // Save the next node
//         current->next = prev;  // Reverse the current node's pointer
//         prev = current;        // Move prev and current one step forward
//         current = next;
//     }
//     *head = prev;  // Update head to the new first node
// }

// // Function to print the linked list
// void printList(struct Node* head) {
//     struct Node* temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     struct Node* head = NULL;

//     // Creating a sample linked list
//     struct Node* first = createNode(10);
//     struct Node* second = createNode(20);
//     struct Node* third = createNode(30);
//     struct Node* fourth = createNode(40);

//     head = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;

//     printf("Original Linked List: ");
//     printList(head);

//     // Reversing the linked list
//     reverseList(&head);

//     printf("Reversed Linked List: ");
//     printList(head);

//     return 0;
// }

// 2. Write a c program to check whether the created linked list is palindrome or not.
// #include <stdio.h>
// #include <stdlib.h>

// // Define structure for linked list node
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to create a new node
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to reverse the linked list
// struct Node* reverseList(struct Node* head) {
//     struct Node* prev = NULL;
//     struct Node* current = head;
//     struct Node* next = NULL;

//     while (current != NULL) {
//         next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }
//     return prev;
// }

// // Function to check if the linked list is palindrome
// int isPalindrome(struct Node* head) {
//     if (head == NULL || head->next == NULL) {
//         return 1; // Single element or empty list is a palindrome
//     }

//     // Step 1: Find the middle of the list
//     struct Node* slow = head;
//     struct Node* fast = head;
//     while (fast != NULL && fast->next != NULL) {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     // Step 2: Reverse the second half of the list
//     struct Node* secondHalf = reverseList(slow);

//     // Step 3: Compare the first half and the reversed second half
//     struct Node* firstHalf = head;
//     while (secondHalf != NULL) {
//         if (firstHalf->data != secondHalf->data) {
//             return 0; // Not a palindrome
//         }
//         firstHalf = firstHalf->next;
//         secondHalf = secondHalf->next;
//     }
//     return 1; // It is a palindrome
// }

// // Function to print the linked list
// void printList(struct Node* head) {
//     struct Node* temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     struct Node* head = NULL;

//     // Creating a sample linked list
//     struct Node* first = createNode(1);
//     struct Node* second = createNode(2);
//     struct Node* third = createNode(2);
//     struct Node* fourth = createNode(1);

//     head = first;
//     first->next = second;
//     second->next = third;
//     third->next = fourth;

//     printf("Linked List: ");
//     printList(head);

//     // Checking if the linked list is palindrome
//     if (isPalindrome(head)) {
//         printf("The linked list is a palindrome.\n");
//     } else {
//         printf("The linked list is not a palindrome.\n");
//     }

//     return 0;
// }

// Write a c program to Create a Circular Linked list and perform Following Operations
// A. Insertion At Beginning
// B. Insertion At End
// C. Insertion After a particular node
// Printed on : 01-01-2024 08:45 PM Page 3 of 4
// Subject Syllabus
// 303105151 - Computational Thinking for
// Structured Design-2

// D. Insertion Before a particular node
// E. Insertion at specific position
// F. Search a particular node
// G. Return a particular node
// H. Deletion at the beginning
// I. Deletion at the end
// J. Deletion after a particular node
// K. Deletion before a particular node
// L. Delete a particular node
// M. Deletion at a specific position
// #include <stdio.h>
// #include <stdlib.h>

// // Define structure for linked list node
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to create a new node
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = newNode;  // Point to itself to form a circular link
//     return newNode;
// }

// // A. Insertion at Beginning
// void insertAtBeginning(struct Node** head, int data) {
//     struct Node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode;
//     } else {
//         struct Node* temp = *head;
//         while (temp->next != *head) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = *head;
//         *head = newNode;
//     }
// }

// // B. Insertion at End
// void insertAtEnd(struct Node** head, int data) {
//     struct Node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode;
//     } else {
//         struct Node* temp = *head;
//         while (temp->next != *head) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//         newNode->next = *head;
//     }
// }

// // C. Insertion After a Particular Node
// void insertAfter(struct Node* head, int key, int data) {
//     struct Node* temp = head;
//     do {
//         if (temp->data == key) {
//             struct Node* newNode = createNode(data);
//             newNode->next = temp->next;
//             temp->next = newNode;
//             return;
//         }
//         temp = temp->next;
//     } while (temp != head);
//     printf("Node with value %d not found.\n", key);
// }

// // D. Insertion Before a Particular Node
// void insertBefore(struct Node** head, int key, int data) {
//     if (*head == NULL) return;
//     if ((*head)->data == key) {
//         insertAtBeginning(head, data);
//         return;
//     }
//     struct Node* temp = *head;
//     while (temp->next != *head && temp->next->data != key) {
//         temp = temp->next;
//     }
//     if (temp->next == *head) {
//         printf("Node with value %d not found.\n", key);
//         return;
//     }
//     struct Node* newNode = createNode(data);
//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// // E. Insertion at Specific Position
// void insertAtPosition(struct Node** head, int data, int position) {
//     if (position == 0) {
//         insertAtBeginning(head, data);
//         return;
//     }
//     struct Node* temp = *head;
//     for (int i = 0; temp != NULL && i < position - 1; i++) {
//         temp = temp->next;
//         if (temp == *head) {
//             printf("The position is out of range.\n");
//             return;
//         }
//     }
//     struct Node* newNode = createNode(data);
//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// // F. Search a Particular Node
// int searchNode(struct Node* head, int key) {
//     struct Node* temp = head;
//     int position = 0;
//     do {
//         if (temp->data == key) {
//             return position;
//         }
//         position++;
//         temp = temp->next;
//     } while (temp != head);
//     return -1;
// }

// // G. Return a Particular Node
// struct Node* returnNode(struct Node* head, int position) {
//     struct Node* temp = head;
//     for (int i = 0; temp != NULL && i < position; i++) {
//         temp = temp->next;
//         if (temp == head) return NULL; // If position exceeds list length
//     }
//     return temp;
// }

// // H. Deletion at the Beginning
// void deleteAtBeginning(struct Node** head) {
//     if (*head == NULL) {
//         printf("The list is empty.\n");
//         return;
//     }
//     struct Node* temp = *head;
//     if (temp->next == *head) {
//         free(temp);
//         *head = NULL;
//     } else {
//         struct Node* last = *head;
//         while (last->next != *head) {
//             last = last->next;
//         }
//         *head = (*head)->next;
//         last->next = *head;
//         free(temp);
//     }
// }

// // I. Deletion at the End
// void deleteAtEnd(struct Node** head) {
//     if (*head == NULL) {
//         printf("The list is empty.\n");
//         return;
//     }
//     struct Node* temp = *head;
//     if (temp->next == *head) {
//         free(temp);
//         *head = NULL;
//     } else {
//         struct Node* last = *head;
//         while (last->next != *head) {
//             last = last->next;
//         }
//         struct Node* secondLast = *head;
//         while (secondLast->next != last) {
//             secondLast = secondLast->next;
//         }
//         secondLast->next = *head;
//         free(last);
//     }
// }

// // J. Deletion After a Particular Node
// void deleteAfter(struct Node* head, int key) {
//     struct Node* temp = head;
//     do {
//         if (temp->data == key && temp->next != head) {
//             struct Node* toDelete = temp->next;
//             temp->next = toDelete->next;
//             free(toDelete);
//             return;
//         }
//         temp = temp->next;
//     } while (temp != head);
//     printf("Node with value %d not found or no node after it.\n", key);
// }

// // K. Deletion Before a Particular Node
// void deleteBefore(struct Node** head, int key) {
//     if (*head == NULL || (*head)->data == key) {
//         printf("No node before the given node.\n");
//         return;
//     }
//     struct Node* temp = *head;
//     while (temp->next != *head && temp->next->data != key) {
//         temp = temp->next;
//     }
//     if (temp->next == *head) {
//         printf("Node with value %d not found.\n", key);
//         return;
//     }
//     struct Node* toDelete = temp;
//     if (temp == *head) {
//         *head = temp->next;
//     }
//     temp = temp->next;
//     toDelete->next = temp->next;
//     free(toDelete);
// }

// // L. Delete a Particular Node
// void deleteNode(struct Node** head, int key) {
//     if (*head == NULL) {
//         printf("The list is empty.\n");
//         return;
//     }
//     struct Node* temp = *head;
//     if ((*head)->data == key) {
//         deleteAtBeginning(head);
//         return;
//     }
//     while (temp->next != *head && temp->next->data != key) {
//         temp = temp->next;
//     }
//     if (temp->next == *head) {
//         printf("Node with value %d not found.\n", key);
//         return;
//     }
//     struct Node* toDelete = temp->next;
//     temp->next = temp->next->next;
//     free(toDelete);
// }

// // M. Deletion at a Specific Position
// void deleteAtPosition(struct Node** head, int position) {
//     if (*head == NULL) {
//         printf("The list is empty.\n");
//         return;
//     }
//     if (position == 0) {
//         deleteAtBeginning(head);
//         return;
//     }
//     struct Node* temp = *head;
//     for (int i = 0; temp != NULL && i < position - 1; i++) {
//         temp = temp->next;
//         if (temp == *head) {
//             printf("The position is out of range.\n");
//             return;
//         }
//     }
//     if (temp == NULL || temp->next == *head) {
//         printf("The position is out of range.\n");
//         return;
//     }
//     struct Node* toDelete = temp->next;
//     temp->next = temp->next->next;
//     free(toDelete);
// }

// // Function to print the circular linked list
// void printList(struct Node* head) {
//     if (head == NULL) {
//         printf("The list is empty.\n");
//         return;
//     }
//     struct Node* temp = head;
//     do {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     } while (temp != head);
//     printf("(back to head)\n");
// }

// int main() {
//     struct Node* head = NULL;

//     // Performing operations
//     insertAtBeginning(&head, 10);
//     insertAtEnd(&head, 20);
//     insertAtEnd(&head, 30);
//     insertAfter(head, 20, 25);
//     insertBefore(&head, 20, 15);
//     insertAtPosition(&head, 35, 4);

//     printf("Circular Linked List: ");
//     printList(head);

//     printf("Search for node with value 25: %d\n", searchNode(head, 25));
//     printf("Node at position 2: %d\n", returnNode(head, 2)->data);

//     deleteAtBeginning(&head);
//     deleteAtEnd(&head);
//     deleteAfter(head, 15);
//     deleteBefore(&head, 25);
//     deleteNode(&head, 30);
//     deleteAtPosition(&head, 1);

//     printf("Circular Linked List after deletions: ");
//     printList(head);

//     return 0;
// }
// Write a c program to Create a Circular single Linked list and perform Following Operations
// A. Insertion After a particular node
// B. Insertion Before a particular node
// C. Search a particular node
// D. Return a particular node
// E. Deletion before a particular node
// F. Delete a particular node
// #include <stdio.h>
// #include <stdlib.h>

// // Define structure for linked list node
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to create a new node
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = newNode;  // Point to itself to form a circular link
//     return newNode;
// }

// // A. Insertion After a Particular Node
// void insertAfter(struct Node* head, int key, int data) {
//     struct Node* temp = head;
//     do {
//         if (temp->data == key) {
//             struct Node* newNode = createNode(data);
//             newNode->next = temp->next;
//             temp->next = newNode;
//             return;
//         }
//         temp = temp->next;
//     } while (temp != head);
//     printf("Node with value %d not found.\n", key);
// }

// // B. Insertion Before a Particular Node
// void insertBefore(struct Node** head, int key, int data) {
//     if (*head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     if ((*head)->data == key) {
//         struct Node* newNode = createNode(data);
//         newNode->next = *head;
//         *head = newNode;
//         return;
//     }
//     struct Node* temp = *head;
//     while (temp->next != *head && temp->next->data != key) {
//         temp = temp->next;
//     }
//     if (temp->next == *head) {
//         printf("Node with value %d not found.\n", key);
//         return;
//     }
//     struct Node* newNode = createNode(data);
//     newNode->next = temp->next;
//     temp->next = newNode;
// }

// // C. Search a Particular Node
// int searchNode(struct Node* head, int key) {
//     struct Node* temp = head;
//     int position = 0;
//     do {
//         if (temp->data == key) {
//             return position;
//         }
//         position++;
//         temp = temp->next;
//     } while (temp != head);
//     return -1;  // Node not found
// }

// // D. Return a Particular Node
// struct Node* returnNode(struct Node* head, int position) {
//     struct Node* temp = head;
//     for (int i = 0; temp != NULL && i < position; i++) {
//         temp = temp->next;
//         if (temp == head) return NULL; // If position exceeds list length
//     }
//     return temp;
// }

// // E. Deletion Before a Particular Node
// void deleteBefore(struct Node** head, int key) {
//     if (*head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     if ((*head)->data == key) {
//         printf("No node before the given node.\n");
//         return;
//     }
//     struct Node* temp = *head;
//     while (temp->next != *head && temp->next->data != key) {
//         temp = temp->next;
//     }
//     if (temp->next == *head) {
//         printf("Node with value %d not found.\n", key);
//         return;
//     }
//     struct Node* toDelete = temp;
//     if (temp == *head) {
//         *head = temp->next;
//     }
//     temp = temp->next;
//     toDelete->next = temp->next;
//     free(toDelete);
// }

// // F. Delete a Particular Node
// void deleteNode(struct Node** head, int key) {
//     if (*head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     struct Node* temp = *head;
//     if ((*head)->data == key) {
//         if ((*head)->next == *head) {
//             free(*head);
//             *head = NULL;
//             return;
//         }
//         struct Node* last = *head;
//         while (last->next != *head) {
//             last = last->next;
//         }
//         *head = (*head)->next;
//         last->next = *head;
//         free(temp);
//         return;
//     }
//     while (temp->next != *head && temp->next->data != key) {
//         temp = temp->next;
//     }
//     if (temp->next == *head) {
//         printf("Node with value %d not found.\n", key);
//         return;
//     }
//     struct Node* toDelete = temp->next;
//     temp->next = temp->next->next;
//     free(toDelete);
// }

// // Function to print the circular linked list
// void printList(struct Node* head) {
//     if (head == NULL) {
//         printf("The list is empty.\n");
//         return;
//     }
//     struct Node* temp = head;
//     do {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     } while (temp != head);
//     printf("(back to head)\n");
// }

// int main() {
//     struct Node* head = NULL;

//     // Insertion operations
//     insertBefore(&head, 10, 5);   // Inserting before a non-existent node
//     insertAfter(head, 10, 20);     // Inserting after a non-existent node

//     // Creating a list
//     head = createNode(10);
//     insertAfter(head, 10, 20);
//     insertAfter(head, 20, 30);
//     insertBefore(&head, 20, 15);
//     insertBefore(&head, 10, 5);

//     printf("Circular Linked List: ");
//     printList(head);

//     // Search operation
//     int pos = searchNode(head, 20);
//     if (pos != -1) {
//         printf("Node 20 found at position: %d\n", pos);
//     } else {
//         printf("Node 20 not found.\n");
//     }

//     // Return a particular node
//     struct Node* node = returnNode(head, 2);
//     if (node != NULL) {
//         printf("Node at position 2: %d\n", node->data);
//     } else {
//         printf("No node found at position 2.\n");
//     }

//     // Deletion operations
//     deleteBefore(&head, 20);    // Delete before node 20
//     deleteNode(&head, 30);      // Delete node with value 30
//     deleteNode(&head, 10);      // Delete node with value 10

//     printf("Circular Linked List after deletions: ");
//     printList(head);

//     return 0;
// }

// Write a c program to Create a Circular DoubleLinked list and perform Following Operations
// A. Insertion After a particular node
// B. Insertion Before a particular node
// C. Search a particular node
// D. Return a particular node
// E. Deletion before a particular node
// F. Delete a particular node
// #include <stdio.h>
// #include <stdlib.h>

// // Define structure for doubly linked list node
// struct Node {
//     int data;
//     struct Node* next;
//     struct Node* prev;
// };

// // Function to create a new node
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = newNode;
//     newNode->prev = newNode;  // Point to itself to form a circular link
//     return newNode;
// }

// // A. Insertion After a Particular Node
// void insertAfter(struct Node* head, int key, int data) {
//     struct Node* temp = head;
//     do {
//         if (temp->data == key) {
//             struct Node* newNode = createNode(data);
//             newNode->next = temp->next;
//             newNode->prev = temp;
//             temp->next->prev = newNode;
//             temp->next = newNode;
//             return;
//         }
//         temp = temp->next;
//     } while (temp != head);
//     printf("Node with value %d not found.\n", key);
// }

// // B. Insertion Before a Particular Node
// void insertBefore(struct Node** head, int key, int data) {
//     if (*head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     struct Node* temp = *head;
//     do {
//         if (temp->data == key) {
//             struct Node* newNode = createNode(data);
//             newNode->prev = temp->prev;
//             newNode->next = temp;
//             temp->prev->next = newNode;
//             temp->prev = newNode;
//             if (temp == *head) {
//                 *head = newNode;
//             }
//             return;
//         }
//         temp = temp->next;
//     } while (temp != *head);
//     printf("Node with value %d not found.\n", key);
// }

// // C. Search a Particular Node
// int searchNode(struct Node* head, int key) {
//     struct Node* temp = head;
//     int position = 0;
//     do {
//         if (temp->data == key) {
//             return position;
//         }
//         position++;
//         temp = temp->next;
//     } while (temp != head);
//     return -1;  // Node not found
// }

// // D. Return a Particular Node
// struct Node* returnNode(struct Node* head, int position) {
//     struct Node* temp = head;
//     for (int i = 0; temp != NULL && i < position; i++) {
//         temp = temp->next;
//         if (temp == head) return NULL; // If position exceeds list length
//     }
//     return temp;
// }

// // E. Deletion Before a Particular Node
// void deleteBefore(struct Node** head, int key) {
//     if (*head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     struct Node* temp = *head;
//     do {
//         if (temp->next->data == key) {
//             if (temp == *head) {
//                 printf("No node before the given node.\n");
//                 return;
//             }
//             struct Node* toDelete = temp;
//             temp->prev->next = temp->next;
//             temp->next->prev = temp->prev;
//             if (*head == toDelete) {
//                 *head = temp->next;
//             }
//             free(toDelete);
//             return;
//         }
//         temp = temp->next;
//     } while (temp != *head);
//     printf("Node with value %d not found.\n", key);
// }

// // F. Delete a Particular Node
// void deleteNode(struct Node** head, int key) {
//     if (*head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     struct Node* temp = *head;
//     if ((*head)->data == key) {
//         if ((*head)->next == *head) {
//             free(*head);
//             *head = NULL;
//             return;
//         }
//         struct Node* last = (*head)->prev;
//         *head = (*head)->next;
//         (*head)->prev = last;
//         last->next = *head;
//         free(temp);
//         return;
//     }
//     do {
//         if (temp->data == key) {
//             temp->prev->next = temp->next;
//             temp->next->prev = temp->prev;
//             free(temp);
//             return;
//         }
//         temp = temp->next;
//     } while (temp != *head);
//     printf("Node with value %d not found.\n", key);
// }

// // Function to print the circular doubly linked list
// void printList(struct Node* head) {
//     if (head == NULL) {
//         printf("The list is empty.\n");
//         return;
//     }
//     struct Node* temp = head;
//     do {
//         printf("%d <-> ", temp->data);
//         temp = temp->next;
//     } while (temp != head);
//     printf("(back to head)\n");
// }

// int main() {
//     struct Node* head = NULL;

//     // Create the list and insert elements
//     head = createNode(10);
//     insertAfter(head, 10, 20);
//     insertAfter(head, 20, 30);
//     insertBefore(&head, 10, 5);
//     insertBefore(&head, 20, 15);

//     printf("Circular Doubly Linked List: ");
//     printList(head);

//     // Search operation
//     int pos = searchNode(head, 20);
//     if (pos != -1) {
//         printf("Node 20 found at position: %d\n", pos);
//     } else {
//         printf("Node 20 not found.\n");
//     }

//     // Return a particular node
//     struct Node* node = returnNode(head, 2);
//     if (node != NULL) {
//         printf("Node at position 2: %d\n", node->data);
//     } else {
//         printf("No node found at position 2.\n");
//     }

//     // Deletion operations
//     deleteBefore(&head, 20);    // Delete node before node 20
//     deleteNode(&head, 30);      // Delete node with value 30
//     deleteNode(&head, 10);      // Delete node with value 10

//     printf("Circular Doubly Linked List after deletions: ");
//     printList(head);

//     return 0;
// }


