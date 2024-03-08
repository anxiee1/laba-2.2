// laba 2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// vikt2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    float maxl = 0;
    cout << "Введите кол-во элементов массива: ";
    cin >> n;
    float* p = new float[n];
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        *(p + i) = (float)rand() / 2000 - 8;
        cout << *(p + i) << " ";
        if (abs(*(p + i)) > maxl)
        {
            maxl = abs(*(p + i));
        }
    }
    cout << endl << endl << "\n максимальный по модулю элемент равен: " << maxl;
    //
    float ibeg = 0, iend = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(p + i) > 0)
        {
            ibeg = i;
            break;
        }
    }
    for (int i = ibeg + 1; i < n; i++)
    {
        if (*(p + i) > 0)
        {
            iend = i;
            break;
        }
    }
    for (int i = ibeg + 1; i < iend; i++)
    {
        sum += *(p + i);
    }
    cout << endl << endl << "\n Сумма между двумя первыми положительными числами равна: " << sum << endl << endl;
    //
    for (int i = 0; i < n; i++)
    {
        if (*(p + i) != 0)
        {
            cout << *(p + i) << " ";
        }

    }
    for (int i = 0; i < n; i++)
    {
        if (*(p + i) == 0)
        {
            cout << *(p + i) << " ";
        }
    }
}
