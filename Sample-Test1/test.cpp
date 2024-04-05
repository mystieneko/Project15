#include "pch.h"
#include "../Project15/mathFunc.cpp"

TEST(SimpleTests, FactorialTest) {
    ASSERT_EQ(120, factorial(5));
}

TEST(FactorialTests, ZeroInput) {
    EXPECT_EQ(1, factorial(0)); // true
}

TEST(FactorialTests, PositiveInput) {
    EXPECT_EQ(26, factorial(4)); // false
}

TEST(FactorialTests, NegativeInput) {
    EXPECT_EQ(-1, factorial(-5)); // true
}
TEST(SimpleTests, FloatTest) {
    ASSERT_FLOAT_EQ(2.5, divAtoB(5.0, 2.0));
}

TEST(SimpleTests, StrEqualTest) {
    ASSERT_EQ(1, areEqual("hello", "HEllO"));
}

TEST(SimpleTests, StrEqualTest2) {
    ASSERT_EQ(1, areEqual("goodbye", "Goodbye!"));
}

TEST(SimpleTests, SortVecTest) {
    std::vector<int> v = { 1, 2, 7, 4, 6 };
    std::vector<int> expected = { 1, 2, 4, 6, 7 };
    ASSERT_EQ(expected, sortVec(v));
}

TEST(SimpleTests, BoolTest) {
    ASSERT_EQ(1, isPositive(5));
}

TEST(SimpleTests, StrTest) {
    std::string str = "12345";
    std::string res = "54321";
    ASSERT_TRUE(res == reverseStr(str));
}