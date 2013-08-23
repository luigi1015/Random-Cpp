#include <vector>
#include <random>
#include <functional>

namespace RNG
{//RNG for Random Number Generator
	unsigned long generateNumber( unsigned long min, unsigned long max )
	{//Generate and returns a single random unsigned long between min and max.
		std::uniform_int_distribution<unsigned long> uid(min, max);
		std::random_device rd;
		std::mt19937 generator(rd());
		
		return uid(generator);
	}

	std::vector<unsigned long> generateNums( unsigned long min, unsigned long max, unsigned long length )
	{//Generate length number of random unsigned longs between min and max. Returns a vector of the random unsigned longs.
		std::vector<unsigned long> nums;
		
		for( unsigned long i = 0; i < length; i++ )
		{//Add length number of random integers by calling generateNumber length times.
			nums.push_back(  generateNumber(min, max) );
		}
		
		return nums;
	}

	std::vector<char> generateHexVector( unsigned long length )
	{//Generate length number of random chararcters from the groups 0...9 and A...F according to their hex values. Returns a vector of the characters.
		std::vector<char> hexValues;//Vector to hold the possible hex values.
		std::vector<char> hexChars;//Vector of the random hex characters.

		//Populate the possible hex values.
		hexValues.push_back('0');
		hexValues.push_back('1');
		hexValues.push_back('2');
		hexValues.push_back('3');
		hexValues.push_back('4');
		hexValues.push_back('5');
		hexValues.push_back('6');
		hexValues.push_back('7');
		hexValues.push_back('8');
		hexValues.push_back('9');
		hexValues.push_back('A');
		hexValues.push_back('B');
		hexValues.push_back('C');
		hexValues.push_back('D');
		hexValues.push_back('E');
		hexValues.push_back('F');

		for( unsigned long i = 0; i < length; i++ )
		{//Add length number of random hex characters by calling generateNumber length times and passing it through hexValues.
			hexChars.push_back(  hexValues.at(generateNumber(0, hexValues.size()-1)) );
		}
		
		return hexChars;
	}

	std::vector<char> generateAlphaNumericVector( unsigned long length )
	{//Generate length number of random chararcters from the groups 0...9 and A...Z and a...z. Returns a vector of the characters.
		std::vector<char> alphaNumericValues;//Vector to hold the possible hex values.
		std::vector<char> alphaNumericChars;//Vector of the random hex characters.

		//Populate the possible hex values.
		alphaNumericValues.push_back('0');
		alphaNumericValues.push_back('1');
		alphaNumericValues.push_back('2');
		alphaNumericValues.push_back('3');
		alphaNumericValues.push_back('4');
		alphaNumericValues.push_back('5');
		alphaNumericValues.push_back('6');
		alphaNumericValues.push_back('7');
		alphaNumericValues.push_back('8');
		alphaNumericValues.push_back('9');
		alphaNumericValues.push_back('A');
		alphaNumericValues.push_back('B');
		alphaNumericValues.push_back('C');
		alphaNumericValues.push_back('D');
		alphaNumericValues.push_back('E');
		alphaNumericValues.push_back('F');
		alphaNumericValues.push_back('G');
		alphaNumericValues.push_back('H');
		alphaNumericValues.push_back('I');
		alphaNumericValues.push_back('J');
		alphaNumericValues.push_back('K');
		alphaNumericValues.push_back('L');
		alphaNumericValues.push_back('M');
		alphaNumericValues.push_back('N');
		alphaNumericValues.push_back('O');
		alphaNumericValues.push_back('P');
		alphaNumericValues.push_back('Q');
		alphaNumericValues.push_back('R');
		alphaNumericValues.push_back('S');
		alphaNumericValues.push_back('T');
		alphaNumericValues.push_back('U');
		alphaNumericValues.push_back('V');
		alphaNumericValues.push_back('W');
		alphaNumericValues.push_back('X');
		alphaNumericValues.push_back('Y');
		alphaNumericValues.push_back('Z');
		alphaNumericValues.push_back('a');
		alphaNumericValues.push_back('b');
		alphaNumericValues.push_back('c');
		alphaNumericValues.push_back('d');
		alphaNumericValues.push_back('e');
		alphaNumericValues.push_back('f');
		alphaNumericValues.push_back('g');
		alphaNumericValues.push_back('h');
		alphaNumericValues.push_back('i');
		alphaNumericValues.push_back('j');
		alphaNumericValues.push_back('k');
		alphaNumericValues.push_back('l');
		alphaNumericValues.push_back('m');
		alphaNumericValues.push_back('n');
		alphaNumericValues.push_back('o');
		alphaNumericValues.push_back('p');
		alphaNumericValues.push_back('q');
		alphaNumericValues.push_back('r');
		alphaNumericValues.push_back('s');
		alphaNumericValues.push_back('t');
		alphaNumericValues.push_back('u');
		alphaNumericValues.push_back('v');
		alphaNumericValues.push_back('w');
		alphaNumericValues.push_back('x');
		alphaNumericValues.push_back('y');
		alphaNumericValues.push_back('z');

		for( unsigned long i = 0; i < length; i++ )
		{//Add length number of random hex characters by calling generateNumber length times and passing it through hexValues.
			alphaNumericChars.push_back(  alphaNumericValues.at(generateNumber(0, alphaNumericValues.size()-1)) );
		}
		
		return alphaNumericChars;
	}

	std::vector<char> generateNonWhiteSpacePrintableVector( unsigned long length )
	{//Generate length number of random non-white space printable ascii chararcters. Returns a vector of the characters.
		std::vector<char> printableValues;//Vector to hold the possible printable values.
		std::vector<char> printableChars;//Vector of the random printable characters.

		//Populate the possible printable values.
		printableValues.push_back('!');
		printableValues.push_back('"');
		printableValues.push_back('#');
		printableValues.push_back('$');
		printableValues.push_back('%');
		printableValues.push_back('&');
		printableValues.push_back('\'');
		printableValues.push_back('(');
		printableValues.push_back(')');
		printableValues.push_back('*');
		printableValues.push_back('+');
		printableValues.push_back(',');
		printableValues.push_back('-');
		printableValues.push_back('.');
		printableValues.push_back('/');
		printableValues.push_back('0');
		printableValues.push_back('1');
		printableValues.push_back('2');
		printableValues.push_back('3');
		printableValues.push_back('4');
		printableValues.push_back('5');
		printableValues.push_back('6');
		printableValues.push_back('7');
		printableValues.push_back('8');
		printableValues.push_back('9');
		printableValues.push_back(':');
		printableValues.push_back(';');
		printableValues.push_back('<');
		printableValues.push_back('=');
		printableValues.push_back('>');
		printableValues.push_back('?');
		printableValues.push_back('@');
		printableValues.push_back('A');
		printableValues.push_back('B');
		printableValues.push_back('C');
		printableValues.push_back('D');
		printableValues.push_back('E');
		printableValues.push_back('F');
		printableValues.push_back('G');
		printableValues.push_back('H');
		printableValues.push_back('I');
		printableValues.push_back('J');
		printableValues.push_back('K');
		printableValues.push_back('L');
		printableValues.push_back('M');
		printableValues.push_back('N');
		printableValues.push_back('O');
		printableValues.push_back('P');
		printableValues.push_back('Q');
		printableValues.push_back('R');
		printableValues.push_back('S');
		printableValues.push_back('T');
		printableValues.push_back('U');
		printableValues.push_back('V');
		printableValues.push_back('W');
		printableValues.push_back('X');
		printableValues.push_back('Y');
		printableValues.push_back('Z');
		printableValues.push_back('[');
		printableValues.push_back('\\');
		printableValues.push_back(']');
		printableValues.push_back('^');
		printableValues.push_back('_');
		printableValues.push_back('`');
		printableValues.push_back('a');
		printableValues.push_back('b');
		printableValues.push_back('c');
		printableValues.push_back('d');
		printableValues.push_back('e');
		printableValues.push_back('f');
		printableValues.push_back('g');
		printableValues.push_back('h');
		printableValues.push_back('i');
		printableValues.push_back('j');
		printableValues.push_back('k');
		printableValues.push_back('l');
		printableValues.push_back('m');
		printableValues.push_back('n');
		printableValues.push_back('o');
		printableValues.push_back('p');
		printableValues.push_back('q');
		printableValues.push_back('r');
		printableValues.push_back('s');
		printableValues.push_back('t');
		printableValues.push_back('u');
		printableValues.push_back('v');
		printableValues.push_back('w');
		printableValues.push_back('x');
		printableValues.push_back('y');
		printableValues.push_back('z');
		printableValues.push_back('{');
		printableValues.push_back('|');
		printableValues.push_back('}');
		printableValues.push_back('~');

		for( unsigned long i = 0; i < length; i++ )
		{//Add length number of random hex characters by calling generateNumber length times and passing it through hexValues.
			printableChars.push_back(  printableValues.at(generateNumber(0, printableValues.size()-1)) );
		}
		
		return printableChars;
	}
}
