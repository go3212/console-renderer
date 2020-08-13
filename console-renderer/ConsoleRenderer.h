#pragma once

#include <Windows.h>
#include <iostream>

class ConsoleRenderer
{
public:
	ConsoleRenderer();
	void setSize(short width, short height);

private:
	short ConsoleWidth;
	short ConsoleHeight;
	SMALL_RECT rect;

	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
};

