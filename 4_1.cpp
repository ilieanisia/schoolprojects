#include<iostream>
using namespace std;
int n;
int main()
{
   cout<<"N=";cin>>n;
   int divizor=2;
   int putere;
   while (n>1)
        {
       putere=0;
       while (n%divizor==0) {
                              n=n/divizor;
                              putere=putere+1;
                            }
      if (putere>0)  { cout<<divizor<<"^"<<putere<<" * ";}
      divizor=divizor+1;
        }
  cout<<"1";
  int s;
  int numar;
  cout<<"numar="; cin>>n;
  for(divizor=1;divizor<=n/2;)
  if(n%divizor==0)
     s=s+divizor;
  if(n==s) {cout<<"numarul"<<n<<"Este perfect"}
    else{cout<<"numarul"<<n<<"Nu este perfect"}

  return 0;}
