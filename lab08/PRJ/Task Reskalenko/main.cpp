#include <iostream>
#include <cmath>
#include <math.h>
#include "moduleReskalenko.h"

using namespace std;

void Autor(){
    cout << "Reskalenko Yaroslav�" << endl;
}

void logic(int a, int b){
    if ((a)<=(b-32))
    {
        cout << "1" << endl;
    }
    else cout << "0" << endl;
}

float convert(int x, int y, int z)
{
    cout << "����� x � ��������� ������ �������� ������� " << x << endl;
    cout << "����o x � �������������� ������ �������� ������� " << hex << x << endl;
    cout << "����� y � ��������� ������ �������� ������� " << y << endl;
    cout << "����o y � �������������� ������ �������� ������� " << hex << y << endl;
    cout << "����� z � ��������� ������ �������� ������� " << z << endl;
    cout << "����o z � �������������� ������ �������� ������� " << hex << z << endl;
    float S = s_calculation(x, y, z);

    return S;
}

int main()
{
    system("chcp 1251 && cls");
    Autor();
    int a, b;
    int x, y, z;
    cout << "������ � : ";
    cin >> a;
    cout << "������ b : ";
    cin >> b;
    cout << "������ x : ";
    cin >> x;
    cout << "������ y : ";
    cin >> y;
    cout << "������ z : ";
    cin >> z;
    logic(a, b);
    cout << convert(x, y, z) << endl;
    system("pause");
    return 0;
}
