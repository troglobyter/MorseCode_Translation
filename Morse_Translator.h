#include "binary_tree.h"
#include "priority_queue.h"

using namespace std;

class Morse_Translator{

	public:
		void make_queue_tree(const istream& inStream);
		string letter_to_Morse(const char x);
		char Morse_to letter(const string& dots_dashes);

	private:
		priority_queue<char, std::vector<char>, std::greater<char>> letter_queue;
		binary_tree<char> Morse_tree;
		void make_Morse_tree(const string& dot_dash_str);
		void make_letter_queue(const char letter);
};
