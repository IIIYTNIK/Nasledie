//����� ���������� �.�.
//����������� ����� ��� ��������� ������������
#include "BowedInstrument.h"


//�����������  �� ���������
BowedStringInstrument::BowedStringInstrument() {
    bowMaterial = " "; //�������� ������
    name = " "; //�������� �����������
    stringMaterial = " "; //�������� �����
    bodyMaterial = " "; //�������� �������
    numberOfStrings = 0; //���������� �����
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

///������ ��� ��������� ������
void BowedStringInstrument::set_bowMaterial(const string bmat) {
    this->bowMaterial = bmat.empty() ? "None" : bmat;
    }

///����� ���������� ������ � ����������� �� �������
string BowedStringInstrument::to_string() const {
    return("Name: " + name + ", Count of string: " + std::to_string(numberOfStrings) + ", material of string: " + stringMaterial + ", material of body: " + bodyMaterial + ", material of bow:" + bowMaterial);
}

// ������������� ����� ��� ���� �������
void BowedStringInstrument::play() {

    if (this->attunement > 10) { //���� ���������� ���������
        cout << "Playing on " << name << " this bow made from: " << bowMaterial << "\n"; //������ �� ����������
        this->attunement -= 10;
    }
    else {
        cout << "You can`t play. Tune instrument " << "\n"; //�� �� �� ������ ������
    }
};
// ��������������� ����� ���������
void BowedStringInstrument::tune() {
    cout << "Tuning " << name << "\n";
    this->attunement = 100; //��������� ���������� 100
}
