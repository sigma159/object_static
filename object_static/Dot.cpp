//#include <iostream>
//#include <fstream>
//using namespace std;
//
//class Point {
//private:
//    double x, y, z;
//    static int counter;
//
//public:
//    Point() : Point(0.0, 0.0, 0.0) {}
//
//    Point(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) {
//        counter++;
//    }
//
//    ~Point() {
//        counter--;
//    }
//
//    void input() {
//        cout << "������ ���������� X, Y, Z: ";
//        cin >> x >> y >> z;
//    }
//
//    void output() const {
//        cout << "���������� �����: X = " << x << ", Y = " << y << ", Z = " << z << endl;
//    }
//
//    double getX() const { return x; }
//    double getY() const { return y; }
//    double getZ() const { return z; }
//
//    void setX(double value) { x = value; }
//    void setY(double value) { y = value; }
//    void setZ(double value) { z = value; }
//
//    void saveToFile(const string& filename) const {
//        ofstream file(filename);
//        if (file.is_open()) {
//            file << x << " " << y << " " << z;
//            file.close();
//            cout << "��� ��������� � ���� \"" << filename << "\".\n";
//        }
//        else {
//            cout << "�� ������� ������� ���� ��� ������.\n";
//        }
//    }
//
//    void loadFromFile(const string& filename) {
//        ifstream file(filename);
//        if (file.is_open()) {
//            file >> x >> y >> z;
//            file.close();
//            cout << "��� ����������� � ����� \"" << filename << "\".\n";
//        }
//        else {
//            cout << "�� ������� ������� ���� ��� �������.\n";
//        }
//    }
//
//    static int getCounter() {
//        return counter;
//    }
//};
//
//int Point::counter = 0;
//
//int main() {
//    Point p;
//    p.input();
//    p.output();
//
//    p.saveToFile("point.txt");
//
//    Point anotherPoint;
//    anotherPoint.loadFromFile("point.txt");
//    anotherPoint.output();
//
//    cout << "ʳ������ ��������� �����: " << Point::getCounter() << endl;
//
//    return 0;
//}
