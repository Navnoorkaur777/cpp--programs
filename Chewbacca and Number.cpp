/*Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input Format
The first line contains a single integer x (1 = x = 10^18) — the number that Luke Skywalker gave to Chewbacca.

Constraints
x <= 100000000000000000

Output Format
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

Sample Input
4545
Sample Output
4444
Explanation
There are many numbers form after inverting the digit. For minimum number, check if inverting digit is less than or greater than the original digit. If it is less, then invert it otherwise leave it.*/
#include<iostream>
#include<cstring>
using namespace std;
int changedig(char t){
	return '9'-t+'0';
}
 int main(){
 	char x[20],y;
 	cin>>x;
// 	bool flag=false;
 	for(int i=0;i<strlen(x);i++){
 		if(i==0){
		    if(x[i]=='9')
 			continue;
		 }
		 y=changedig(x[i]);
		 if(x[i]>y){
		 	x[i]=y;
		 }
	 }
	 cout<<x<<endl;
 }
