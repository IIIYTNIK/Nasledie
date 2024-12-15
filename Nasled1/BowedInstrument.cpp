//автор Бородиенко Д.Т.
//Производный класс для смычковых инструментов
#include "BowedInstrument.h"


//конструктор  по умолчанию
BowedStringInstrument::BowedStringInstrument() {
    bowMaterial = " "; //материал смычка
    name = " "; //Название инструмента
    stringMaterial = " "; //материал струн
    bodyMaterial = " "; //материал корпуса
    numberOfStrings = 0; //Количество струн
    attunement = 0;
    }

BowedStringInstrument::BowedStringInstrument(const string& name, int numberOfString, const string& stringMaterial,
                                             const string& bodyMaterial, const string bowMaterial) {
    set_name(name);
    set_stringMaterial(stringMaterial);
    set_bodyMaterial(bodyMaterial);
    set_numberOfStrings(numberOfString);
    set_bowMaterial(bowMaterial);
    attunement = 0;
}

///сеттер для материала смычка
void BowedStringInstrument::set_bowMaterial(const string bmat) {
    this->bowMaterial = bmat.empty() ? "None" : bmat;
    }

///метод возвращает строку с информацией об объекте
string BowedStringInstrument::to_string() const {
    return("Name: " + name + ", Count of string: " + std::to_string(numberOfStrings) + ", material of string: " + stringMaterial + ", material of body: " + bodyMaterial + ", material of bow:" + bowMaterial);
}

// Специфический метод для игры смычком
void BowedStringInstrument::play() {

    if (this->attunement > 10) { //если инструмент расстроен
        cout << "Playing on " << name << " this bow made from: " << bowMaterial << "\n"; //играть на инстументе
        this->attunement -= 10;
    }
    else {
        cout << "You can`t play. Tune instrument " << "\n"; //то на нём нельзя играть
    }
};
// Переопределённый метод настройки
void BowedStringInstrument::tune() {
    cout << "Tuning " << name << "\n";
    this->attunement = 100; //настройка становится 100
}
