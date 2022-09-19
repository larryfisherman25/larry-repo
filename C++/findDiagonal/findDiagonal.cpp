// C++ Program to Find Diagonal of a Rectangle

#include <bits/stdc++.h>

using namespace std;

//  Function to find the length of the 
// diagonal of a rectangle of given sides
double findDiagonal(double a, double b)
{
    return sqrt(a * a + b * b);
}

// Driver Code
int main()
{
    double a, b;
    cout << "Enter the sides of the rectangle, first a: ";
    cin >> a;
    cout << "Second b: ";
    cin >> b;
    
    cout << "The Diagonal is " << findDiagonal(a, b);
    cout << "\n";

    return 0;
}
