/*Take sb (source number system base), db (destination number system base) and sn (number in source format). Write a function that converts sn to its counterpart in destination number system. Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
8
2 
33
Sample Output
11011
Explanation
All input output is as integers and in separate lines.*/
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
     int n1,n2;
     cin>>n1>>n2;
     long number=0,num;
     int x=0;
     cin>>num;

     while(num>0)
     {
          int digit=num%10;
          num/=10;
          number+=pow(n1,x)*digit;
          x++;
     }
     //cout<<number<<"\n";
     int a[number],i=0;

     while(number>0)
     {
          a[i]=number%n2;
          i++;
          number/=n2;
     }
     i--;
     for(;i>=0;i--)
          cout<<a[i];
}
