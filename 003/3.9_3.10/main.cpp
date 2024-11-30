#include <iostream>

using std::cout;
using std::endl;

#include <cstdlib>
#include <ctime>

using std::time;

int rollDice(void);
int rollDiceNSides(int);
int main()
{

    enum Status { CONTINUE, WON, LOST };

    int sum, myPoint;
    Status gameStatus;

    srand(time(0));

    sum = rollDice();

    switch(sum) {
        case 7:
        case 11:
            gameStatus = WON;

        case 2:
        case 3:
        case 12:
            gameStatus = LOST;

        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            cout << "Ponto é " << myPoint << endl;
            break;
    }

    while (gameStatus == CONTINUE) {
        sum = rollDice();

        if (sum == myPoint) {
            gameStatus = WON;
        } else if (sum == 7) {
            gameStatus = LOST;
        }
    }


    if (gameStatus == WON) {
        cout << "O jogador ganhou" << endl;
    } else {
        cout << "O jogador perdeu" << endl;
    }

    return 0;
}

int rollDice() {
    int dice1, dice2, workSum;

    dice1 = rollDiceNSides(6);
    dice2 = rollDiceNSides(6);

    workSum = dice1 + dice2;

    cout << "Jogador fez " << dice1 << " + " << dice2 << " = " << workSum << endl;

    return workSum;
}

// ROLL A DICE OF N SIDES
int rollDiceNSides(int sides = 6) {
   return 1 + rand() % sides;
}