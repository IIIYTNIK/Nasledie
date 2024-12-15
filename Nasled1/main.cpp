#include <iostream>
#include <vector>
#include "BowedInstrument.h"
#include "Guitar.h"
#include "StringInstrument.h"
using namespace std;

int main() {
    //создание двух объктов класса гитары и 2 объекта класса смычковых инстумента
    Guitar electricGuitar("Electric Guitar", 6, "steel", "Alder", "Jumbo", "Wood");
    Guitar acousticGuitar("Acoustic Guitar", 6, "nylon", "Flame Maple", "Clasic", "Bone");
    BowedStringInstrument violin("Violin", 4, "gut", "wood", "Carbon");
    BowedStringInstrument cello("Cello", 4, "gut", "wood", "Fermabuk");

    //настраиваем и играем на гитарах
    electricGuitar.play();
    electricGuitar.tune();
    electricGuitar.play();
    cout << "\n";
    acousticGuitar.tune();
    acousticGuitar.play();
    cout << "\n";
    //настраиваем и играем смычковые инструменты
    violin.tune();
    violin.play();
    cout << "\n";
    cello.tune();
    cello.play();
    cout << "\n";


    //создаём вектор, в который запишем гитару и контрабас
    vector<StringInstrument*> instrument;

    instrument.push_back(new Guitar("Bass Guitar", 4, "steel", "Mahagony", "Jumbo", "Wood"));

    instrument.push_back(new BowedStringInstrument("Double bass", 4, "gut", "wood", "Carbon"));

    for (const auto& instrument : instrument) {
        instrument->tune();
        instrument->play();
        cout << "\n";
    }
    cout << "\n";
    return 0;
}