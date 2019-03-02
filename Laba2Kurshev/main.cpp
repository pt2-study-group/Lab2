#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
	int B,N,sum;
    double a;
    int Mus;
    cin >> N;
    B=0;
    a=0;
    for (B=1; B<=N; B++)
 {
    cin>>Mus;
    sum+=Mus;
  }
    a=sum/N ;
    cout << a;
    return 0;
}
