#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    for (int i = 0; i <=15; i++) {
        int x;
        int summ =0;
        int otr = 0;
        cin >> x;
        if (x<0){
            otr++;
        } else {
            summ +=x;
        }
        cout << "otr = "+otr<< endl;
        cout << "summ = "+summ<< endl;
    }
    return 0;
}
