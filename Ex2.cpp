#include <iostream>
using namespace std;

int main()
{
   
    int n;
    bool bornInf;
    bool bornSup;
    do{
      
    cout<<"Enter a positive integer less than 70: ";
    cin>>n;
    bornInf=n<=0;
    bornSup=n>=70;
    if(bornInf)
    {
        cout<<"Your number is less than or equal to 0!";
    }
    if(bornSup)
    {
        cout<<"You number is greater than or equal to 70!";
    }

    } while(bornInf|| bornSup);
    for (int i=10; i>=0; --i)
    cout<<n<<"x"<<i<<"="<<n*i<<endl;
    return 0;
}