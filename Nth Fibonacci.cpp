/*Take N as input. Print Nth Fibonacci Number, given that the first two numbers in the Fibonacci Series are 0 and 1.

Input Format
Constraints
0 <= N <= 1000

Output Format
Sample Input
10
Sample Output
55
Explanation
The 0th fibonnaci is 0 and 1st fibonnaci is 1.*/
#include<iostream>
using namespace std;
int main(){
	int i,n,a=0,b=1,c;
	cin>>n;
	for(i=2;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c<<endl;
	
}
