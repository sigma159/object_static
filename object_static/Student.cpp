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
//        cout << "Введіть ПІБ студента: ";
//        getline(cin, fullName);
//        cout << "Введіть дату народження: ";
//        getline(cin, birthDate);
//        cout << "Введіть контактний телефон: ";
//        getline(cin, phone);
//        cout << "Введіть місто: ";
//        getline(cin, city);
//        cout << "Введіть країну: ";
//        getline(cin, country);
//        cout << "Введіть назву навчального закладу: ";
//        getline(cin, university);
//        cout << "Введіть місто навчального закладу: ";
//        getline(cin, uniCity);
//        cout << "Введіть країну навчального закладу: ";
//        getline(cin, uniCountry);
//        cout << "Введіть номер групи: ";
//        getline(cin, groupNumber);
//    }
//
//    void output() const {
//        cout << "ПІБ студента: " << fullName << endl;
//        cout << "Дата народження: " << birthDate << endl;
//        cout << "Контактний телефон: " << phone << endl;
//        cout << "Місто: " << city << endl;
//        cout << "Країна: " << country << endl;
//        cout << "Навчальний заклад: " << university << endl;
//        cout << "Місто навчального закладу: " << uniCity << endl;
//        cout << "Країна навчального закладу: " << uniCountry << endl;
//        cout << "Номер групи: " << groupNumber << endl;
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
//    cout << "Кількість створених студентів: " << Student::getCounter() << endl;
//
//    return 0;
//}