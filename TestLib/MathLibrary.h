#ifndef MATHLIBRARY_H
#define MATHLIBRARY_H

#include <string>

namespace MathematicSolution
{
	class MathLibrary
	{
	public:
		// Constants
		static const std::string CURRENT_VERSION;

		static const int x;
		static const int y;

		static std::string Get_CurrentVersion();
		static int Addition();
	};
}

#endif // MATHLIBRARY.H