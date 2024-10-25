#include <iostream>
using namespace std;
int takeinteger(int lower ,int upper)
{
    bool bornInf;
    bool bornSup;
    int n;
    do{
       cout <<"Enter an Integer greater than " <<lower<<"and lower than" <<upper<<":";
       cin>>n;
       bornInf=n<lower;
       bornSup=n>upper;
       if(bornInf)
       {
        cout<<"Your number is less or equal to "<<lower<<endl;
       }
       if(bornSup)
       {
        cout<<"Your number is greater than or equal to"<<upper<<endl;
       }
    }while(bornInf || bornSup);
    return n;
}
int main()
{
   
    cout<<"Enter the integer for which you want to display the multiplication table:";
    int n;
    n=takeinteger(0,70);
    int bornsupTable;
    bornsupTable=takeinteger(8,30);
    int borninfTable;
    borninfTable=takeinteger(0,8);    
    for (int i=bornsupTable; i>=borninfTable; --i)
    cout<<n<<"x"<<i<<"="<<n*i<<endl;
    return 0;
}