#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;
using std::setiosflags;

void suffle(int [][13]);
void deal(const int [][13], const char * [], const char * []);

int main() {
    const char *suit[4] = {
        "Copas",
        "Ouros",
        "Paus",
        "Espadas"
    };

    const char *face[13] = {
        "Ás", 
        "Dois", 
        "Três", 
        "Quatro", 
        "Cinco",
        "Seis", 
        "Sete", 
        "Oito", 
        "Nove", 
        "Dez", 
        "Valete", 
        "Dama", 
        "Rei"
    };

    int deck[4][13];

    srand(time(0));

    suffle(deck);
    deal(deck, face, suit);
    

    return 0;
}

void suffle(int wDeck[][13]) {
    int row, column;

    for(int card = 1; card <= 52; card++) {
        do {
            row = rand() % 4;
            column = rand() % 13;

            cout << "suffle: " << row << " - " << column << endl; 
        } while (wDeck[row][column] != 0);

        wDeck[row][column] = card;
    }
}

void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[]) {
    for(int card = 1; card <= 52; card++) {
        for(int row = 0; row <= 3; row++) {
            for(int column = 0; column <= 12; column++) {
                if(wDeck[row][column] == card) {
                    cout << setw(6) << setiosflags(std::ios::right)
                    << wFace[column] << " de "
                    << setw(7) << setiosflags(std::ios::left)
                    << wSuit[row]
                    << (card % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}