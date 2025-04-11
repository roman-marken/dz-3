
#include <iostream>
#include <windows.h>
//#include <conio.h>
using namespace std;
int main(){
 // setlocale(0, "");
    SetConsoleOutputCP(CP_UTF8);    //для поддержки кириллицы в консоли CLion



    /*1. Написать программу, которая выводит на экран таблицу умножения на K, где K –
    натуральное число (вводиться пользователем). Например, для 7-ми:
    7 x 2 = 14
    7 x 3 = 21
    ...
    7 x 9 = 63*/

    int k = 0;
    cout << "Введите число K: ";
    cin >> k;
    for (int i = 2; i <= 9; i++)
    {
        cout << k << " x " << i << " = " << k * i << endl;
    }
    cout << endl;



    /*2.Для введенных целых положительных числа A и B, необходимо вывести все целые
    числа, на которые оба введенных числа делятся без остатка.*/
    int a = 0, b = 0;
    cout << "Введите два положительных числа A и B: ";
    cin >> a >> b;
    cout << "Числа, на которые оба числа делятся без остатка: ";
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;



    /*3.Найти перемножение всех целых чисел от A до 20 (значение A вводится с клавиатуры:
    1 <= A <= 20). */
    int product = 1;
    cout << "Введите число A (1 <= A <= 20): ";
    cin >> a;
    if (a < 1 || a > 20)
    {
        cout << "Ошибка: число A должно быть в диапазоне от 1 до 20." << endl;
        return 1;
    }
    for (int i = a; i <= 20; i++)
    {
        product *= i;
    }
    cout << "Перемножение всех чисел от " << a << " до 20: " << product << endl;
    cout << endl;


    /*4.Робот может перемещаться в четырех направлениях («N» — север, «E» — запад, «S» —
    юг, «W» — восток) и принимать три цифровые команды: 0 — продолжать движение,
    -1 — поворот налево, 1 — поворот направо, иначе — ошибка. В начале N — исходное
    направление робота. Нужно ввести целое число C — посланная ему команда и вывести
    направление робота после выполнения полученной команды. Необходимо выполнять
    команды в цикле, пока не ошибка (не одна из 3-х команд).*/

    char direction = 'N';
    int command;
    cout << "Введите команду (0 - продолжать, -1 - налево, 1 - направо): ";
    while (true)
    {
        cin >> command;
        if (command == 0)
        {
            cout << "Робот продолжает движение на " << direction << endl;
        }
        else if (command == -1)
        {
            if (direction == 'N') direction = 'W';
            else if (direction == 'W') direction = 'S';
            else if (direction == 'S') direction = 'E';
            else if (direction == 'E') direction = 'N';
            cout << "Робот поворачивает налево, теперь он движется на " << direction << endl;
        }
        else if (command == 1)
        {
            if (direction == 'N') direction = 'E';
            else if (direction == 'E') direction = 'S';
            else if (direction == 'S') direction = 'W';
            else if (direction == 'W') direction = 'N';
            cout << "Робот поворачивает направо, теперь он движется на " << direction << endl;
        }

        else
        {
            cout << "Ошибка: неверная команда." << endl;
            cout << "Робот остановлен." << endl;
            break;
        }


         cout << "Введите команду (0 - продолжать, -1 - налево, 1 - направо): ";

    }
    cout << endl;


    /*5.Пользователь вводит число N от 5 до 21. Вывести на экран «снежинку» из символов *,
    размером N на N. Например, для 7:
    */
    int n = 0;
    cout << "Введите число N (5 <= N <= 21): ";
    cin >> n;
    if (n < 5 || n > 21)
    {
        cout << "Ошибка: число N должно быть в диапазоне от 5 до 21." << endl;
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == n / 2 || j == n / 2 || i + j == n - 1 || i - j == n / 2 || j - i == n / 2)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

    /*1. Нарисуйте не заполненный ромб (только границы) со стороной N (от 5 до 25) и
    символом C (оба вводятся пользователем). Например, для 9 и #:*/
    int side = 0;
    char symbol = 0;
    cout << "Введите сторону ромба (5 <= N <= 25): ";
    cin >> side;
    if (side < 5 || side > 25)
    {
        cout << "Ошибка: сторона ромба должна быть в диапазоне от 5 до 25." << endl;
        return 1;
    }
    cout << "Введите символ для рисования ромба (#): ";
    cin >> symbol;
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            if (i + j == side / 2 || j - i == side / 2 || i - j == side / 2 || i + j == side + side / 2)
            {
                cout << symbol;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    return EXIT_SUCCESS; // 0
}




