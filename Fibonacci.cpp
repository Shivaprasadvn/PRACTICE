#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<< "Enter a number to print fibonacci series\n"<<endl;
    cin>>n;
    int a[n];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<< "->";
    }
    return 0;
}


/*Using recursion function to generate fibonacci series

#include<iostream>
using namespace std;
int fib(int n)
{
    int i;
    if(n==1)
       return 0;
    else if(n==2)
        return 1;
    else
    {
        i=fib(n-1)+fib(n-2);
        return i;
    }
}
int main()
{
    int n,f;
    cout<< "Enter any number\n";
    cin >> n;
    f=fib(n);
    cout<<f;
    return 0;
}*/
