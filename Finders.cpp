#include "Finders.h"
#include <iostream>
using namespace std;

int wherePoint(int* a, Point p)
{
    Point pointOrigin;
    pointOrigin.x = 0;
    pointOrigin.y = 0;
    Point pointPlusX;
    pointPlusX.x = *a;
    pointPlusX.y = *a;
    Point pointMinusX;
    pointMinusX.x = -*a;
    pointMinusX.y = *a;

    int minX = pointOrigin.x, maxX = pointOrigin.x;
    int minY = pointOrigin.y, maxY = pointOrigin.y;

    //Min Max X
    if (pointPlusX.x < minX)
    {
        minX = pointPlusX.x;
    }
    if (pointMinusX.x < minX)
    {
        minX = pointMinusX.x;
    }

    if (pointPlusX.x > maxX)
    {
        maxX = pointPlusX.x;
    }
    if (pointMinusX.x > maxX)
    {
        maxX = pointMinusX.x;
    }



    //Min Max Y
    if (pointPlusX.y < minY)
    {
        minY = pointPlusX.y;
    }
    if (pointMinusX.y < minY)
    {
        minY = pointMinusX.y;
    }

    if (pointPlusX.y > maxY)
    {
        maxY = pointPlusX.y;
    }
    if (pointMinusX.y > maxY)
    {
        maxY = pointMinusX.y;
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
    if ((p.x == pointOrigin.x) && (p.y == pointOrigin.y))
    {
        return 0;
    }

    if ((p.x == pointPlusX.x) && (p.y == pointPlusX.y))
    {
        return 0;
    }

    if ((p.x == pointMinusX.x) && (p.y == pointMinusX.y))
    {
        return 0;
    }

    if ((p.x == 0) && (p.y == *a))
    {
        return 0;
    }
}
