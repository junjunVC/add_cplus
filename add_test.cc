/*
 * add_test.cc
 *
 *  Created on: 2015/08/10
 *      Author: Jun Tanami
 */
#include "gtest/gtest.h"
#include "add.h"

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(AddTest, onePlusTwoGivesTree) {
	EXPECT_EQ(3,add(1,2));
}

