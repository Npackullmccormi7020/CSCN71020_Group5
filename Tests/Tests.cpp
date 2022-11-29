#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int side1, int side2, int side3);

extern "C" char* analyzeRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);

extern "C" void isTriangle(double, double, double);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(triangleSolver_Tests)
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

			// Fix (kahan) : Found that one condition was missing when side2 and side3 were equal, now solved (refer triangleSolver.c)
			// last test: Passed! \o/

		}


	};

	TEST_CLASS(rectangleSolver_Tests)
	{
	public:


		TEST_METHOD(Valid_rectangle1)
		{
			char* result = "";
			result = analyzeRectangle(1, 2, -1, 2, -1, -4, 1, -4);
			Assert::AreEqual("Rectangle", result);
			// last test: Passed! \o/
		}

		TEST_METHOD(Valid_rectangle2)
		{
			char* result = "";
			result = analyzeRectangle(-27, 59, 30, 40, 19, 7, -38, 26);
			Assert::AreEqual("Rectangle", result);
			// last test: Passed! \o/
		}

		TEST_METHOD(Valid_rectangle3)
		{
			char* result = "";
			result = analyzeRectangle(-4, 4, 0, 4, 0, 0, -4, 0);
			Assert::AreEqual("Rectangle", result);
			// last test: Passed! \o/
		}

		TEST_METHOD(NOTValid_rectangle1)
		{
			char* result = "";
			result = analyzeRectangle(1, 2, -1, 3, -1, -4, 2, -4);
			Assert::AreEqual("Not a Rectangle", result);


			/* Fix (kahan) : Found that Instead of keeping the "2nd if condition" (in rectangleSolver.c/ analyzeRectangle())
			in && (AND) relation, keep it in || (OR) relation 
			(Now fixed, refer rectangleSolver.c)
			*/

			// last test: Passed! \o/
		}

		TEST_METHOD(NOTValid_rectangle2)
		{
			char* result = "";
			result = analyzeRectangle(0, 0, 1, 0, 2, 0, 0, -1);
			Assert::AreEqual("Not a Rectangle", result);

			/*
			Also fixed, same as NOTValid_rectangle1 test
			*/

			// last test: Passed! \o/
		}

	};

	// ISSUE (Kahan) : YET TO RUN PROPER TESTS, need to modify the function of isTriangle() to run tests.
	TEST_CLASS(isTriangle_Tests)
	{
	public:


		TEST_METHOD(Valid_triangle1)
		{
			char* result = "";
			isTriangle(3, 2, 1);
			Assert::AreEqual("", result);

			// last test:
		}

		TEST_METHOD(Valid_triangle2)
		{
			char* result = "";
			isTriangle(2, 3, 1);
			Assert::AreEqual("", result);

			// last test:
		}

		TEST_METHOD(Valid_triangle3)
		{
			char* result = "";
			isTriangle(1, 2, 3);
			Assert::AreEqual("", result);

			// last test:
		}

		TEST_METHOD(Valid_triangle4)
		{
			char* result = "";
			isTriangle(3, 5, 4);
			Assert::AreEqual("", result);

			// last test:
		}

		TEST_METHOD(Valid_triangle5)
		{
			char* result = "";
			isTriangle(1, 1, 1);
			Assert::AreEqual("", result);

			// last test:
		}

		TEST_METHOD(NOTValid_triangle1)
		{
			char* result = "";
			isTriangle(4, 2, 1);
			Assert::AreEqual("", result);

			// last test:
		}

		TEST_METHOD(NOTValid_triangle2)
		{
			char* result = "";
			isTriangle(1, 4, 2);
			Assert::AreEqual("", result);

			// last test:
		}

		TEST_METHOD(NOTValid_triangle3)
		{
			char* result = "";
			isTriangle(1, 2, 4);
			Assert::AreEqual("", result);

			// last test:
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
