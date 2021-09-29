using namespace std;
#include <iostream>
#include <cmath>
int main()
{
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double AA;// теж функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу

    cout << "x = "; cin >> x;

    A = 2 / x;
    AA = abs(x);

    //розгалуження в скороченій формі
    if (x < 0) {
        B = 1 + 4 * pow(x, 2);
    }
    if (x >= 0 && x <= 2) {
        B = pow(exp(x) + abs(x), 2);
    }
    if (x > 2) {
        B = 5 * sin(pow(x, 2) + 1);
    }
    y = A + AA + B;

    cout << endl;
    cout << "1. y= " << y << endl;


    //розгалуження в повній формі
    if (x < 0)
        B = 1 + 4 * pow(x, 2);
    else
        if (x > 2)
            B = 5 * sin(pow(x, 2) + 1);
        else
            B = pow(exp(x) + abs(x), 2);

    y = A + AA + B;

    cout << endl;
    cout << "2. y= " << y << endl;


    cin.get();
    return 0;
}
