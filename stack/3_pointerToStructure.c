#include<stdio.h>

//using struct With typedef, relatively easy later
//typedef struct{
//	int x;
//	int y;
//}Point;

//With struct directly, reference later with struct Point p1;
struct Point{
	int x;
	int y;
};

int main(){
	
	struct Point p1;
	p1.x=3;
	p1.y=2;
	printf("p1=(%d,%d) \n", p1.x,p1.y);
	
	struct Point *p2;
	p2= &p1;
	(*p2).x=5;
	(*p2).y=6;
	printf("p2=(%d,%d) \n", p2->x,p2->y);
	printf("p1=(%d,%d) \n", p1.x,p1.y);
	
	
//	printf("p2=(%d,%d) \n", p2.x,p2.y);
}
