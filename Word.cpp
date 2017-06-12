#include "stdafx.h"
#include "Word.h"

namespace Racing{
	Word::Word(std::string body)
	{
		this->mBody = body + " ";
	}
	

	Word::~Word()
	{
	}
	
	
	std::string Word::GetBody() {
		return this->mBody;
	}


	std::ostream & operator<<(std::ostream & os, const Word & word)
	{
		os << word.mBody;
		return os;
	}
}