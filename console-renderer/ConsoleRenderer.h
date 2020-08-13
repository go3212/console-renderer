#pragma once

#include <Windows.h>
#include <iostream>

class ConsoleRenderer
{
public:
	ConsoleRenderer();

private:

	short ConsoleWidth;
	short ConsoleHeight;
	HANDLE display_buffer = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);

};

