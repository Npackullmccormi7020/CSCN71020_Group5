#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int side1, int side2, int side3);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(TriangleSolverTests)
	{
	public:
		
		TEST_METHOD(TestA1)
		{
			char* result = "";
			result = analyzeTriangle(-1, 1, 1);
			Assert::AreEqual("Not a triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(TestA2)
		{
			char* result = "";
			result = analyzeTriangle(1, -1, 1);
			Assert::AreEqual("Not a triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(TestA3)
		{
			char* result = "";
			result = analyzeTriangle(1, 1, -1);
			Assert::AreEqual("Not a triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(BVATestA1)
		{
			char* result = "";
			result = analyzeTriangle(0, 1, 1);
			Assert::AreEqual("Not a triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(BVATestA2)
		{
			char* result = "";
			result = analyzeTriangle(1, 0, 1);
			Assert::AreEqual("Not a triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(BVATestA3)
		{
			char* result = "";
			result = analyzeTriangle(1, 1, 0);
			Assert::AreEqual("Not a triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(TestB1)
		{
			char* result = "";
			result = analyzeTriangle(2, 2, 2);
			Assert::AreEqual("Equilateral triangle", result);

			// last test: Passed! \o/
		}

		
		TEST_METHOD(TestC1)
		{
			char* result = "";
			result = analyzeTriangle(2, 3, 4);
			Assert::AreEqual("Scalene triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(TestD1)
		{
			char* result = "";
			result = analyzeTriangle(2, 2, 3);
			Assert::AreEqual("Isosceles triangle", result);

			// last test: Passed! \o/

		}

		TEST_METHOD(TestD2)
		{
			char* result = "";
			result = analyzeTriangle(2, 3, 2);
			Assert::AreEqual("Isosceles triangle", result);

			// last test: Passed! \o/

		}

		TEST_METHOD(TestD3)
		{
			char* result = "";
			result = analyzeTriangle(2, 3, 3);
			Assert::AreEqual("Isosceles triangle", result);

			// Found that one condition was missing when side2 and side3 were equal, now solved (refer triangleSolver.c)
			// last test: Passed! \o/

		}


	};

	TEST_CLASS(OtherTests)
	{
	public:


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
