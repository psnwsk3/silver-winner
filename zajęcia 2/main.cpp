#include <iostream>
#include "point.h"
#include "Triangle.h"
#include "Account.h"

using namespace std;

int main()
{
    point p1(5,10);
    point p2(1,1);
    point p3(1,5);

    p1.move(p2);

    cout << p1.get_x()<< " " <<p1.get_y()<< endl;
    cout << p1.distance(p1,p2)<< endl;

    triangle t(p1, p2, p3);

    cout << t.perimeter()<< " "<< t.area()<< endl;

    Account a1;

    a1.set_id(1);
    a1.set_balance(1000);

    a1.transaction(200);
    a1.transaction(-50);

    cout << a1.last()<< endl;

    a1.showHistory();

    return 0;
}
