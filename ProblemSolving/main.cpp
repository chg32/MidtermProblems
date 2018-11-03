/*
 * main.cpp
 *
 *  Created on: Nov 2, 2018
 *      Author: chg32
 */
#include <iostream>
using namespace std;

void main() {
	int a[] = {4,5,6,7,8,1,2,3};
	cout<<problemThree(a*, 4)<<endl;
	cout<<problemThree(a*, 3)<<endl;
	cout<<problemThree(a*, 7)<<endl;
}
int problemThree(int* a, int x){
	int l = sizeof(a);
	int m = l/2;
	int min = 0;
	int max = l-1;
	bool isThere;
	isThere == search(a, min, max, m, x);

	return(0);
}
bool search(int* a, int min, int max, int m, int x){
	if(x>m){
		min = m+1;
		for(int i = min; i<=max; i++){
			if(x = a[i]){
				return(1);
			}else{
				return(0);
			}
		}
	}else if(x<m){
		max = m-1;
				for(int i = min; i<=max; i++){
					if(x = a[i]){
						return(1);
					}else{
						return(0);
					}
				}
	}else{
		return(1);
	}
}


