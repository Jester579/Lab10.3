#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab10.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            TrainSchedule schedule[] = {
            {"Ћьв≥в", REGULAR, "18:00"},
            {"ќдеса", COMFORT, "15:30"},
            {"’арк≥в", EXPRESS, "12:00"},
            {" ињв", REGULAR, "08:30"}
            };
            const int N = 4;

            SortByDepartureTime(schedule, N);

              
            Assert::AreEqual(schedule[0].destination.c_str(), " ињв");
            Assert::AreEqual(schedule[1].destination.c_str(), "’арк≥в");
            Assert::AreEqual(schedule[2].destination.c_str(), "ќдеса");
            Assert::AreEqual(schedule[3].destination.c_str(), "Ћьв≥в");

		}
	};
}
