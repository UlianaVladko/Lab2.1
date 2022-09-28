#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    cout << "Задание 1"<<endl;

    int x;
 
    cout << "\nВведите число x ";
    cin >> x;

    while (x <= 0) {
        cout << "Введите положительное число ";
        cin >> x;

        if (x > 0)
            break;
    }

    int i = 0;
    int sum = 0;

    while (i != x) {
        i++;
        sum = sum+i;
        
        if (i == x)
            break;
    }
    cout << "1 +...+ x = "<<sum<<"\n";
    
    int array[] = { 1,4,78,4,9,67,458,102,33,99 };

    cout << "\narray = { ";
    for (int i=0;i<10;i++) cout << array[i]<<" ";
    cout << "}" << endl;
    
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            cout << array[i]<<" ";
    }

    int s = 0;

    for (int i = 0; i < 10; i++) 
    {
        if (i % 2 != 0)
            s = s + array[i];
    }
    cout << "\nS array[i%2!=0] = " << s << "\n";

    cout << "\nЗадание 2" << endl;

    float a;
    float b;

    cout << "\nВведите число a ";
    cin >> a;
    cout << "Введите число b ";
    cin >> b;
    cout << "Среднее арифметическое a и b = " << (a + b) / 2<<endl;

    char per;
    cout << "\nВыберете знак операции (+ - * /) ";
    cin >> per;
    
    /*if (per == '+')
        cout << "a + b = " << a + b;
    if (per == '-')
        cout << "a - b = " << a - b;
    if (per == '*')
        cout << "a * b = " << a * b;
    if (per == '/')
        cout << "a / b = " << a / b;
        else cout << "Некорректный ввод";*/
        

    switch (per)
    {
        case '+':
            cout <<"a + b = "<< a + b;
            break;
        case '-':
            cout <<"a - b = " << a - b;
            break;
        case '*':
            cout << "a * b = " << a * b;
            break;
        case '/':
            cout << "a / b = " << a / b;
            break;
        default:
            cout << "Некорректный ввод";
    }
}

