#include <vector>
#include <random>
#include <functional>

namespace RNG
{//RNG for Random Number Generator
	std::vector<unsigned long> generateNums( unsigned long min, unsigned long max, unsigned long length )
	{//Generate length number of random unsigned longs between min and max. Returns a vector of the random unsigned longs.
		std::vector<unsigned long> nums;
		std::uniform_int_distribution<unsigned long> uid(min, max);
		std::random_device rd;
		std::mt19937 generator(rd());
		auto rng = std::bind( uid, generator );//Create a function to create random unsigned integers.
		
		for( unsigned long i = 0; i < length; i++ )
		{//Add length number of integers.
			nums.push_back( rng() );
		}
		
		return nums;
	}
}
