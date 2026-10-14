#include "poke.h"

int main() {
    Move thunderbolt("Thunderbolt", 90);
    Move quickAttack("Quick Attack", 40);
    Move ember("Ember", 40);
    Move scratch("Scratch", 40);

    vector<Move> pikachuMoves;
    pikachuMoves.push_back(thunderbolt);

    vector<Move> charmanderMoves;
    charmanderMoves.push_back(ember);

    Pokemon pikachu("Pikachu", 55, 100, pikachuMoves);
    Pokemon charmander("Charmander", 52, 120, charmanderMoves);

    pikachu.addMove(quickAttack);
    charmander.addMove(scratch);

    pikachu.useMove(charmander, 0);
    cout << charmander.name << " health: "
         << charmander.health << endl;

    charmander.useMove(pikachu, 0);
    cout << pikachu.name << " health: "
         << pikachu.health << endl;

    pikachu.useMove(charmander, 1);
    cout << charmander.name << " health: "
         << charmander.health << endl;

    charmander.useMove(pikachu, 1);
    cout << pikachu.name << " health: "
         << pikachu.health << endl;

    return 0;
}