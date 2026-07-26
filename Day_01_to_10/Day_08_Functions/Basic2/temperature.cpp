#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
float toCelsius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main() {
    // Set a fahrenheit value
    float f_value;
    cout << "Enter Fahrenheit: ";
    cin >> f_value;

    // Call the function
    float result = toCelsius(f_value);

    // Print the fahrenheit value
    cout << "Fahrenheit: " << f_value <<endl;

    // Print the result
    cout << "Convert Fahrenheit to Celsius: " << result <<endl;

    return 0;
}