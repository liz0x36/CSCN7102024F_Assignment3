#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* rockPaperScissors(char* player1, char* player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPStests
{
	TEST_CLASS(RPStests){
	public:
		// title of all tests (WhatIsUnderTest_Condition_ExpectedBehaviour)
		TEST_METHOD(p1Rock_p2Scissors_player1Wins){
			char player1[] = "rock";
			char player2[] = "scissors";
			char expected[] = "player1";

			char* result = rockPaperScissors("rock", "scissors");
			
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(p1Paper_p2Scissors_player2Wins) {
			char player1[] = "paper";
			char player2[] = "scissors";
			char expected[] = "player2";

			char* result = rockPaperScissors("paper", "scissors");

			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(bothRock_playersDraw) {
			char player1[] = "rock";
			char player2[] = "rock";
			char expected[] = "draw";

			char* result = rockPaperScissors("rock", "rock");

			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(invalidTest) {
			char player1[] = "meow";
			char player2[] = "scissors";
			char expected[] = "invalid!";

			char* result = rockPaperScissors("meow", "scissors");

			Assert::AreEqual(expected, result);
		}
	};
}
