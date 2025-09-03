#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 8;
    int* w;
    w = &a;
    cout << a <<endl;
    cout << w <<endl;
    cout << *w <<endl;
    *w = 24;

    cout << a <<endl;
    cout << w <<endl;
    cout << *w <<endl;
    int b = 16;
    int* w1;
    w1= &b;
    cout << w1 << endl;
    cout << *w1 << endl;

    int wynik;
    wynik = *w+*w1;
    cout << wynik <<endl;
    a =55;
    cout << *w << endl;
    cout << endl;


    int tab[10];
    int* wt;
    wt = &tab[0];
    srand(time(NULL));
    for(int i = 0;i<10;i++){
        *wt = rand()%90+10;
        cout << *wt << endl;
        wt++;
    }


    return 0;
}
