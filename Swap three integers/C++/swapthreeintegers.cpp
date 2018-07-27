#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter three nos."<<endl;
cin>>a>>b>>c;
a=a^b^c;
b=a^b^c;
c=a^b^c;
a=a^b^c;
cout<<"The swapped nos. are "<<a<<" "<<b<<" "<<c;
return 0;
}
