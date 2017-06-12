#include "stdafx.h"
#include "Text.h"
#include <sstream>



namespace Racing{

	Text::Text(std::string body)
	{
		std::string buf; // Have a buffer string
		std::stringstream ss(body); // Insert the string into a stream
		while (ss >> buf)
			mWords.push_back(Word(buf));
	}


	Text::~Text()
	{
	}
}