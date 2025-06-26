#include <iostream> // required for input/output operations like 'std::cout' and 'std::cin'

/*
 * Course: ECNG 1009
 * Assignment: Shape Area Calculator
 * Date: June 26, 2025
 * Author: megan2807
 *
 * This program demonstrates the use of a function to calculate the sum of
 * all positive integers from 1 up to a given number 'n'.
 * The 'sumToN' function performs this calculation, and the 'main' function
 * calls it with a specific value and prints the result.
 *
 * IMPORTANT: This code is my original work for academic purposes.
 * It is licensed under the MIT License (see LICENSE file in the repository).
 * Unauthorized use or submission as one's own work without proper attribution
 * for academic credit is a violation of academic integrity policies.
 *
 * Full source code and licensing details available at:
 * https://github.com/megan2807/SumOfNInteger
 */

 /*
  * Calculates the sum of all positive integers from 1 up to a given number 'n'.
  *
  * This function uses a for loop to iterate from 1 to 'n' (inclusive),
  * accumulating the sum of each integer.
  *
  * n The upper limit (inclusive) for the sum calculation.
  * Must be a positive integer.
  * return The total sum of integers from 1 to 'n'.
  */

int sumToN(int n) {

	// Initialize 'sum' to 0. This variable will store the accumulating total.
	int sum = 0;

	// Loop from 1 up to 'n' (inclusive).
	// In each iteration, 'i' represents the current number being added.
	for (int i = 1; i <= n; i++) {

		sum = sum + i; // Add the current value of 'i' to the 'sum'.

	}
	return sum; // Return the final calculated sum to main.

}

int main() {

	// Declare an integer variable to hold the sum returned by sumToN().
	int sum;

	// Call the sumToN function with '4' as the input.
	// This will calculate 1 + 2 + 3 + 4, which equals 10.
	// The returned value (10) will be stored in the 'sum' variable.
	sum = sumToN(4);

	std::cout << sum; // Print the calculated sum to the console.

	return 0; // Indicate that the program executed successfully.
}