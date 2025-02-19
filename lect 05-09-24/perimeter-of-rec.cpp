#include <iostream>

using namespace std;

int main()
{
    float l, w, p;
    cout << "Enter value of length = ";
    cin >> l;
    cout << "Enter value of Width = ";
    cin >> w;

    p = (l + w) * 2;

    cout << "Perimeter of rectangle is " << p;

    return 0;
}