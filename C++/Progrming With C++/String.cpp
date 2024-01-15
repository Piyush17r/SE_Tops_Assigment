#include <iostream>
#include <string.h>
using namespace std;
class String
{
public:
    char str[20];

    void string()
    {
        cout << "\nEnter String : ";
        cin >> str;
    }
    void display()
    {
        cout << str;
    }
    String operator+(String x)
    {
        String t;
        strcpy(t.str, str);
        strcat(t.str, x.str);
        return t;
    }
};
main()
{
    String obj1, obj2, obj3;

    obj1.string();
    obj2.string();
    obj3 = obj1 + obj2;
    cout << "\n\n Concatenate Output : ";
    obj3.display();
};