// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Text.h"
#include <iostream>
#include <windows.h>
#include <conio.h>



static void	InputWord(Racing::Word word) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	std::string buffer;
	bool correctSoFar = true;
	char ch = '\n';
	int i = 0;
	while (buffer != word.GetBody()) {
		ch = getch();
		if (ch == '\n') {

		} else if (ch == '\b') {
			if (i > 0) {
				std::cout << '\b' << " " << '\b';
				buffer.pop_back();
				i--;
			}
		} else {
			buffer.push_back(ch);
			if (buffer.length() <= word.GetBody().length()) {
				correctSoFar = true;
				for (unsigned int j = 0; j < buffer.length(); j++) {
					if (buffer[j] != word.GetBody()[j]) {
						correctSoFar = false;
					}
				}
			}
			else {
				correctSoFar = false;
			}
			if (correctSoFar)
				SetConsoleTextAttribute(hConsole, 10);
			else
				SetConsoleTextAttribute(hConsole, 12);
			std::cout << ch;
			i++;
		}
	}
}



int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	Racing::Text myText("This is the sample.");

	int i = 0;
	char ch('0');
	std::cin >> std::noskipws; //don't skip whitespaces
	for each (Racing::Word word in myText.GetWords ())
	{
		std::cout << word << std::endl;
	}
	for each (Racing::Word word in myText.GetWords())
	{
		InputWord(word);
	}

    return 0;
}

