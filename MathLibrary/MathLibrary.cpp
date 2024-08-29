// MathLibrary.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "MathLibrary.h"

TestMath::TestMath() : CurrentScore(40) {}

int TestMath::Get_Score()
{
    return CurrentScore;
}

extern "C"
{
    MATHLIBRARY_API TestMath* TestMath_Create() { return new TestMath(); }
    MATHLIBRARY_API void TestMath_Destroy(TestMath* obj) { delete obj; }
}