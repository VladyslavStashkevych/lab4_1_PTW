#include "pch.h"
#include "CppUnitTest.h"
#include "../lab4_1/lab4_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab41tests {
	TEST_CLASS(Methods_CorrectValueReturned) {
	public:
		TEST_METHOD(Method_CharCount) {
			int expected = 15;
			int actual = CountCharsInFile("D:\\Files\\univeersity\\PTW\\projects\\lab4_1\\lab4_1\\testfile.txt");
			Assert::AreEqual(expected, actual);
		}
	};
}
