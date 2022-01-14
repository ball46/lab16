#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);  
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *A,int *B,int *C,int *D){
	int a[4];
	a[0] = *A , a[1] = *B , a[2] = *C , a[3] = *D;

	int b[4];

	int e = rand()% 4;
	b[0] = a[e];
	a[e] = 0;

	int f = 0;
	do{
		f = rand()%4;
	}while(a[f] == 0) ;
	b[1] = a[f];
	a[f] = 0;

	int g = 0;
	do{
		g = rand()% 4;
	}while(a[g] == 0) ;
	b[2] = a[g];
	a[g] = 0;

	int h = 0;
	do{
		h = rand()% 4;
	}while(a[h] == 0) ;
	b[3] = a[h];
	a[h] = 0;

	*A = b[0] , *B = b[1] , *C = b[2] , *D = b[3];
}

