#include "Getters.h"
#include <iostream>

using namespace std;

void getCont(int* a)
{
    cout << "Enter values outline " << endl;

    cin >> *a;
    if (*a < 0)
    {
        cout << "<<<WRONG PARAMETER>>> ";

        exit(0);
    }

}
Point getPoint()
{
    Point p;

    cout << "Enter point parameters X:  " << endl;
    cin >> p.x;
    cout << "Enter point parameters Y:  " << endl;
    cin >> p.y;
    return  p;
}
