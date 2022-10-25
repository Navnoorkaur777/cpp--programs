/*Take N as input, Calculate it's reverse also Print the reverse.

Input Format
Constraints
0 <= N <= 1000000000

Output Format
Sample Input
123456789
Sample Output
987654321
Explanation
You've to calculate the reverse in a number, not just print the reverse.*/
#include<iostream>
using namespace std;
int main(){
	long int n;
	int r,sum=0;
	//cout<<"enter number\n";
	cin>>n;
	while(n!=0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
		
	}
	cout<<sum;
}
