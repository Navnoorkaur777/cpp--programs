/*Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
101010
Sample Output
42
Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.*/
#include<iostream>
#include<cmath>
using namespace std;
int bintodec(int num){
	int dec=0,i=0,rem;
	while(num!=0){
		rem=num%10;
		dec=dec+rem*pow(2,i);
		i++;
		num=num/10;
	}
	return dec;
}
int main(){
	int bin;
	//cout<<"enter a number\n";
	cin>>bin;
	int c=bintodec(bin);
	cout<<c;
	
}
