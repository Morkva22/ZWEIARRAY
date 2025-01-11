/*/
Написати функцію, що визначає кількість додатних, від'ємних і нульових елементів переданого їй масиву.
/*/
#include <iostream>
using namespace std;

void count()
{
    int arr[]={-1,-2,-3,-4,5,6,7,8,9,0};
    int pos=0,neg=0,zero=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
    cout<<"Zero: "<<zero<<endl;
    
}
void main()
{
    count();
    
}