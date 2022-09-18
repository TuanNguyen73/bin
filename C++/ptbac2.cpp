#include<iostream>
#include<math.h>
using namespace std;

void nhap(){
	float a,b,c;
	cout<<"Moi ban nhap so a:";
	cin>>a;
	cout<<"Moi ban nhap so b:";
	cin>>b;
	cout<<"Moi ban nhap so c:";
	cin>>c;
}
 int ptbac2(float a, float b, float c,float &x1, float &x2){
	float delta;
	delta = b*b-4*a*c;
	if(a<0){
		cout<<"Khong phai phuong trinh bac 2!";
	}
	if(a>0){
		if(delta<0){
			return 0;
		}
		else if(delta==0){
			x1=x2= -b/(2*a);
			return 1;
		}
		else{
			x1= ((-b + sqrt(delta)) / (2*a));
			x2= ((-b - sqrt(delta)) / (2*a));
			return 2;	
		}
	}
}
int main(){
	float a,b,c;
	float x1,x2;
	nhap();
	int number = ptbac2(a,b,c,x1,x2);
	if(number == 0){
		cout<<"Phuong trinh vo nghiem";
	}
	if(number == 1){
		cout<<"Phuong trinh co nghiem kep la x"<<x1;
	}
	else{
		cout<<"Phuong trinh co 2 nghiem la x1="<<x1<<"va x2="<<x2;
	}
	return 0;
}