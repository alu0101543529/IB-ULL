#include "reverse_string.h"

namespace reverse_string {
	std::string reverse_string (std::string word) {
		std::string reversed_word;
    for(int i = word.size()-1; i >= 0; i--) {
        reversed_word += word[i];
		}
		return reversed_word;
	}
}  // namespace reverse_string
