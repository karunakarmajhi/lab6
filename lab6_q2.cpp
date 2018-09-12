//library
#include<iostream>
using namespace std;
//initialization of variables
int byvalue(int a,int b)
//process
{int c= a+b;
return c;
}
//void function
void byreference(int a,int b,int &sum)
{sum= byvalue(a,b);
cout<<sum;}
//main function
int main(){
int a,b,sum=0;
cout<<"enter the numbers"<<endl;
cin>>a>>b;
byvalue(a,b);
byreference(a,b,sum);
return 0;
}
