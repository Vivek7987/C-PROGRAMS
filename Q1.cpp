#include <iostream>
#include <stdlib.h>
using namespace std;
void ArmstrongNumber()
{
    int z, sum = 0, temp = 0;
    cout << "enter a number " << endl;
    cin >> z;
    temp = z;
    while (z > 0)
    {
        int y = z % 10;
        sum = sum + (y * y * y);
        z = z / 10;
    }
    if (temp == sum)
    {
        cout << "It is a armstrong Number" << endl;
    }
    else
    {
        cout << "It is  Not a armstrong Number" << endl;
    }
}

void PalindromeNumber()
{
    int n, r, sum = 0, temp;
    cout << "Enter the number " << endl;
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    if (temp == sum)
    {
        cout << "It is a pelindrom Number" << endl;
    }
    else
    {
        cout << "it is not a pelindrom Number" << endl;
    }
}

void LeapYear()
{
    int year;
    cout << "Enter a year: " << endl;
    cin >> year;
    if (year % 400 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else if (year % 100 == 0)
    {
        cout << year << " is not a leap year." << endl;
    }
    else if (year % 4 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }
}
void FibonacciSeries()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "Your Fibonacci Series is: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while (nextTerm <= n)
    {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}
void Swaping()
{
    int a, b;
    cout << "Enter two Number " << endl;
    cin >> a >> b;
    cout << "Before swap a= " << a << " b= " << b << endl;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "After swap a= " << a << " b= " << b << endl;
}

int main()
{
    while (1)
    {
        int n;
        cout << "You have give some topic please select one:" << endl;
        cout << "1. Program for Armstrong Number\n2. Program for Palindrome Number\n3. Program for Leap year\n4. Program for Fibonacci series up to given term\n5. Swapping without using third variable\n6. Exit";
        cin >> n;
        switch (n)
        {
        case 1:
            ArmstrongNumber();
            break;
        case 2:
            PalindromeNumber();
            break;
        case 3:
            LeapYear();
            break;
        case 4:
            FibonacciSeries();
            break;
        case 5:
            Swaping();
            break;

            exit(0);
            break;
        }
    }
    return 0;
}