//автор Бородиенко Д.Т.
//Производный класс гитар
#pragma once

#include <string>
#include "StringInstrument.h"
#include <iostream>

//Общий класс струнных музыкальных инстументов
class Guitar : public StringInstrument {
private:
    string bodyType; // Добавлен тип корпуса
    string mediatormaterial; //добавлен тип медиатора для гитары

public:
    //конструктор по умолчанию
    Guitar();

    //конструктор с параметрами
    Guitar(const string& name, int numberOfStrings, const string& stringMaterial, const string& bodyMaterial, const string &bodyType, const string &mediatormaterial);

    //сеттеры
    void set_bodyType(const string& bodytupe);//установка типа корпуса
    void set_mediatormaterial(const string& madmat);//установка типа медиатора

    //геттеры
    string get_bodyType() const { return bodyType; }//возвращает тип корпуса в строке 
    string get_mediatormaterial() const { return mediatormaterial; }//возвращает материал медиатора в строке 

    string to_string() const override;//метод, описывающий объект
    void play() override; // Специфический метод для гитары
    void tune() override; // Переопределённый метод настройки
};
