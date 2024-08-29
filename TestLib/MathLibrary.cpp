#include "MathLibrary.h"
#include <string>


const std::string MathematicSolution::MathLibrary::CURRENT_VERSION = "CURRENT VERSION = 3";

const int MathematicSolution::MathLibrary::x = 1;
const int MathematicSolution::MathLibrary::y = 2;

std::string MathematicSolution::MathLibrary::Get_CurrentVersion()
{
	return MathematicSolution::MathLibrary::CURRENT_VERSION;
}

int MathematicSolution::MathLibrary::Addition()
{
	return (MathematicSolution::MathLibrary::x + MathematicSolution::MathLibrary::y);
}