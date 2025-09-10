#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a;
    a = 8;
    int* w;

    w = &a;

    cout << a << endl;
    cout << w << endl;
    cout << *w << endl <<endl;

    *w = 24;

    cout << a << endl;
    cout << w << endl;
    cout << *w << endl << endl;

    int b = 16;
    int* w1 = &b;

    cout << b << endl;
    cout << w1 << endl;
    cout << *w1 << endl;
    cout << endl;

    cout << *w << " + " << *w1 << " = " << *w + *w1 << endl;

    cout << endl;

    a = 55;
    cout << *w << endl;
    cout << endl;
    cout << "tablica" << endl << endl;


    //tablice ze wskaŸnikami
    int tab[10];
    int* wt = &tab[0];
    srand(time(NULL));
    for(int i = 0; i <10; i++)
        {
            *wt = rand()%90 + 10;
            cout << *wt << endl;
            wt++;
        }

        cout << endl;

    for(int i = 0; i <10; i++)
        {
            cout << tab[i] << endl;

        }

        cout << endl;
            //new alokacja, delete zwolnienie (pamieci)
        int* tab2 = new int[5];

        for(int i = 0; i < 5;i++)
            {
                tab2[i] = rand()%90 + 10;
                cout << tab2[i] << endl;
            }


        delete[]tab2; //zwolnienie miejsca w pamieci a nie usuniecie


        cout << endl;
        cout << endl;
                for(int i = 0; i < 5;i++)
            {
                cout << tab2[i] << endl;
            }


            int** tab3 = new int*[6];

            for(int i = 0; i < 6; i++)
                {
                    tab3[i] = new int[3];
                }

                cout << endl;



            for(int i = 0; i < 6; i++)
                {
                    for(int j = 0; j < 3;j++)
                        {
                            tab3[i][j] = rand()%90+10;
                            cout << tab3[i][j] << " ";
                        }
                        cout << endl;
                }

                // zwalnianie pamieci

                for(int i = 0; i < 6;i++)
                        {
                            delete[]tab3[i];
                        }
                        delete[]tab3;
                        for(int i=0;i<6;i++){
                            cout << tab[i];
                        }



    return 0;
}
