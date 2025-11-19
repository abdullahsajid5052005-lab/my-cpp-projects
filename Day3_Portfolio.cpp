#include<iostream>
using namespace std;

/*int main()
{
    int N = 45;

    int sum = 0;
    for(int i=1;i<=N;i++)
    {
       sum = sum + i;
    }

     cout<<sum;
    return 0;
}*/

/*int main()
{
    int N = 56;

    for(int i=1;i<=N;i++)
    {
        cout<<i<<" ";
    }

    return 0;
}*/

/*int main()
{
    int table = 2;

    for(int i=1;i<=10;i++)
    {
        cout<<table<<" x "<<i<<" = "<<table * i<<endl;
    }

     return 0;
}*/

/*int main()
{
    int N = 945;
    int reminder;
    int lastdigit = 0;

    while(N >0)
    {
        reminder = N % 10;
        N = N / 10;

        lastdigit = lastdigit + reminder;
    }

     cout<<"The sum is "<<lastdigit;

     return 0;
}*/

/*int main()
{
    int N = 3;

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            cout<<"* ";
        }
         cout<<endl;
    }

    return 0;
    
}*/

int fact(int n)
{    
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact = fact * i;
    }

    return fact;
}
int main()
{
    int n = 5;
    int r = 5;

     int f1 = fact(n);
     int f2 = fact(r);
     int f3 = fact(n-r);

     cout<<(f1/(f2*f3));

     return 0;
}