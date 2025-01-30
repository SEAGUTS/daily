 #include <iostream>
 using namespace std;
 const double PI =3.14;
 int main(){
     float r,a,c;
     cout<<("enter radius:");
     cin>>r;
     a=PI*r*r;
     c=2*PI*r;
     cout<<("the area of the circle is:")<<a<<endl;
     cout<<("the circumfernce of circle is:")<<c<<endl;
     return 0;    
 }