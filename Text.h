#pragma once
#include <string>
#include <vector>
#include "Word.h"
namespace Racing {
	class Text
	{
	private:
		std::vector<Word> mWords;
	public:
		Text(std::string body);
		virtual ~Text();

		std::vector<Word> GetWords(void) { return mWords; }
	};
}