#include <stdlib.h>
#include <iostream>
#include "Finders.h"
#include "Getters.h"
using namespace std;


int main()
{
    Point p;
    int a;
    getCont(&a);
    cout << wherePoint(a, getPoint());
}
    