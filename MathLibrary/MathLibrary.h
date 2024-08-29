// MathLibrary.h - Contains declarations of math functions
#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif

class MATHLIBRARY_API TestMath {
public:
    TestMath();
    int Get_Score();

private:
    int CurrentScore;
};

extern "C" {
    MATHLIBRARY_API TestMath* TestMath_Create();
    MATHLIBRARY_API void TestMath_Destroy(TestMath* obj);
}