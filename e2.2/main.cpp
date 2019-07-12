/*
 • E2.2 Write a program that computes and displays the circumference of a letter-size (8.5 × 11 inches) sheet of paper and the length of its diagonal.
 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float sheet_length = 11; // in inches
    const float sheet_width = 8.5; // in inches
    const float sheet_diagonal = sqrtf(pow(sheet_length, 2) + pow(sheet_width, 2));
    //a^2 + b^2 = c^2
    float circumference = M_PI * sheet_diagonal; // Pie * diameter = circumference
    cout << "sheet diagonal = " << sheet_diagonal << endl;
    cout << "Pie = " << M_PI << endl;
    cout << "The circumference of a letter-size sheet (8.5 * 11 inches) is : " << circumference << endl;
}
