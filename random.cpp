#include <vector>
#include <random>
#include <functional>

namespace RNG
{//RNG for Random Number Generator
	std::vector<unsigned long> generateNumber( unsigned long min, unsigned long max )
	{//Generate and returns a single random unsigned long between min and max.
		std::uniform_int_distribution<unsigned long> uid(min, max);
		std::random_device rd;
		std::mt19937 generator(rd());
		
		return uid(generator);
	}

	std::vector<unsigned long> generateNums( unsigned long min, unsigned long max, unsigned long length )
	{//Generate length number of random unsigned longs between min and max. Returns a vector of the random unsigned longs.
		std::vector<unsigned long> nums;
/*
		std::uniform_int_distribution<unsigned long> uid(min, max);
		std::random_device rd;
		std::mt19937 generator(rd());
		auto rng = std::bind( uid, generator );//Create a function to create random unsigned integers.
*/
		
		for( unsigned long i = 0; i < length; i++ )
		{//Add length number of random integers by calling generateNumber length times.
			//nums.push_back( rng() );
			nums.push_back(  generateNumber(min, max) );
		}
		
		return nums;
	}

	std::vector<char> generateHexString( unsigned long length )
	{//Generate length number of random chararcters from the groups 0...9 and A...F according to their hex values. Returns a vector of the random unsigned longs.
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
			//nums.push_back( rng() );
			hexChars.push_back(  hexValues.at(generateNumber(0, hexValues.size()-1)) );
		}
/*
		std::vector<unsigned long> nums;
		std::uniform_int_distribution<unsigned long> uid(min, max);
		std::random_device rd;
		std::mt19937 generator(rd());
		auto rng = std::bind( uid, generator );//Create a function to create random unsigned integers.
		
		for( unsigned long i = 0; i < length; i++ )
		{//Add length number of hex characters.
			nums.push_back( rng() );
		}
		
		return nums;
*/
	}
}
