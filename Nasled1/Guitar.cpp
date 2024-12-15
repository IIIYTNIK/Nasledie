//����� ���������� �.�.
//����������� ����� �����
#include "Guitar.h"


//����������� �� ���������
Guitar::Guitar() {
    name = " ";
    stringMaterial = " ";
    bodyMaterial = " ";
    numberOfStrings = 0;
    bodyType = " ";
    mediatormaterial = " ";
    attunement = 0;
}

//����������� � �����������
Guitar::Guitar(const string& name, int numberOfStrings, const string& stringMaterial, const string& bodyMaterial, const string& bodyType, const string& mediatormaterial) {
    set_name(name);
    set_stringMaterial(stringMaterial);
    set_bodyMaterial(bodyMaterial);
    set_numberOfStrings(numberOfStrings);
    set_mediatormaterial(mediatormaterial);
    set_bodyType(bodyType);
    attunement = 0;
}

///������ ��� ���� �������
void Guitar::set_bodyType(const string& bodytype) {
    this->bodyType = bodytype.empty() ? "None" : bodytype;
}
///������ ��� ��������� ���������
void Guitar::set_mediatormaterial(const string& madmat) {
    this->mediatormaterial = madmat.empty() ? "None" : madmat;

}

///����� ���������� ������ � ����������� �� �������
string Guitar::to_string() const {
    return("Name: " + name + ", Count of string: " + std::to_string(numberOfStrings) + ", material of string: " + stringMaterial + ", material of body: " + bodyMaterial + ", body type: " + bodyType + ", material of mediator: " + mediatormaterial);
}
/// ������������� ����� ��� �� ������
void Guitar::tune() {
    cout << "Tuning the guitar (" << name << ")..." << "\n";
    this->attunement = 100; //��������� ���������� 100
}
/// ��������������� ����� ���������
void Guitar::play() { 
    
    if (attunement > 10) {//���� ���������� ���������
        cout << "Playing on " << name << " this mediator made from " << mediatormaterial << "\n";//������ �� ����������
        this->attunement -= 10;
    }
    else {//�� �� �� ������ ������
        cout << "You can`t play. Tune instrument" << "\n";
    }
} 

