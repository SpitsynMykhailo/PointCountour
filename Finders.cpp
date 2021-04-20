#include "Finders.h"
#include <iostream>
using namespace std;

int wherePoint(int a, Point p)
{
    Point contourPoint1;
    contourPoint1.x = 0;
    contourPoint1.y = 0;
    Point contourPoint2;
    contourPoint2.x = a;
    contourPoint2.y = a;
    Point contourPoint3;
    contourPoint3.x = -a;
    contourPoint3.y = a;

   
    float minX = -a,maxX=a,minY=0,maxY=a;

    //Clipping a rectangle
    if ((p.x < minX) || (p.x > maxX) || (p.y < minY) || (p.y > maxY))
    {
        return 1;
    }

    //Position determination
    if (p.x > 0)
    {
        if (p.x > p.y)
        {
            return 1;
        }
        else if( (p.x == p.y)||(p.y==a))
        {
            return 0;
        }
        else if (p.x < p.y)
        {
            return -1;
        }
        
    }
     else if (p.x < 0)
       {
        if ((-p.x == p.y) || (p.y == a))
        {
            return 0;
        }
        else if (-p.x < p.y)
        {
            return 1;
        }
        else if (-p.x > p.y)
        {
            return -1;
        }
        
     }

    if ((p.x == contourPoint1.x) && (p.y == contourPoint1.y))
    {
        return 0;
    }

     else if ((p.x == contourPoint2.x) && (p.y == contourPoint2.y))
    {
        return 0;
    }

     else if ((p.x == contourPoint3.x) && (p.y == contourPoint3.y))
    {
        return 0;
    }

    else if ((p.x == 0) && (p.y == a))
    {
        return 0;
    }
}
