#include <iostream>
using namespace std;
int Sum(int a,int b,int sum)
{
  return sum = a + b;
}
int main()
{
  int a,b,sum;
  cout<<"Enter two number"<<endl;
  cin>>a>>b;
  sum = Sum(a,b,sum);
  cout<<"Sum: "<<sum<<endl;
}
