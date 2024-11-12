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
            {"����", REGULAR, "18:00"},
            {"�����", COMFORT, "15:30"},
            {"�����", EXPRESS, "12:00"},
            {"���", REGULAR, "08:30"}
            };
            const int N = 4;

            SortByDepartureTime(schedule, N);

              
            Assert::AreEqual(schedule[0].destination.c_str(), "���");
            Assert::AreEqual(schedule[1].destination.c_str(), "�����");
            Assert::AreEqual(schedule[2].destination.c_str(), "�����");
            Assert::AreEqual(schedule[3].destination.c_str(), "����");

		}
	};
}
