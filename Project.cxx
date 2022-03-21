#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"\t Program Created By Sirajju";
cout<<"\n Program to find the gratest number of three numbers"
cin>>a>>b>>c;
cout<<"\n Enter the first number";
cin>>a;
cout<<"\n Enter the second number";
cin>>b;
cout<<"\n Enter the third number";
cin>>c;
if (a>b&&b>c)
cout<<a<<"is large \n";
else if (b>c&&b>a)
cout<<b<<"is large \n";
else
cout<<c<<"is large";
return 0;
}
