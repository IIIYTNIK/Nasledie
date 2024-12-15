//автор Бородиенко Д.Т.
//Производный класс для смычковых инструментов
#pragma once
#include <string>
#include <iostream>
#include "StringInstrument.h"

class BowedStringInstrument : public StringInstrument {
private:
    string bowMaterial; //материал смычка

public:

    BowedStringInstrument();

    BowedStringInstrument(const string& name, int numberOfString, const string& stringMaterial, const string& bodyMaterial, const string bowMaterial);

    void set_bowMaterial(const string bmat);
    string get_bowMaterial() { return bowMaterial; };

    string to_string() const override;

    void play() override;// Специфический метод игры на смычковых инстументах
    void tune() override;// Переопределённый метод настройки
};