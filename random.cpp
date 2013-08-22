#include <vector>
#include <random>
#include <functional>

namespace RNG
{//RNG for Random Number Generator
	std::vector<unsigned int> generateNums( unsigned int min, unsigned int max, unsigned int length )
	{//Generate length number of random unsigned integers between min and max. Returns a vector of the random unsigned integers.
		std::vector<unsigned int> nums;
		std::uniform_int_distribution<unsigned int> uid(min, max);
		std::random_device rd;
		std::mt19937 generator(rd());
		auto rng = std::bind( uid, generator );//Create a function to create random unsigned integers.
		
		for( unsigned int i = 0; i < length; i++ )
		{//Add length number of integers.
			nums.push_back( rng() );
		}
		
		return nums;
	}
}
