/*
Carlos Cerna
Vers. 0.5.0
*/
#include <stdio.h>

signed int y;
signed int x = 0;

int main(int argc, char** argv, char** envp) {
	signed int j;
	signed int i;
	
	i = 20;

	//$LN4 begins
	while (i != 30) {

		x = (i * y) + 33;

		if (x == 20) {
			//jump to $LN5
			j = x + 2;
		}
		j = x;
		//jump to $LN6
			//jump back to $LN2
		i++;
	}

	//$LN1
	return 0;
}