//library
#include<iostream>
using namespace std;
//main function
int byvalue(int a,int b){
if(a<b)
return a;
else 
return b; 
}
//void function
void byreference(int a,int b,int &sum){
sum= byvalue(a,b);
cout<<"minimum="<<sum;
}
//main function
int main(){
int a,b,sum=0;
cout<<"enter the numbers"<<endl;
cin>>a>>b;
byvalue(a,b);
byreference(a,b,sum);
return 2312;
}
