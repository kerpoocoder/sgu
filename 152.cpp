//code by kerpoo
#include<bits/stdc++.h>
using namespace std;
const double EPS=1e-9;
int arr[10003],sum,n;
double flag;
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
    cin>>arr[i],sum+=arr[i];
  for(int i=1;i<=n;i++)
    flag+=(double)(arr[i]*100%sum)/(double)sum;
  for(int i=1;i<=n;i++)
    if(abs(flag)>EPS && ((arr[i]*100)%sum)!=0)
      flag-=1.0,cout<<arr[i]*100/sum+1<<" ";
    else
      cout<<arr[i]*100/sum<<" ";
  return 0;
}
