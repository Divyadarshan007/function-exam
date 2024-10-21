#include <iostream>
using namespace std;

float add(float, float);
float sub(float, float);
float mul(float, float);
float divi(float, float);
int mod(int, int);

int main()
{
    float a, b;
    int choice;

    do
    {

        cout << "\nEnter the First Number : ";
        cin >> a;
        cout << "Enter the Second Number : ";
        cin >> b;
        cout << endl;
        cout << "Press 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division\nPress 5 for Modulo\nPress 0 to Exit\nEnter your choice : ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            // Addititon
            add(a, b);
            break;
        case 2:
            // Subtraction
            sub(a, b);

            break;
        case 3:
            // Multiplication
            mul(a, b);

            break;
        case 4:
            // Division
            divi(a, b);
            break;
        case 5:
            // Modulo
            mod(a, b);
            break;
        case 0:
            // Exit
            cout << "Thank You ! \n";
            return 0;
            break;
        default:
            cout << "Enter valid choice ! \n";
            break;
        }

    } while (choice != 0);

    return 0;
}

float add(float a, float b)
{
    cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
    cout << endl;
}
float sub(float a, float b)
{
    cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
    cout << endl;
}
float mul(float a, float b)
{
    cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;
    cout << endl;
}
float divi(float a, float b)
{
    cout << "Division of " << a << " and " << b << " is " << a / b << endl;
    cout << endl;
}
int mod(int a, int b)
{
    cout << "Modulo of " << a << " and " << b << " is " << a % b << endl;
    cout << endl;
}
