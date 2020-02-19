/*
Carlos Cerna
Vers. 0.5.0
*/
#include <stdio.h>

signed int i = 8;
signed int k = 1;
signed int m;
short o = 7;

void trace_me(int param1, int param2);


signed int j = 0;

int main(int argc, char** argv, char** envp) {

	m = 2;
	trace_me(m, 1);
	return 0;
}


void  trace_me(int param1, int param2) {
	signed char n;

	n = param2 + 3;
	k = k + 1;
	/*recursive call*/
	trace_me(o, i);
	//i = o + i;
	m = k - n;

	if (param1 != 0) {
		return 0;
	}

	printf("m:{%d},k:{%d},j:{%d},i:{%d}", m, k, j, i);

	return 0;
}
