#include <iostream>
#include <windows.h>
using namespace std;
int main()

{
   cout << "Sprawdze, czy liczba jest dodatnia czy ujemna." << endl;
   cout << "Podaj liczbe: " << endl;
   double liczba;
   cin >> liczba;
   if (liczba==0)
       {
       cout << "Zero nie jest ani dodatnie, ani ujemne." << endl;
       Sleep(3000);
       }
       else
       {
            if (liczba>0)
       {
           cout << liczba << " jest liczba dodatnia." << endl;
           Sleep(3000);
       }
       else
       {
           if (liczba<0)
           {
               cout << liczba << " jest liczba ujemna." << endl;
               Sleep(3000);
           }
       }
       }
   return 0;
}