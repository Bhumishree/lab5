#include<iostream>
using namespace std;
int main(){
//declaring variables
int a,b,c;
//asking user for the variables
cout <<"the three numbers are:";
cin >>a>>b>>c;
//conditions
if (a>b and a>c){
//returning value
cout <<"the greatest number is:"<<a;
}
else if (b>a and b>c){
//returning value
cout <<"the greatest number is:"<<b;
}
else {(c>a and c>b);
//returning value
cout <<"the greatest number is:"<<c;
}
return 0;
}
