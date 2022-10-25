/*Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

Input Format
Constraints
2 < N <= 1000000000

Output Format
Sample Input
3
Sample Output
Prime
Explanation
The output is case specific.*/
#include<iostream>
using namespace std;
int main(){
	int n,i;
	bool flag=1;
	cin>>n;
	i=2;
	while(i<n){
		if(n%i==0){
			flag=0;
			break;
		}
		else{
			i++;
		}
		//cout<<"mot prime\n";
		
	}
	
	if(n<=0){
		flag=0;
	}
	if(flag==1){
		cout<<"Prime\n";
	}
	else{
		cout<<"Not Prime\n";
	}
}
