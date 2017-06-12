#pragma once
#include <string>
#include <iostream>
namespace Racing{
	class Word
	{
		std::string mBody;
	public:
		Word(std::string body);
		virtual ~Word();
		std::string GetBody (void);
		friend std::ostream& operator<<(std::ostream& os, const Word& word);

	};
}