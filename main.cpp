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
    int szukajacaMax(int startIndex) {
        int maks = tab[startIndex];
        int maxIndex = startIndex;
        for (int i = startIndex + 1; i < 10; i++) {
            if (maks < tab[i]) {
                maks = tab[i];
                maxIndex = i;
            }
        }
        return maxIndex;
    }

public:
    void sortowanie() {
        int temp;
        for (int i = 0; i < 9; i++) {
            int maxIndex = szukajacaMax(i);
            temp = tab[i];
            tab[i] = tab[maxIndex];
            tab[maxIndex] = temp;
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
