#ifndef ROUTE_H
#define ROUTE_H

struct Route
{
    struct Point points[MAX_ROUTE];
    int numPoints;
    char routeSymbol;
};

#endif