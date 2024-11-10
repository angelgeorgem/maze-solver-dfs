#include <stdio.h> 
#define ROWS 4 
#define COLS 4 
  
int directions[4][2] = { 
	{-1, 0},{1, 0}, {0, 1}, {0, -1}   
}; 
int is_valid(int x, int y, int maze[ROWS][COLS], int visited[ROWS][COLS]) { 
	return (x >= 0 && x < ROWS && y >= 0 && y < COLS && maze[x][y] != 1 && !visited[x][y]); 
} 
  
void print_path(int path[][2], int path_len) { 
	for (int i = 0; i < path_len; i++) { 
    	printf("(%d, %d)", path[i][0], path[i][1]); 
    	if (i < path_len - 1) { 
        	printf(" -> "); 
    	} 
	} 
	printf("\n"); 
} 
 void dfs(int maze[ROWS][COLS], int startX, int startY, int goalX, int goalY) { 
	int stack[ROWS * COLS][2];   
	int top = -1;       
	int visited[ROWS][COLS] = {0};   
	int path[ROWS * COLS][2];   
	int path_len = 0;       
   
	stack[++top][0] = startX; 
	stack[top][1] = startY; 
	visited[startX][startY] = 1; 
  
    	while (top >= 0) { 
         	int x = stack[top][0]; 
         	int y = stack[top--][1]; 
         	path[path_len][0] = x; 
         	path[path_len][1] = y; 
         	path_len++; 
            	if (x == goalX && y == goalY){ 
                       	print_path(path, path_len); 
                       	return; 
    	} 
 
    	for (int i = 0; i < 4; i++) { 
        	int newX = x + directions[i][0]; 
        	int newY = y + directions[i][1]; 
  
        	if (is_valid(newX, newY, maze, visited)) { 
            	visited[newX][newY] = 1; 
            	stack[++top][0] = newX; 
            	stack[top][1] = newY; 
        	} 
    	} 
	} 
	printf("No path found.\n"); 
} 
 int main() { 
	int maze[ROWS][COLS] = { 
    	{0, 1, 1, 0}, 
    	{0, 0, 0, 1}, 
    	{1, 1, 0, 1}, 
    	{0, 1, 0, 0} 
	}; 
	dfs(maze, 0, 0, 3, 3); 
	return 0; 
} 
