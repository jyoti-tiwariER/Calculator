#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    char x;
    cout<<"Enter number one"<<endl;
    cin>>num1;
    cout<<"Enter number two"<<endl;
    cin>>num2;
cout<<"press a for addition"<<endl;
cout<<"press b for subtraction"<<endl;
cout<<"press c for multipication"<<endl;
cout<<"press d for division"<<endl;
cout<<"press e for remainder"<<endl;
cin>>x;
if(x=='a')
cout<<"The sum is="<<num1+num2<<endl;
else if(x=='b')
cout<<" The subtraction is="<<num1-num2<<endl;
else if(x=='c')
cout<<" The multipication is="<<num1*num2<<endl;
else if(x=='d')
cout<<" The division is="<<num1/num2<<endl;
else if(x=='e')
cout<<" The remainder is="<<num1%num2<<endl;
else
cout<<"invalid operation"<<endl;
    
return 0;

}