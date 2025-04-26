#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
    static int count;

    int gcd(int a, int b) {
        if (a < 0) a = -a;
        if (b < 0) b = -b;

        while (b != 0) {
            int t = b;
            b = a % b;
            a = t;
        }
        return a;
    }

    void reduce() {
        int divisor = gcd(numerator, denominator);
        numerator /= divisor;
        denominator /= divisor;

        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    static int getCount() {
        return count;
    }

    Fraction() : numerator(0), denominator(1) {
        count++;
    }

    Fraction(int num) : numerator(num), denominator(1) {
        count++;
    }

    Fraction(int num, int den) : Fraction(num) {
        if (den == 0) {
            cout << "�������: ��������� �� ���� ���� ��������. ����������� 1." << endl;
            denominator = 1;
        }
        else {
            denominator = den;
        }
        reduce();
    }

    Fraction(const Fraction& other) : numerator(other.numerator), denominator(other.denominator) {
        count++;
    }

    void input() {
        cout << "������ ���������: ";
        cin >> numerator;
        cout << "������ ���������: ";
        cin >> denominator;
        if (denominator == 0) {
            cout << "��������� �� ���� ���� ��������. ����������� 1." << endl;
            denominator = 1;
        }
        reduce();
    }

    void display() const {
        cout << numerator << "/" << denominator << endl;
    }

    Fraction add(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    Fraction subtract(const Fraction& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    Fraction multiply(const Fraction& other) const {
        int num = numerator * other.numerator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    Fraction divide(const Fraction& other) const {
        if (other.numerator == 0) {
            cout << "�������: ������ �� ����. ����������� ��� 0/1." << endl;
            return Fraction(0, 1);
        }
        int num = numerator * other.denominator;
        int den = denominator * other.numerator;
        return Fraction(num, den);
    }
};

int Fraction::count = 0;

int main() {
    Fraction a, b, result;
    char op;

    cout << "������ ������ ���:\n";
    a.input();

    cout << "������ ������ ���:\n";
    b.input();

    cout << "������� �� (+ - * /): ";
    cin >> op;

    switch (op) {
    case '+':
        result = a.add(b);
        cout << "���������: ";
        result.display();
        break;
    case '-':
        result = a.subtract(b);
        cout << "���������: ";
        result.display();
        break;
    case '*':
        result = a.multiply(b);
        cout << "���������: ";
        result.display();
        break;
    case '/':
        result = a.divide(b);
        cout << "���������: ";
        result.display();
        break;
    default:
        cout << "������� ��������." << endl;
    }

    cout << "\nʳ������ ��������� ���������� ����� Fraction: " << Fraction::getCount() << endl;

    return 0;
}
