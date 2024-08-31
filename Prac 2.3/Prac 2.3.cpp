#include <iostream>
#include <string>
#include <cctype>
#include <Windows.h>

using namespace std;

string snull{ "                 " };

void arraysint(int arr1[], int arr2[], int n1, int n2)
{
    int n = min(n1, n2);

    int* ptr1{ arr1 };
    int* ptr2{ arr2 };

    for (int i = 0; i < n; i++)
    {
        if (*(ptr1 + i) != *(ptr2 + i))
        {
            cout << "Элемент массива " << i + 1 << ':' << endl 
                << snull << " первый массив: " << *(ptr1 + i) << endl
                << snull << " второй массив: " << *(ptr2 + i) << endl;
        }
    }
}

void arrayschar(const char* txt)
{
    while (*txt)
    {
        char ch = tolower(*txt);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
        {
            cout << *txt;
        }

        ++txt;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    SetConsoleTitle(L"Семестр 2. Практическая работа 3");
   
    cout << "Вариант 9" << endl;

    int arr1[] = { 1,3,5,7,5,8,2,3,4 };
    int arr2[] = { 4,7,2,3,7,8,4,3,2 };

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "1) Элементы массива с общим индексом, но различны значением:" << endl;
    arraysint(arr1, arr2,n1,n2);

    const char* text = { "lorem ipsum" };
    cout << "2) В массиве текста \"" << text << "\" находятся следующие гласные буквы: ";
    arrayschar(text);

    return 0;
}
