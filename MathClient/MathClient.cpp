// MathClient.cpp : Client app for MathLibrary DLL.
// #include "pch.h" Uncomment for Visual Studio 2017 and earlier
#include <iostream>
#include <Windows.h>
#include "MathLibrary.h"

int main()
{
	/*
	TestMath math;
	int score = math.Get_Score();

	std::cout << score << std::endl;
	*/

	TestMath* math = TestMath_Create();
	int score = math->Get_Score();
	std::cout << "Current Value Before Delete : " << score << std::endl;
	TestMath_Destroy(math);
	std::cout << "Current Value After Delete : " << score << std::endl;

}