/*
Carlos Cerna
Vers. 0.5.0
*/


signed char c;
signed int i;
signed int s1;
signed int u2 = 0;
signed int ui;


int main(int argc, char** argv, char** envp) {
	signed int x;
	signed int y;


	s1 = esp + 12;
	i = 3;
	x = i * 3;
	u2 = x + 6;
	ui = s1 + 15;
	c = 5;
	y = 0;

	while (x == 0) {
		u2 = y + 1;
		x = x - c;	
	}
	if (x == i) {
		ui = c + u2 * 4 + 45;
	}
	else {
		i = (x + y) - c;
	}

	return 0;
}