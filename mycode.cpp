#include<iostream>
#include"mycode.h"

#include<stdlib.h>
using namespace std;



void MATRIX:: display(){
		for(int i=0;i<row;i++){
			for(int j=0;j<coln;j++){
				cout<<matrix[i][j]<<"   ";			
			}
			cout<<endl;	
		}	
	}

void MATRIX:: subtract(MATRIX first, MATRIX second){
		for(int i=0;i<row;i++){
			for(int j=0;j<coln;j++){
				matrix[i][j]=first.matrix[i][j]-second.matrix[i][j];		
			}
		}
	}

void MATRIX:: add(MATRIX first, MATRIX second){
		for(int i=0;i<row;i++){
			for(int j=0;j<coln;j++){
				matrix[i][j]=first.matrix[i][j]+second.matrix[i][j];		
			}
		}
	}


void MATRIX:: multiply(MATRIX first, MATRIX second){
		for(int i=0;i<row;i++){
			for(int j=0;j<coln;j++){
				matrix[i][j]=0;
				for(int k=0;k<coln;k++){
					matrix[i][j]+=first.matrix[i][k]*second.matrix[k][j];
				}			
			}		
		}		
	}
