#include <iostream>
using namespace std;
class calculator
{
   int a, b, c;
   double ans;

public:
   void input()
   {
      cout << "Enter A : ";
      cin >> a;
      cout << "Enter B : ";
      cin >> b;
      cout << "Enter C : ";
      cin >> c;
   }
   void addition()
   {
      ans = a + b + c;
      cout << "\n Addition = " << ans;
   }
   void substraction()
   {
      ans = a - b - c;
      cout << "\n Substraction = " << ans;
   }
   void multiplication()
   {
      ans = a * b * c;
      cout << "\n Multiplication = " << ans;
   }
   void division()
   {
      ans = a / b / c;
      cout << "\n Division = " << ans;
   }
};

main()
{
   calculator obj;

   obj.input();
   obj.addition();
   obj.substraction();
   obj.multiplication();
   obj.division();
};