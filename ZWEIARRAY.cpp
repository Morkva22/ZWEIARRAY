/*/
 Використовуючи покажчики та оператор розіменування, обміняти місцями значення двох змінних.
/*/
#include <iostream>
using namespace std;
void main()
{
 int a;
 int b;
 cout << "enter your two variant of variors a & b - ";
 cin >> a;
 cin >> b;
 int *pa = &a;
 int *pb = &b;
 int pro = *pa;
 *pa = *pb;
 *pb = pro;
 cout << "HAHAHAHA I HAVE REVERSED YOUR NUMBERS, AND NOW, A BE " << *pa << " AND B BE " << *pb<< endl;
 
}