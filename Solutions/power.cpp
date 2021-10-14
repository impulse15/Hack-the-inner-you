#include<iostream>
using namespace std;
int power(int p,int n)
{
  if(n==0)
  {
    return 1;
  }
  else
  {
    return p*power(p,n-1);
  }
}
int main()
{
  int num,pow;
  cout<<"enter base";
  cin>>num;
  cout<<"enter exponent";
  cin>>pow;
  cout<<power(num,pow);
  return 0;
}
