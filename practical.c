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


