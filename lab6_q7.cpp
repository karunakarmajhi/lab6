//library
#include<iostream>
using namespace std;
//declaration
char to_upper(char lower_case,char upper_case)
{
upper_case=lower_case-32;
return upper_case;
}
char to_lower(char upper_case,char lower_case)
{
lower_case=upper_case+32;
return lower_case;
}
//main function
int main(){
char ch,alp,result;
cout<<"enter any alphabet"<<endl;
cin>>ch;
if(ch>='a' &&ch<='z')
{
result=to_upper(ch,alp);
cout<<"uppercase character is"<<result<<endl;
}
else
{
result= to_lower(ch,alp);
cout<<"lowercase character is"<<result<<endl;
}
return 0;
}
