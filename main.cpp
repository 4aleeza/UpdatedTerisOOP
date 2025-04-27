#include <raylib.h>
#include "grid.h"
#include "blocks.cpp"
int main()
{
	Color darkBlue = { 44, 44, 127, 255 };
	InitWindow(300, 600, "Tetris OOP");
	SetTargetFPS(60);
	Grid grid = Grid(); //grid obj
	//grid.grid[0][0] = 1;
	//grid.grid[3][5] = 4;
	//grid.grid[17][8] = 7;
	OBlock block = OBlock();
	grid.Print();
	while (WindowShouldClose() == false)
	{
		BeginDrawing();
		ClearBackground(darkBlue);
		grid.Draw();
		block.Draw();
		EndDrawing();
	}
}
