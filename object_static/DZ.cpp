#include <iostream>
#include <cstring>

class String {
private:
    char* str;
    static int count;
    int length;

public:
    String() : length(80) {
        str = new char[length + 1];
        str[0] = '\0';
        count++;
    }

    String(int size) : length(size) {
        str = new char[length + 1];
        str[0] = '\0';
        count++;
    }

    String(const char* input) {
        length = std::strlen(input);
        str = new char[length + 1];
        std::strcpy(str, input);
        count++;
    }

    String(const String& other) : length(other.length) {
        str = new char[length + 1];
        std::strcpy(str, other.str);
        count++;
    }

    ~String() {
        delete[] str;
        count--;
    }

    void input() {
        std::cout << "Введіть рядок: ";
        std::cin.getline(str, length + 1);
    }

    void output() const {
        std::cout << "Рядок: " << str << std::endl;
    }

    static int getCount() {
        return count;
    }
};

int String::count = 0;

int main() {
    String s1;
    s1.output();

    String s2(100);
    s2.input();
    s2.output();

    String s3("Привіт, світ!");
    s3.output();

    std::cout << "Кількість створених об'єктів: " << String::getCount() << std::endl;

    return 0;
}
