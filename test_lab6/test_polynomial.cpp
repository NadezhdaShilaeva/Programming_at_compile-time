#include "gtest/gtest.h"
#include "..\lab6\polynomial.h"

	TEST(TestXMore0, TestCoeffsMore0) {
		polynomial<10, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1> poly;
		EXPECT_EQ(2047, poly.value);
	}

	TEST(TestXMore0, TestCoeffsLess0) {
		polynomial<10, 2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1> poly;
		EXPECT_EQ(-2047, poly.value);
	}

	TEST(TestXMore0, TestCoeffsIs0) {
		polynomial<8, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0> poly;
		EXPECT_EQ(0, poly.value);
	}

	TEST(TestXMore0, TestDEGIs0) {
		polynomial<0, 564, 0> poly;
		EXPECT_EQ(0, poly.value);
	}

	TEST(TestXMore0, TestCoeffsRandom) {
		polynomial<9, 2, 11, 2, -6, 89, -61, 12, 0, -98, 1, 0> poly;
		EXPECT_EQ(8922, poly.value);
	}


	TEST(TestXIs0, TestCoeffsMore0) {
		polynomial<10, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1> poly;
		EXPECT_EQ(1, poly.value);
	}

	TEST(TestXIs0, TestCoeffsLess0) {
		polynomial<10, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1> poly;
		EXPECT_EQ(-1, poly.value);
	}

	TEST(TestXIs0, TestCoeffsIs0) {
		polynomial<9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0> poly;
		EXPECT_EQ(0, poly.value);
	}

	TEST(TestXIs0, TestDEGIs0) {
		polynomial<0, 0, 685> poly;
		EXPECT_EQ(685, poly.value);
	}

	TEST(TestXIs0, TestCoeffsRandom) {
		polynomial<11, 0, 18, -56, -1, 0, -51, -591, 98, 132, 877, 0, -99, 22> poly;
		EXPECT_EQ(22, poly.value);
	}


	TEST(TestXLess0, TestCoeffsMore0) {
		polynomial<10, -2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1> poly;
		EXPECT_EQ(683, poly.value);
	}

	TEST(TestXLess0, TestCoeffsLess0) {
		polynomial<10, -2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1> poly;
		EXPECT_EQ(-683, poly.value);
	}

	TEST(TestXLess0, TestCoeffsIs0) {
		polynomial<9, -56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0> poly;
		EXPECT_EQ(0, poly.value);
	}

	TEST(TestXLess0, TestDEGIs0) {
		polynomial<0, -595, -6389> poly;
		EXPECT_EQ(-6389, poly.value);
	}

	TEST(TestXLess0, TestCoeffsRandom) {
		polynomial<7, -2, 8, -19, 0, 5, 1, 65, -985, -1> poly;
		EXPECT_EQ(61, poly.value);
	}