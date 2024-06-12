/*
#include<iostream>
#include <conio.h>
#include <dos.h>
#include<graphics.h>
using namespace std;
void f(){
	//background white
	setcolor(15);
	for(int i=0;i<getmaxx();i++){
		line(0+i,0,0+i,getmaxy());	
	};
}

void f1(){
	//bottom brown
	for (int i=0;i<getmaxx();i++){
		setcolor(4);
		line(0+i,getmaxy(),0+i,getmaxy()-100);	
	};
	
} 
void f2(){
	//clouds
	for(int i=0;i<getmaxx();i=(i+getmaxx()/8)){
		setcolor(9);
		for(int j=55;j>0;j--){
			circle(i,50,j);
		}
		delay(200);
	}
	
	
}
void f3(){
	//rain
	int q=50,w=75;
	for(int j=0;j<getmaxy()-120;j=j+10){
		for(int i=0;i<getmaxx();i=i+7){
			setcolor(1);
			line(0+i,q+j,0+i,w+j);
		}
		delay(50);
	};
	
	
}
void f4(){
	//tree
	for(int i=0;i<getmaxx();i=i+50){
		setcolor(2);
		for(int k=0;k<8;k++){
			line(0+i+k,getmaxy()-50,0+i+k,getmaxy()-125);
			line(20+i+k,getmaxy()-75,20+i+k,getmaxy()-150);
			
		}
		delay(100);
		
	};
}

void f5(){
	//leaves
	for(int i=0;i<getmaxx();i=i+50){
		setcolor(2);
		for(int k=0;k<20;k++){
			
			circle(4+i,getmaxy()-120,20-k);
		
			circle(24+i,getmaxy()-145,20-k);
			
			delay(5);
		}
		
		
	};
	
	
}
void f6(){
	// tree -color
		for(int i=0;i<getmaxx();i=i+50){
		setcolor(6);
		for(int k=0;k<8;k++){
			line(0+i+k,getmaxy()-50,0+i+k,getmaxy()-125);
			line(20+i+k,getmaxy()-75,20+i+k,getmaxy()-150);
			
		}
		delay(100);
		};
}

void f7(){
	//leaf bottom
		for(int i=0;i<getmaxx();i=i+50){
			setcolor(6);	
			for(int k=0;k<20;k++){
			
				circle(4+i,getmaxy()-70,25-k);
		
				circle(24+i,getmaxy()-95,25-k);
			
				delay(10);	
		}
};
	
}

void f8(){
		// short tree
	for(int i=0;i<getmaxx();i=i+50){
		setcolor(0);
		for(int k=0;k<8;k++){
			line(0+i+k,getmaxy()-50,0+i+k,getmaxy()-85);
			line(20+i+k,getmaxy()-75,20+i+k,getmaxy()-110);
			
		}
		delay(100);
		
	};
	
	
}

void b(){
	//back+
	f();
	f1();
	
}
void b1(){
	//rain+clo
	f2();
	f3();
	
}
void b2(){
	//tree+lev
	f4();
	f5();
	
}
void b3(){
	//tree++lev
	f4();
	f7();
}

void b4(){
	//col tree++lev
	f6();
	f7();
	
}
void b5(){
	//sh tree++lev
	f8();
	f7();
}


int main(){
	
	
	int gd=DETECT,gm,i,a;
	initgraph(&gd,&gm,NULL);
	b();
	b1();
	b();
	b2();
	b();
	b3();
	b();
	b4();
	b();
	b5();
	b();

	getch();
	return 0;
}
*/
