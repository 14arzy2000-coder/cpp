#include <iostream> 
#include <windows.h>
#include <string> 
#include <cmath>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 
    int a, b, c;
    int x1, x2, x;
    int d;
    cout << "введите 3 коэффициента через пробел \n";
    cin >> a >> b >> c;
    cout << "дискриминант равен " << pow(b,2)-4*a*c << "\n";
    d = pow(b, 2) - 4 * a * c;
    if (d>0)
    {
        cout << "дискриминант больше нуля, корня 2 \n";
        x1 = -b + sqrt(d) / 2 * a;
        cout << "первый корень " << x1 << "\n";
        x2 = -b - sqrt(d) / 2 * a; 
        cout << "второй корень " << x2 << "\n";
    }
    else if (d == 0)
    {
        cout << "дискриминант равен нулю \n";
        x = -b / 2 * a;
        cout << "корень 1" << x;
    }
    else
    {
        cout << "дискриминант меньше нуля, корней нет, уравнение не решаемое";
    }


/*int a, b, c;
    cout << "введите 3 числа через пробел \n";
    cin >>a >>b >>c;
    int p = (a + b + c)/2;
    cout << "площадь: " << sqrt(p*(p-a)*(p-b)+(p-c));*/

    /*float g = 9.8;
    float pi = 3.14;
    int deg;
    cout << "введите угол \n";
    cin >> deg;
    float rad = deg * pi /180;
    cout << "синус угла " << sin(rad) << "\n";
    cout << "косинус угла " << cos(rad);*/


    /*cout << "корень " << sqrt(g) << "\n";
    cout << "квадрат " << pow(g,2) << "\n";
    cout << "округление в меньшую сторону " << floor(g) << "\n";
    cout << "корень " << ceil(g) << "\n";
    cout << "округление " << round(g) << "\n";
    cout << "модуль g " << abs(g) << "\n";
    cout << "синус радианы " << sin(rad) << "\n";
    cout << "косинус " << cos(rad) << "\n";*/


    /*int a;
    cout << "катет 1 \n";
    cin >> a;
    int b;
    cout << "катет 2 \n";
    cin >> b;
    cout << "гипотенуза " << pow(a, 2) * pow(b, 2) << "\n";
    
    int f;
    cout << "введите a \n";
    cin >> f;
    int g;
    cout << "введите b \n";
    cin >> g;
    cout << "a в степени b " << pow(a,b) << "\n";

    int r;
    int t;
    int y;
    int o;
    cout << "введите 1 точку (2 числа через пробел) \n";
    cin >> r >> t;
    cout << "введите 2 точку (2 числа через пробел) \n";
    cin >> y >> o;
    cout << "расстояние между ними " << pow(t - r, 2) + pow(o - y, 2);*/


  /*  
  
  среднее арифметическое 


    int a;
    int sum=0;
    int kol=0;
    
    while (cin >> a)
    {
        sum += a;
        kol++;
    }
    float r=sum;
    cout << r / kol;*/
    


 /*   обратные символы
 
    string str;
    cin >> str;
    cout << str[str.length()-1] << str[str.length() - 2] << str[str.length() - 3] << str[str.length() - 4] << str[str.length() - 5]
   //     << str[str.length() - 6];*/
   // string a;
   // string b;
   ////  cin >> a>>b;
   // while (cin >> a && cin >> b)
   // {
   //     if (a.length() > b.length())
   //     {
   //         cout << a;
   //     }
   //     else if (a.length() == b.length())
   //     {
   //         cout << b + a;
   //     }
   //     else if ("ff")
   //     {
   //         break;
   //     }
   //     else
   //     {
   //         cout << b;
   //     }
   // }

    /*float g = 9.8;
    float m;
    cout << "введите массу для силы тяжести: \n";
    cin >> m;
    cout << m * g << "\n";

    float p;
    float v;
    cout << "введите путь: ";
    cin >> p;
    cout << "введите время: ";
    cin >> v;
    cout << "скорость: " << (p / v) << "\n";

    int a;
    int b;
    cout << "введите длину ";
    cin >> a;
    cout << "введите высоту ";
    cin >> b;
    cout << "периметр: " << ((a + b) * 2) << "\n";
    cout << "площадь: " << (a * b) << "\n";*/

   

}

