#include<bits/stdc++.h>
using namespace std;
struct Point
{
    int x, y;
};

Point p0;

int distSq(Point p1, Point p2)
{
    return (p1.x - p2.x)*(p1.x - p2.x) +
           (p1.y - p2.y)*(p1.y - p2.y);
}


int orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;  // colinear
    return (val > 0)? 1: 2; // clock or counterclock wise
}

int compare(const void *vp1, const void *vp2)
{
    Point *p1 = (Point *)vp1;
    Point *p2 = (Point *)vp2;

    int o = orientation(p0, *p1, *p2);
    if (o == 0)
        return (distSq(p0, *p2) >= distSq(p0, *p1))? -1 : 1;

    return (o == 2)? -1: 1;
}

void convexHull(Point points[], int n)
{

    int ymin = points[0].y, min = 0;
    for (int i = 1; i < n; i++)
    {
        int y = points[i].y;


        if ((y < ymin) || (ymin == y &&
                           points[i].x < points[min].x))
            ymin = points[i].y, min = i;
    }
    swap(points[0], points[min]);
    p0 = points[0];
    cout << "(a,b) is " << " " << points[0].x << " " << points[0].y << endl;
    cout << "After Sorting WRT (a,b) :- " << endl;
    qsort(&points[1], n-1, sizeof(Point), compare);
    for(int i=1;i<n;i++)
    {
        cout << points[i].x << " " << points[i].y << endl;
    }


}

// Driver program to test above functions
int main()
{
    Point points[] = {{5,4},{8,9},{-8,7},{2,15},{0,16},{2,2},{6,-6},{9,8},{3,0},{4,0},{1,-18}};
    int n = sizeof(points)/sizeof(points[0]);
    convexHull(points, n);
    return 0;
}