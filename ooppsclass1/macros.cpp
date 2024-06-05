#include<iostream>
using namespace std;

#define PI 3.14155963    // Macro definition

#define MAXX(a,b) ((a > b) ? a : b) // Corrected macro definition

float circleArea(float r) {
    return PI * r * r; // Use PI macro
}

void fun(int a, int b) {
    int c = MAXX(a, b); // Use parameters a and b directly
    cout << "Max: " << c << endl; // Print the result for demonstration
}

int main() {
    cout << "Circle area: " << circleArea(234.3) << endl;
    
    fun(7, 3); // Call the function to demonstrate MAXX macro

    return 0;
}
