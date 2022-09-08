#include <iostream>

using namespace std;

int main() {
    int a[10];
    int n,i,j,temp;
    cout<<"ënter the no of digits";
    cin>>n;
    for(i=0;i<n;i++)
      {
          cin>>a[i];
      }
      
      j=0;
      for(i=n;i>n/2;i--)
        {
            temp=a[i-1];
            a[i-1]=a[0+j];
            a[0+j]=temp;
            j++;
        }
        cout<<"the reversed array is";
        for(i=0;i<n;i++)
        cout<<a[i];
	return 0;
}
