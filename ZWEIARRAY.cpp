#include <iostream>
using namespace std;
void main()
{
  const int ROWS = 2;
  const int COWS = 2;
  int arr[ROWS][COWS];
  int gg;
  cout << "endtter number" << endl;
  cin >> gg;
  arr[0][0]=gg;
  for (int i  = 0; i < ROWS; i++){
   for (int k = 0; k < COWS; k++){
    if (i==0 && k == 0){
     arr[i][k] = gg;
    }
    else
    {
     arr[i][k] = arr[i][k-1] + 1;
    }
   }
  }
  for (int i = 0; i < ROWS; i++)
  {
   for ( int k = 0; k < COWS; k++)
   {
    cout << arr[i][k] << " ";
            
   }
   cout << endl;
  }
}