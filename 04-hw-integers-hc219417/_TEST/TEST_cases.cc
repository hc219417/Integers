/*
 * Unit testing for the integer homework
 */
//#define CATCH_CONFIG_RUNNER
#define CATCH_CONFIG_MAIN  // Catch supplies a main program
#include "NO_MAIN.cc"

#include "catch.hpp"

const int MAX_SCORE = 20;
const int NUM_TESTS = 4;
static int score = 0;
static int testsPassed = 0;

TEST_CASE("Testing Integer functions") {
    SECTION("getNumDigits") {
        REQUIRE(5 == getNumDigits(12345));
        REQUIRE(2 == getNumDigits(12));
        REQUIRE(1 == getNumDigits(9));
        score += 5;
        testsPassed++;
    }
    SECTION("getNthDigit") {
        REQUIRE(1 == getNthDigit(23145, 3));
        REQUIRE(4 == getNthDigit(23145, 2));
        REQUIRE(1 == getNthDigit(123423145, 9));
        testsPassed++;
        score += 5;
    }
    SECTION("getSumDigits") {
        REQUIRE(10 == getSumDigits(1234));
        REQUIRE(0 == getSumDigits(0));
        REQUIRE(45 == getSumDigits(123456789));
        score += 5;
        testsPassed++;

    }

    SECTION("isPalindrome"){
        REQUIRE(true == isPalindrome(121));
        REQUIRE(true == isPalindrome(1221));
        REQUIRE(true == isPalindrome(122222221));
        REQUIRE(true == isPalindrome(0));
        REQUIRE(false == isPalindrome(12));
        REQUIRE_FALSE(isPalindrome(122));
        REQUIRE_FALSE(isPalindrome(12231));
        score += 5;
        testsPassed++;
    }

    SECTION("Score"){
        cout << "\n==========================================" << endl;
        cout << "\033[1;33m" <<  " Score: " << score << "/" << MAX_SCORE << "\033[1;35m"
        << " (passed " << testsPassed <<  " out of " << NUM_TESTS << " tests)" << "\033[0m" << endl;
        cout << "==========================================\n" << endl;
    }
}

