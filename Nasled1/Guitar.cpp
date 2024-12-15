//автор Бородиенко Д.Т.
//Производный класс гитар
#include "Guitar.h"


//конструктор по умолчанию
Guitar::Guitar() {
    name = " ";
    stringMaterial = " ";
    bodyMaterial = " ";
    numberOfStrings = 0;
    bodyType = " ";
    mediatormaterial = " ";
    attunement = 0;
}

//конструктор с параметрами
Guitar::Guitar(const string& name, int numberOfStrings, const string& stringMaterial, const string& bodyMaterial, const string& bodyType, const string& mediatormaterial) {
    set_name(name);
    set_stringMaterial(stringMaterial);
    set_bodyMaterial(bodyMaterial);
    set_numberOfStrings(numberOfStrings);
    set_mediatormaterial(mediatormaterial);
    set_bodyType(bodyType);
    attunement = 0;
}

///сеттер для типа корпуса
void Guitar::set_bodyType(const string& bodytype) {
    this->bodyType = bodytype.empty() ? "None" : bodytype;
}
///сеттер для материала медиатора
void Guitar::set_mediatormaterial(const string& madmat) {
    this->mediatormaterial = madmat.empty() ? "None" : madmat;

}

///метод возвращает строку с информацией об объекте
string Guitar::to_string() const {
    return("Name: " + name + ", Count of string: " + std::to_string(numberOfStrings) + ", material of string: " + stringMaterial + ", material of body: " + bodyMaterial + ", body type: " + bodyType + ", material of mediator: " + mediatormaterial);
}
/// Специфический метод для на гитары
void Guitar::tune() {
    cout << "Tuning the guitar (" << name << ")..." << "\n";
    this->attunement = 100; //настройка становится 100
}
/// Переопределённый метод настройки
void Guitar::play() { 
    
    if (attunement > 10) {//если инструмент расстроен
        cout << "Playing on " << name << " this mediator made from " << mediatormaterial << "\n";//играть на инстументе
        this->attunement -= 10;
    }
    else {//то на нём нельзя играть
        cout << "You can`t play. Tune instrument" << "\n";
    }
} 

