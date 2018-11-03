/*
 * main.cpp
 *
 *  Created on: Nov 2, 2018
 *      Author: chg32
 */
#include <iostream>
#include "ExamSort.cpp"
using namespace std;

int main(){
int array[] = {12, 15, 4 ,9, 1, 60, 44, 1 ,12, 4};
int s = sizeof(array);
ExamSort test(*array, s);
test.Sort();
test.print();
return(0);
}



