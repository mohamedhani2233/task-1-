#include <iostream>
#include <string>
using namespace std;

class Character {
private:
    string name;
    int health;
    int level;

public:
    // Constructor
    Character(string n, int h, int l) {
        name = n;
        health = h;
        level = l;
    }

    // Method to reduce health but not below 0
    void takeDamage(int amount) {
        health -= amount;
        if (health < 0)
            health = 0;
    }

    void levelUp() {
        level++;
    }

    // Method to print character status
    void getStatus() const {
        cout << "Name: " << name
             << "\nHealth: " << health
             << "\nLevel: " << level << endl;
    }
};

int main() {
    Character hero("Warrior", 100, 1);

    hero.getStatus();
    hero.takeDamage(30);
    hero.getStatus();
    hero.levelUp();
    hero.getStatus();

    return 0;
}
