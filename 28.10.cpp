#include <iostream> 
#include <windows.h>
#include <string> 
#include <cmath>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 
    int r;
    cout << "введите радиус \n";
    cin >> r;
    cout << "объем шара равен " << 4/3 * 3.14 * pow(r,3);


    double m;
    double i;
    double q;
    cout << "введите вклад: \n";
    cin >> m;
    cout << "введите ставку(%): \n";
    cin >> i;
    cout << "введите число лет \n";
    cin >> q;
    cout << "вывод " << pow(1 + (i / 100), q) * m;

    float s;
    float y;
    float r;
    float o;
    cout << "введите число \n";
    cin >> s;
    cout << "кубический корень: " << cbrt(s) << "\n" << "квадратный корень " << sqrt(s) << "\n";
    cout << "введите первое число \n";
    cin >> y;
    cout << "введите второе число \n";
    cin >> r;
    cout << "модуль разности двух чисел " << fabs(y - r) << "\n";
    cout << "введите угол в градусах ";
    cin >> o;
    float u = 3.14;
    float rad = o * (u / 180);
    cout << "тангенс угла: " << tan(rad);
