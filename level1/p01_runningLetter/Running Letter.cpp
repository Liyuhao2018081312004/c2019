#include <iostream>
#include<bits/stdc++.h>
#include<windows.h> 
using namespace std;

const int length=100;;
char a[length],put; 
int step;

void move(){
	Sleep(10);
	system("cls");
	for(int i=1;i<=100;i++){
		if(i==step){
			printf("%c",a[i]);
		}else{
			printf(" ");
		}
	}
}

void go(){
	for(step=1;step<=100;step++){
		move(); 
	} 
	for(step=100;step>=1;step--){
		move();
	} 
}

int main(int argc, char** argv) {
	scanf("%c",&put);
	for(int i=1;i<=100;i++)a[i]=put;
	for(int i=1;;i++)go();
	return 0;
}
