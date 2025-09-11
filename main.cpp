#include <iostream>

using namespace std;
class Tablica{
int *tab = new int [10];
public:

void wypelnienie(){

for(int i=0;i<10;i++){
        cin >> tab[i];
    }
}

void wypisanie(){

for(int i=0;i<10;i++){
        cout << tab[i] << "";
    }
}

private:
int szukajacaMax(){

    int maks = tab[0];
    for(int i =0;i<10;i++){
        if(maks<tab[i]){
            maks=tab[i];
        }
    }
    return maks;

}

public:
void sortowanie
int maks;
int temp;
for(int i =0;i<10;i++){

    maks = this->szukajacaMax(i);
    temp=tab[i];
    tab[i]=maks;
    maks=tep;
}
};

int main()
{
    cout << "Podaj elementy do tablicy: " << endl;
    Tablica tab;
    tab.wypelnienie();
    tab.wypisanie();
    cout << endl;
    //cout << tab.szukajacaMax();
    return 0;
}
