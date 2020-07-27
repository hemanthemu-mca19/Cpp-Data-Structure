#include <iostream>
#include <cstdio>
using namespace std;

struct card{
	int face;
	int color;
	int shape;
};

int main(){
	struct card c = {1, 0, 0};
	cout << c.color << endl;
	cout << c.face << endl;
	cout << c.shape << endl;
	
	struct card deck[52] = { {1, 0, 0}, {2, 0, 0} };
	cout << deck[1].face << endl;
	
	deck[5] = {5, 0, 0};
	cout << deck[5].face; 
	return 0;
}
