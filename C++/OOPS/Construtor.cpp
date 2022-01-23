#include <iostream>
#include <cmath>
using namespace std;

class point
{

    int x, y;

public:
    friend int distance(point, point);

    point(int, int);

    void display(void);
};

point ::point(int a, int b)
{

    x = a;
    y = b;
}

void point ::display(void)
{
    cout << "The point is ( " << x << " , " << y << " )" << endl;
}

int distance(point o1, point o2)
{
    int dis = sqrt(((o1.x - o2.x)(o1.x - o2.x)) + ((o1.y - o2.y)(o1.y - o2.y)));
    return dis;
}

int main()
{
    point o1(1, 1);
    point o2(2, 2);
    int dis = distance(o1, o2);
    cout << dis;
    return 0;
}