#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int side1, int side2, int side3);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(Tests)
	{
	public:
		
		TEST_METHOD(trianglesolver)
		{
			char* result = "";
			result = analyzeTriangle(2, 2, 2);
			Assert::AreEqual("Equilateral triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(rectanglesolver)
		{
			// this functionality is being worked upon
		}

		TEST_METHOD(triangleangles)
		{
			// this functionality is being worked upon as well
		}
	};
}
