#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    float x, y;
    cin >> x;
    cin >> y;
    if (x > -0,5 && (x*x + y*y)>1) {
        cout << "Точка принадлежит области" << endl;
    } else if (x < 0,5 && (x*x + y*y)<1) {
        cout << "Точка не принадлежит области" << endl;
    } else {
        cout << "Точка принадлежит области" << endl;        
    }
    return 0;
}
