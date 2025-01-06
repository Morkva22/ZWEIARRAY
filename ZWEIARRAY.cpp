/*/
Написати примітивний калькулятор, користуючись тільки покажчиками.

/*/
#include <iostream>
using namespace std;
void main()
{
 int a,b,c;
 cout << "Sir, now with your permission say me please what is your first number - ";
 cin >> a;
 cout << "Thx for it, and now please say me your second number - ";
 cin >> b;
 cout << "Ty again, and in a last time what operation do you need? - 1. +; 2. -; 3. *; 4. /; --- ";
 cin >> c;
 int *pa = &a;
 int *pb = &b;
 int *pc = &c;
 if (*pb == 0 && *pc == 4)
  {
   cout << "Sorry, but we cant divide by zero";
  }
  else if (*pc == 1)
  {
   cout << "Your result is " << *pa + *pb;
  }
  else if (*pc == 2)
  {
   cout << "Your result is " << *pa - *pb;
  }
  else if (*pc == 3)
  {
   cout << "Your result is " << *pa * *pb;
  }
  else if (*pc == 4)
  {
   cout << "Your result is " << *pa / *pb;
  }
  else
  {
   cout << "sorry boi, we havent what u need";
  }
 }