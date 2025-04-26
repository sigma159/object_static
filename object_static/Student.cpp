//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student {
//private:
//    string fullName;
//    string birthDate;
//    string phone;
//    string city;
//    string country;
//    string university;
//    string uniCity;
//    string uniCountry;
//    string groupNumber;
//
//public:
//    static int counter;
//
//    Student() {
//        fullName = "";
//        birthDate = "";
//        phone = "";
//        city = "";
//        country = "";
//        university = "";
//        uniCity = "";
//        uniCountry = "";
//        groupNumber = "";
//        counter++;
//    }
//
//    ~Student() {
//        counter--;
//    }
//
//    void input() {
//        cout << "������ ϲ� ��������: ";
//        getline(cin, fullName);
//        cout << "������ ���� ����������: ";
//        getline(cin, birthDate);
//        cout << "������ ���������� �������: ";
//        getline(cin, phone);
//        cout << "������ ����: ";
//        getline(cin, city);
//        cout << "������ �����: ";
//        getline(cin, country);
//        cout << "������ ����� ����������� �������: ";
//        getline(cin, university);
//        cout << "������ ���� ����������� �������: ";
//        getline(cin, uniCity);
//        cout << "������ ����� ����������� �������: ";
//        getline(cin, uniCountry);
//        cout << "������ ����� �����: ";
//        getline(cin, groupNumber);
//    }
//
//    void output() const {
//        cout << "ϲ� ��������: " << fullName << endl;
//        cout << "���� ����������: " << birthDate << endl;
//        cout << "���������� �������: " << phone << endl;
//        cout << "̳���: " << city << endl;
//        cout << "�����: " << country << endl;
//        cout << "���������� ������: " << university << endl;
//        cout << "̳��� ����������� �������: " << uniCity << endl;
//        cout << "����� ����������� �������: " << uniCountry << endl;
//        cout << "����� �����: " << groupNumber << endl;
//    }
//
//    static int getCounter() {
//        return counter;
//    }
//};
//
//int Student::counter = 0;
//
//int main() {
//    Student s1;
//    s1.input();
//    s1.output();
//
//    Student s2;
//    s2.input();
//    s2.output();
//
//    cout << "ʳ������ ��������� ��������: " << Student::getCounter() << endl;
//
//    return 0;
//}