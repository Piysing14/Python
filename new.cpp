#include<iostream>
using namespace std;

int main()

{
    int A[100],i,sum=0,n;
    cout<<"enter how many numbers you want average of :\n";
    cin>>n;
    cout<<"Enter the "<<n<<"numbers";

    for ( i = 0; i < n; i++)
    {
        cin>>A[i];
        sum+=A[i];
    }
    cout<<"SUM IS :"<<sum;
    
    return 0;
}