#include<iostream>
using namespace std;
int main()
{
    int donate,sum=0,cont=0;
    while(sum<5000)
    {cout<<"What the Value you want to donate ";
    cin>>donate;
    sum+=donate;
    cont++;}
    cout<<"Sum Value="<<sum<<endl;
    cout<<"No. Donaters"<<cont<<endl;
    system("PAUSE");
    return 0;
}
    
