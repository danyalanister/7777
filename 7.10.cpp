#include <iostream>
using namespace std;
//1
int main() {
    setlocale(LC_ALL, "ru");
    int a, sum = 0;

    cout << "Введите число a (от 1 до 500): ";
    cin >> a;

    while (a <= 500) {
        sum += a;
        a++;
    }

    cout << "Сумма чисел от a до 500: " << sum << endl;
    return 0;
}
//2
int main() {
    setlocale(LC_ALL, "ru");
    int x, y, result = 1;

    cout << "Введите число x: ";
    cin >> x;

    cout << "Введите число y: ";
    cin >> y;

    int i = 0;
    while (i < y) {
        result *= x;
        i++;
    }

    cout << "x в степени y = " << result << endl;
    return 0;
}
//3
int main() {
    setlocale(LC_ALL, "ru");
    int sum = 0, count = 0, num = 1;

    while (num <= 1000) {
        sum += num;
        count++;
        num++;
    }

    double average = sum / (double)count;
    cout << "Среднее арифметическое всех чисел от 1 до 1000: " << average << endl;
    return 0;
}
//4
int main() {
    setlocale(LC_ALL, "ru");
    int a, product = 1;

    cout << "Введите число a (от 1 до 20): ";
    cin >> a;

    while (a <= 20) {
        product *= a;
        a++;
    }

    cout << "Произведение чисел от a до 20: " << product << endl;
    return 0;
}