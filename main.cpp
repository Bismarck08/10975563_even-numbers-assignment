#include <iostream>

using namespace std;

int main()
{

    int sum = 0;
    int counta = 0;
    float average;

   for (int i = 2; i < 10000; i = i + 2 ) {
      sum = sum + i;
      counta++;
   }
   average = sum / counta;
   cout << average;

    return 0;
}
