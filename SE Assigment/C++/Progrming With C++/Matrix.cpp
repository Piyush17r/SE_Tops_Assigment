#include <iostream>
using namespace std;
class Matrix_1
{
public:
    int a[3], i;

    void input()
    {
        cout << "Enter First Matrix\n";
        for (i = 0; i <= 2; i++)
        {
            cout << "Enter A [" << i << "] : ";
            cin >> a[i];
        }
    }

    void display()
    {
        for (i = 0; i <= 2; i++)
        {
            cout << "\nDisplay Array A [" << i << "] = " << a[i] << "";
        }
    }
};
class Matrix_2 : public Matrix_1
{
public:
    int b[3];

    void input()
    {
        cout << "\nEnter Second Matrix\n";
        for (i = 0; i <= 2; i++)
        {
            cout << "Enter B [" << i << "] : ";
            cin >> b[i];
        }
    }

    void display()
    {
        cout << "\n";
        for (i = 0; i <= 2; i++)
        {
            cout << "\nDisplay Array B [" << i << "] = " << b[i] << "";
        }
    }
};
class Matrix_3 : public Matrix_2
{
    int c[3];

public:
    void addition()
    {
        printf("\n\n\nAddition of Two Array (A+B) = ");
        for (i = 0; i <= 2; i++)
        {
            c[i] = a[i] + b[i];
            cout << "\n C [" << i << "] = " << c[i];
        }
    }
};

main()
{
    Matrix_3 obj;

    obj.Matrix_1::input();
    obj.input();
    obj.Matrix_1::display();
    obj.display();
    obj.addition();
};