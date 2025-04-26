//#include <iostream>
//
//using namespace std;
//
//class AreaCalculator {
//private:
//    static int calculationCount;
//
//public:
//    static double triangleAreaByBaseHeight(double base, double height) {
//        calculationCount++;
//        return (base * height) / 2;
//    }
//
//    static double rectangleArea(double length, double width) {
//        calculationCount++;
//        return length * width;
//    }
//
//    static double squareArea(double side) {
//        calculationCount++;
//        return side * side;
//    }
//
//    static double rhombusArea(double d1, double d2) {
//        calculationCount++;
//        return (d1 * d2) / 2;
//    }
//
//    static int getCalculationCount() {
//        return calculationCount;
//    }
//};
//
//int AreaCalculator::calculationCount = 0;
//
//int main() {
//    int choice;
//    do {
//        cout << "\nОберіть фігуру для підрахунку площі:\n";
//        cout << "1. Трикутник (за основою і висотою)\n";
//        cout << "2. Прямокутник\n";
//        cout << "3. Квадрат\n";
//        cout << "4. Ромб\n";
//        cout << "0. Вийти\n";
//        cout << "Ваш вибір: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            double base, height;
//            cout << "Введіть основу трикутника: ";
//            cin >> base;
//            cout << "Введіть висоту трикутника: ";
//            cin >> height;
//            cout << "Площа трикутника: " << AreaCalculator::triangleAreaByBaseHeight(base, height) << endl;
//            break;
//        }
//        case 2: {
//            double length, width;
//            cout << "Введіть довжину прямокутника: ";
//            cin >> length;
//            cout << "Введіть ширину прямокутника: ";
//            cin >> width;
//            cout << "Площа прямокутника: " << AreaCalculator::rectangleArea(length, width) << endl;
//            break;
//        }
//        case 3: {
//            double side;
//            cout << "Введіть сторону квадрата: ";
//            cin >> side;
//            cout << "Площа квадрата: " << AreaCalculator::squareArea(side) << endl;
//            break;
//        }
//        case 4: {
//            double d1, d2;
//            cout << "Введіть довжину першої діагоналі ромба: ";
//            cin >> d1;
//            cout << "Введіть довжину другої діагоналі ромба: ";
//            cin >> d2;
//            cout << "Площа ромба: " << AreaCalculator::rhombusArea(d1, d2) << endl;
//            break;
//        }
//        case 0:
//            cout << "Вихід з програми.\n";
//            break;
//        default:
//            cout << "Невірний вибір! Спробуйте ще раз.\n";
//        }
//    } while (choice != 0);
//
//    cout << "Загальна кількість підрахунків площі: " << AreaCalculator::getCalculationCount() << endl;
//
//    return 0;
//}
