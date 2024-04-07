#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(TestCapitalizeAfterDot)
    {
    public:

        TEST_METHOD(TestCapitalization)
        {
            std::string testString = "this is a test. another test.";

            std::string expectedString = "this is a test. Another test.";

            capitalizeAfterDot(testString);

            Assert::AreEqual(expectedString, testString);
        }

        TEST_METHOD(TestEmptyString)
        {
            std::string testString = "";

            std::string expectedString = "";

            capitalizeAfterDot(testString);

            Assert::AreEqual(expectedString, testString);
        }

        TEST_METHOD(TestNoDot)
        {
            std::string testString = "this is a test";

            std::string expectedString = "this is a test";

            capitalizeAfterDot(testString);

            Assert::AreEqual(expectedString, testString);
        }

        TEST_METHOD(TestOnlyDots)
        {
            std::string testString = "...";

            std::string expectedString = "...";

            capitalizeAfterDot(testString);

            Assert::AreEqual(expectedString, testString);
        }

        TEST_METHOD(TestMultipleDots)
        {
            std::string testString = "this is a test...another test...yet another test.";

            std::string expectedString = "this is a test...Another test...Yet another test.";

            capitalizeAfterDot(testString);

            Assert::AreEqual(expectedString, testString);
        }


        TEST_METHOD(TestSingleCharacterAfterDot)
        {
            std::string testString = ".a";

            std::string expectedString = ".A";

            capitalizeAfterDot(testString);

            Assert::AreEqual(expectedString, testString);
        }
    };
}