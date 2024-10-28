#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int main()
{
   int t,a,b,c,x,p;
   cin >> t;
   for(int i=0;i<t;i++)
   {
      cin >> a >> b >> c;
      if(a==b)
      {c=c+5;}
      if(b==c)
      {a=a+5;}
      if(a==c)
      {b=b+5;}

      if(a!=b && b!=c && c!=a)
      {x=(b-a+5)/2;
      a=a+x;
      b=b+5-x;}
      p=a*b*c;
    cout <<  p << endl;
   }
}