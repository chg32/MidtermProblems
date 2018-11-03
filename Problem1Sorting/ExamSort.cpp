/*
 * ExamSort.cpp
 *
 *  Created on: Nov 2, 2018
 *      Author: chg32
 */
#include "ExamSort.h"
void ExamSort::examSort(int *x, int y){
	a = x;
	size = y;
}
void ExamSort::Sort(){
	for(int i = 1; i < size; i++){
		int j = i;
		while(j>0){
			if(a[j]<a[j-1]){
			int holster = 0;
			holster = a[j];
			a[j] = a[j-1];
			a[j-1] = holster;
			j--;
			}else if (a[j-1] == a[j]){
				j--;
			}
		}
	}
}
void ExamSort::print(){
	cout<<"Printed Array:  {";
	for( int i = 0; i< size; i++){
		cout<<a[i];
		if(i<size-1){
			cout<<", ";
		}
	}
	cout<<"}\n";
}

