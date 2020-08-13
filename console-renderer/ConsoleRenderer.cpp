#include "ConsoleRenderer.h"

ConsoleRenderer::ConsoleRenderer() 
{
	ConsoleWidth = 100;
	ConsoleHeight = 50;

	//SMALL_RECT rect
	rect.Bottom = ConsoleHeight - 1;
	rect.Left = 0;
	rect.Top = 0;
	rect.Right = ConsoleWidth - 1;

	SetConsoleActiveScreenBuffer(hConsole);

	SetConsoleScreenBufferSize(hConsole, { ConsoleWidth, ConsoleHeight });
	SetConsoleWindowInfo(hConsole, TRUE, &rect);
}

void ConsoleRenderer::setSize(short width, short height)
{
	rect.Bottom = width - 1;
	rect.Right = height - 1;

	SetConsoleScreenBufferSize(hConsole, { width, height });
	SetConsoleWindowInfo(hConsole, TRUE, &rect);
}