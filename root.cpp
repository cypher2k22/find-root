#include <iostream>
using namespace std;

// Function to determine the type of roots
void determineRoots(int w1, int w2, int w3)
{
    int k = w2 * w2; // Calculate k
    int comparison = 4 * w1 * w3; // Calculate comparison value
    
    if (k == comparison)
        cout << "Equal roots" << endl;
    else if (k < comparison)
        cout << "Imaginary roots" << endl;
    else
        cout << "Real roots" << endl;
}

int main()
{
    int w1, w2, w3;
    cout << "Enter a ihe formar o ax^2+bx+c: ";
    cin >> w1;
    cout << "Enter b ihe formar o ax^2+bx+c: ";
    cin >> w2;
    cout << "Enter c ihe formar o ax^2+bx+c: ";
    cin >> w3;


    determineRoots(w1, w2, w3);

    return 0;
}
