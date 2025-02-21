#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(){
    cout << "termcalc by kodenith" << endl;
    cout << "basic calculator on your terminal (or whatever you run this on)" << endl;
    
    sleep(3);

    double a, b;
    cout << endl << "Pick an operation" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Power" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Area of a Circle" << endl;
    cout << "8. Circumference of a Circle" << endl;
    cout << "9. Area of a Triangle" << endl;
    cout << "10. Logarythm" << endl;
    
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the first number: ";
    cin >> a;
    const int pi = 3.14159;

    switch (choice){
        case 1:
            cout << "Enter the second number: ";
            cin >> b;
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case 2:
            cout << "Enter the second number: ";
             cin >> b;
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case 3:
            cout << "Enter the second number: ";
            cin >> b;
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case 4:
            cout << "Enter the second number: ";
             cin >> b;
            cout << a << " / " << b << " = " << a / b << endl;
            break;
        case 5:
            cout << "Enter the second number: ";
            cin >> b;
            cout << a << " ^ " << b << " = " << pow(a, b) << endl;
            break;
        case 6:
            cout << "Square root of " << a << " = " << sqrt(a) << endl;
            break;
        case 7:
            cout << "Area of a circle with radius " << a << " = " << pi * a * a << endl;
            break;
        case 8:
            cout << "Circumference of a circle with radius " << a << " = " << 2 * pi * a << endl;
            break;
        case 9:
            cout << "Enter the second number: ";
            cin >> b;
            cout << "Area of a triangle with base " << a << " and height " << b << " = " << 0.5 * a * b << endl;
            break;
        case 10:
            cout << "Enter the second number: ";
             cin >> b;
             cout << "Log base " << b << " of " << a << " = " << log(a) / log(b) << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

}