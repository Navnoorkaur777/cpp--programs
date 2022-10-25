Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.

Input Format
/*The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.

Constraints
N<=1000 Digits in binary representation is <=16.

Output Format
N lines,each containing a decimal equivalent of the binary number.

Sample Input
4
101
1111
00110
111111
Sample Output
5
15
6
63
Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.*/
#include<iostream>
#include<cmath>
int convert(long int n){
	int sum=0,i=0,rem;
	while(n!=0){
	    rem=n%10;
		n/=10;
		sum=sum+rem*pow(2,i);
		++i	;
	}
	return sum;
}
using namespace std;
int main(){
	 int t;
	// cout<<"enter test cases\n";
	 cin>>t;
	 while(t>0){
	 	int num;
	 	cin>>num;
	 	cout<<convert(num);
	 	cout<<endl;
         t--;
    }
	
}
