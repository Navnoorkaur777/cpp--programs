/*Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
63
Sample Output
77
Explanation
Both input and output are integers*/
#include<iostream>
#include<cmath>
using namespace std;
void decinoct(int n){
	int oct[100];
	int i=0;
	while(n!=0){
		oct[i]=n%8;
		n=n/8;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		cout<<oct[j];
	}
}
int main(){
	int n;
	cin>>n;
	decinoct(n);
	
	
}
