#include <iostream>
using namespace std;

int quadrant(int x, int y)
{
    if (x > 0 && y > 0)
        return 1;
    else if (x < 0 && y > 0)
        return 2;
    else if (x < 0 && y < 0)
        return 3;
    else if (x > 0 && y < 0)
        return 4;
    else
        return 0;   
}

int main()
{
    int x, y;

    cout << "Enter x coordinate: ";
    cin >> x;

    cout << "Enter y coordinate: ";
    cin >> y;

    int result = quadrant(x, y);

    if (result == 0)
        cout << "The point lies on an axis" << endl;
    else
        cout << "The point lies in Quadrant " << result << endl;

    return 0;
}
