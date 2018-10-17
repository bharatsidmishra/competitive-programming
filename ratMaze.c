#include<stdio.h>
#define size 4
void print(int solution[size][size]) {
	for(int i =0; i< size; i++) {
		for(int j =0; j <size; j++) 
			printf("%d",solution[i][j]);
		printf("\n");
	}
}
int isSafe(int maze[size][size],int x, int y) {
	return (x <= size-1 && y <= size-1 && maze[x][y] == 1 ); 
}


int ratM(int maze[size][size], int  x, int  y, int solution[size][size]) {
	if(isSafe(maze, x, y)) {
			(ratM(maze , x+1 , y, solution) || ratM(maze, x, y+1,solution));
			 solution[x][y] =1;
			 return 1;
		}
		return 0;
}





int ratMaze(int maze[size][size]) {
	int solution[size][size] ={{0,0,0,0},
				{0,0,0,0},
				{0,0,0,0},
				{0,0,0,0}};
	if(ratM(maze, 0, 0, solution)) {
		print(solution);
		}
}
int main() {
	int maze[size][size] = {{1, 1, 0, 1},
				{1 ,1, 1, 0},
				{0 , 1, 1,1},
				{1,0,0, 1}};
	ratMaze(maze);
	return 0;
}
