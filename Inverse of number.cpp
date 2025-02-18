Take the following as input.
A number
Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number.

Write a function that returns its inverse, where inverse is defined as follows

/*Inverse of 32145 is 12543. In 32145, �5� is at 1st place, therefore in 12543, �1� is at 5th place; in 32145, �4� is at 2nd place, therefore in 12543, �2� is at 4th place.

Print the value returned.

Input Format
Integer

Constraints
0 < N < 1000000000

Output Format
Integer

Sample Input
32145
Sample Output
12543
Explanation
Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number. Inverse of 32145 is 12543. In 32145, �5� is at 1st place, therefore in 12543, �1� is at 5th place; in 32145, �4� is at 2nd place, therefore in 12543, �2� is at 4th place.*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=0,opos=1,odig,invdig,ipos,inv=0;
	while(n!=0){
		 odig=n%10;
	     invdig=opos;
		 ipos=odig;
		 inv=inv+invdig*pow(10,ipos-1);
	n=n/10;	
	opos++;
	}
	cout<<inv<<endl;
	
}

