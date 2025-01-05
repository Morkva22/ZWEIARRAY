
#include <iostream>
using namespace std;
void main()
{
    const int SIZE = 3;
    int arr[SIZE] = {1,2,3};
    int sum = 0;
    sum = arr[0] + arr[1] + arr[2];
    cout<<"sum = "<< sum << endl;
    int Arithmetic_mean = 0;
    Arithmetic_mean = sum / SIZE;
    cout << "Arithmetic_mean = " << Arithmetic_mean << endl;
    int max = 0;
    max = arr[2];
    int min = 0;
    min = arr[0];
    cout<< "max = " << max <<"\n" << "min = "<< min << endl;
}