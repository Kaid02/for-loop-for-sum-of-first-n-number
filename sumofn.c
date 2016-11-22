/*
Student name : Kabir Shrestha
Subjeect : Programming Fundamental
Lab No. : 16
Program : Write a program to find sum of first n natural number.
Date : 2016-11-22
*/
#include<stdio.h>
#include<conio.h>
	int main (){
		int a,i=0,sum=0;
		
		printf("\nEnter a number : ");
		scanf("%d",&a);
		
		for(i=0;i<=a;i++){
			sum+=i;
		}
			printf("\nThe sum of the number is :%d\n",sum);
		
		getch();
	}

