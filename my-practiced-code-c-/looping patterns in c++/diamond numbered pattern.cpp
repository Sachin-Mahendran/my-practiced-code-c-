#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
   for(int i=0;i<n;i++)
  {
      for(int k=0;k<(n-i)-1;k++)
      {
      cout<<" ";
      }
      for(int j=0;j<=i;j++)
      {
          cout<<j+1<<" ";
      }
      cout<<"\n";
  }
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<=i-1;j++)
      {
      cout<<" ";
      }
      for(int k=0;k<n-i;k++)
      {
          cout<<k+1<<" ";
      }
      cout<<"\n";
  }
   
}