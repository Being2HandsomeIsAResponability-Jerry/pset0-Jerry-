#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class Move {
    string name;
    int power;

public:
    Move(string n, int p) {
        name = n;
        power = p;
    }

    string getName() {
        return name;
    }

    int getPower() {
        return power;
    }
};

struct Pokemon {
    string name;
    int attack;
    int health;
    vector<Move> moveset;

    Pokemon(string n, int a, int h, vector<Move> m) {
        name = n;
        attack = a;
        health = h;
        moveset = m;
    }

    void addMove(Move m) {
        moveset.push_back(m);
    }

    void useMove(Pokemon &other, int n) {
        Move m = moveset[n];

        double damage = attack * m.getPower() / 100.0;
        int roundedDamage = round(damage);

        other.health = other.health - roundedDamage;

        cout << name << " used " << m.getName() << "!" << endl;
    }
};