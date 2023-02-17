#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<ctime>
#include<fstream>
#include<windows.h>
using namespace std;
string let1;
string let2;
string let3;
string let4;
string harf1;
string harf2;
string harf3;
string harf4;
string code;
int main()
{    
    int max = 25;
    int min = 1;

    char Alfabe[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    
    srand(time(0));
        harf1=Alfabe[rand() %(max-min+1)+min];
        harf2=Alfabe[rand() %(max-min+1)+min];
        harf3=Alfabe[rand() %(max-min+1)+min];
        harf4=Alfabe[rand() %(max-min+1)+min];
        let1=harf1+harf2+harf3+harf4;
        
       Sleep(1000);
        srand(time(0));
        harf1=Alfabe[rand() %(max-min+1)+min];
        harf2=Alfabe[rand() %(max-min+1)+min];
        harf3=Alfabe[rand() %(max-min+1)+min];
        harf4=Alfabe[rand() %(max-min+1)+min];
        let2=harf1+harf2+harf3+harf4;
        
       Sleep(1000);

         srand(time(0));
        harf1=Alfabe[rand() %(max-min+1)+min];
        harf2=Alfabe[rand() %(max-min+1)+min];
        harf3=Alfabe[rand() %(max-min+1)+min];
        harf4=Alfabe[rand() %(max-min+1)+min];
        let3=harf1+harf2+harf3+harf4;
        
        Sleep(1000);

         srand(time(0));
        harf1=Alfabe[rand() %(max-min+1)+min];
        harf2=Alfabe[rand() %(max-min+1)+min];
        harf3=Alfabe[rand() %(max-min+1)+min];
        harf4=Alfabe[rand() %(max-min+1)+min];
        let4=harf1+harf2+harf3+harf4;
        
        code = let1+"-"+let2+"-"+let3+"-"+let4;
        cout<<code; 
        ofstream yaz("code.txt");
        yaz << code;
        yaz.close();
      getch();

}