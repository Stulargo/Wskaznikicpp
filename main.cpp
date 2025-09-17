#include <iostream>

using namespace std;

class Tablica {
    int *tab = new int[10];

public:
    void wypelnienie() {
        for (int i = 0; i < 10; i++) {
            cin >> tab[i];
        }
    }

    void wypisanie() {
        for (int i = 0; i < 10; i++) {
            cout << tab[i] << " ";
        }
        cout << endl;
    }

private:
    int szukajacaMax() {
        int maks = tab[0];
        for (int i = 1; i < 10; i++) {
            if (maks < tab[i]) {
                maks = tab[i];
            }
        }
        return maks;
    }

public:
    void sortowanie() {
        int maks;
        int temp;

        for (int i = 0; i < 10; i++) {
            maks = szukajacaMax();
            temp = tab[i];
            tab[i] = maks;
            maks = temp;
        }
    }
};

int main() {
    cout << "Podaj elementy do tablicy: " << endl;
    Tablica tab;
    tab.wypelnienie();
    cout << "Tablica przed sortowaniem: ";
    tab.wypisanie();

    tab.sortowanie();

    cout << "Tablica po sortowaniu: ";
    tab.wypisanie();
    return 0;
}
