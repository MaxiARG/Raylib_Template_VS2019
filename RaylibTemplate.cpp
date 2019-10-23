#include "raylib.h"
#include <iostream>

int main(int argc, char* argv[])
{
	int screenWidth = 800;
	int screenHeight = 450;
	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
	SetTargetFPS(60);
	std::cout << "Hola mundo" << std::endl;

	while (!WindowShouldClose())   
	{

		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
		EndDrawing();
	}
	CloseWindow();      
	return 0;
}