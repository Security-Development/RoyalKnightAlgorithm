#include <stdio.h> 

int main() {
	
	int x, y, result = 0, size = 8;
	int move[8][2] = {
		{-2, -1},
		{-2, 1},
		{2, -1},
		{2, 1},
		
		{-1, -2},
		{1, -2},
		{-1, 2},
		{1, 2},
	};
	
	char input[2];
	
	scanf("%2s", &input); //scanf 취약점 보완
	x = input[1] - 48;
	y = input[0] - 96;
	//1 , 1
	
	for(int i = 0; i < 8; i++) {
		int mX, mY;
		mX = x + move[i][1]; //  
		mY = y + move[i][0];
		
		printf("[%d] mX => %d\n", i, mX);
		printf("[%d] mY => %d\n\n", i, mY);
		
		if( mX >= 1 and mX <= 8 and mY >= 1 and mY <= 8)
			result += 1;
	}
	
	printf("[result] => %d", result);
		
	return 0;
	
}
