#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int side1, int side2, int side3);

extern "C" char* analyzeRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(TriangleSolverTests)
	{
	public:
		
		TEST_METHOD(Input_1st_NegTest)
		{
			char* result = "";
			result = analyzeTriangle(-1, 1, 1);
			Assert::AreEqual("Not a triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(Input_2nd_NegTest)
		{
			char* result = "";
			result = analyzeTriangle(1, -1, 1);
			Assert::AreEqual("Not a triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(Input_3rd_NegTest)
		{
			char* result = "";
			result = analyzeTriangle(1, 1, -1);
			Assert::AreEqual("Not a triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(BVA_Input_1st_NegTest)
		{
			char* result = "";
			result = analyzeTriangle(0, 1, 1);
			Assert::AreEqual("Not a triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(BVA_Input_2nd_NegTest)
		{
			char* result = "";
			result = analyzeTriangle(1, 0, 1);
			Assert::AreEqual("Not a triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(BVA_Input_3rd_NegTest)
		{
			char* result = "";
			result = analyzeTriangle(1, 1, 0);
			Assert::AreEqual("Not a triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(Equilateral_test)
		{
			char* result = "";
			result = analyzeTriangle(2, 2, 2);
			Assert::AreEqual("Equilateral triangle", result);

			// last test: Passed! \o/
		}

		
		TEST_METHOD(Scalene_test)
		{
			char* result = "";
			result = analyzeTriangle(2, 3, 4);
			Assert::AreEqual("Scalene triangle", result);

			// last test: Passed! \o/
		}

		TEST_METHOD(Side1and2_Isosceles_test)
		{
			char* result = "";
			result = analyzeTriangle(2, 2, 3);
			Assert::AreEqual("Isosceles triangle", result);

			// last test: Passed! \o/

		}

		TEST_METHOD(Side1and3_Isosceles_test)
		{
			char* result = "";
			result = analyzeTriangle(2, 3, 2);
			Assert::AreEqual("Isosceles triangle", result);

			// last test: Passed! \o/

		}

		TEST_METHOD(Side2and3_Isosceles_test)
		{
			char* result = "";
			result = analyzeTriangle(2, 3, 3);
			Assert::AreEqual("Isosceles triangle", result);

			// Found that one condition was missing when side2 and side3 were equal, now solved (refer triangleSolver.c)
			// last test: Passed! \o/

		}


	};

	TEST_CLASS(rectangleSolver)
	{
	public:


		TEST_METHOD(Valid_rectangle1)
		{
			
		}

	};

	TEST_CLASS(OtherTests)
	{
	public:


		TEST_METHOD(anglesoftriangle)
		{
			// this functionality is being worked upon
		}

	};
}
