#include <bits/stdc++.h> // Includes most of the standard libraries for convenience
using namespace std;     // Allows using standard library names without prefixing them with 'std::'

// Function that creates a dynamic array based on user input and returns a pointer to it
int* fun() {
    int n; // Declare an integer to store the size of the array
    cin >> n; // Read the size of the array from user input
    int* a = new int[n]; // Dynamically allocate an array of size 'n' on the heap

    // Loop to read 'n' integers from user input and store them in the array
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Read each element and store it in the array
    }
    return a; // Return the pointer to the dynamically allocated array
}

int main() {
    int* a = fun(); // Call the 'fun' function and store the returned pointer to the array

    // Declare an integer to store the size of the array
    int n;
    cout << "Enter the size of the array: "; // Prompt the user for the size of the array
    cin >> n; // Read the size of the array from user input

    // Loop to print each element of the array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; // Print each element of the array followed by a space
    }
    cout << endl; // Print a newline character after printing all elements

    delete[] a; // Free the dynamically allocated memory to prevent memory leaks

    return 0; // Return 0 to indicate successful execution
}
