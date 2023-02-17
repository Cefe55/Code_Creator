#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<ctime>
#include<fstream>
#include<windows.h>
using namespace std;
string Sen1;
string Sen2;
string Sen3;
string Sen4;
string let1;
string let2;
string let3;
string let4;
string code;
int main()
{    
    int max = 25;
    int min = 1;

    char Alfabe[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    
    srand(time(0));
        let1=Alfabe[rand() %(max-min+1)+min];
        let2=Alfabe[rand() %(max-min+1)+min];
        let3=Alfabe[rand() %(max-min+1)+min];
        let4=Alfabe[rand() %(max-min+1)+min];
        Sen1=let1+let2+let3+let4;
        
       Sleep(1000);
        srand(time(0));
        let1=Alfabe[rand() %(max-min+1)+min];
        let2=Alfabe[rand() %(max-min+1)+min];
        let3=Alfabe[rand() %(max-min+1)+min];
        let4=Alfabe[rand() %(max-min+1)+min];
        Sen2=let1+let2+let3+let4;
        
       Sleep(1000);

         srand(time(0));
        let1=Alfabe[rand() %(max-min+1)+min];
        let2=Alfabe[rand() %(max-min+1)+min];
        let3=Alfabe[rand() %(max-min+1)+min];
        let4=Alfabe[rand() %(max-min+1)+min];
        Sen3=let1+let2+let3+let4;
        
        Sleep(1000);

         srand(time(0));
        let1=Alfabe[rand() %(max-min+1)+min];
        let2=Alfabe[rand() %(max-min+1)+min];
        let3=Alfabe[rand() %(max-min+1)+min];
        let4=Alfabe[rand() %(max-min+1)+min];
        Sen4=let1+let2+let3+let4;
        
        code = Sen1+"-"+Sen2+"-"+Sen3+"-"+Sen4;
        cout<<code; 
        ofstream yaz("code.txt");
        yaz << code;
        yaz.close();
      getch();

}