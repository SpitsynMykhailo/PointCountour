#include "Finders.h"
#include <iostream>
using namespace std;

int wherePoint(int* a, Point p)
{
    Point v;
    v.x = 0;
    v.y = 0;
    Point v2;
    v2.x = *a;
    v2.y = *a;
    Point v3;
    v3.x = -*a;
    v3.y = *a;

    int minX = v.x, maxX = v.x;
    int minY = v.y, maxY = v.y;

    //Min Max X
    if (v2.x < minX)
    {
        minX = v2.x;
    }
    if (v3.x < minX)
    {
        minX = v3.x;
    }

    if (v2.x > maxX)
    {
        maxX = v2.x;
    }
    if (v3.x > maxX)
    {
        maxX = v3.x;
    }



    //Min Max Y
    if (v2.y < minY)
    {
        minY = v2.y;
    }
    if (v3.y < minY)
    {
        minY = v3.y;
    }

    if (v2.y > maxY)
    {
        maxY = v2.y;
    }
    if (v3.y > maxY)
    {
        maxY = v3.y;
    }

    //Kvadrat
    if ((p.x < minX) || (p.x > maxX) || (p.y < minY) || (p.y > maxY))
    {
        return 1;
    }


    if (p.x > 0)
    {
        if (p.x > p.y)
        {
            return 1;
        }
        if (p.x < p.y)
        {
            return -1;
        }
        if (p.x == p.y)
        {
            return 0;
        }
    }
    if (p.x < 0)
    {
        if (-p.x < p.y)
        {
            return 1;
        }
        if (-p.x > p.y)
        {
            return -1;
        }
        if (-p.x == p.y)
        {
            return 0;
        }
    }

    //pravo levo 
    if ((p.x == v.x) && (p.y == v.y))
    {
        return 0;
    }

    if ((p.x == v2.x) && (p.y == v2.y))
    {
        return 0;
    }

    if ((p.x == v3.x) && (p.y == v3.y))
    {
        return 0;
    }

    if ((p.x == 0) && (p.y == *a))
    {
        return 0;
    }
}
