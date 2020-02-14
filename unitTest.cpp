#include "selectionSort.hpp"
#include "vector.hpp"
#include "op.hpp"
#include <string>
#include "gtest/gtest.h"

TEST(VectorContainerTestSet, SwapTest){
Op* seven = new Op(7);
Op* three = new Op(3);
Vector* test_container = new Vector();
test_container->add_element(seven);
test_container->add_element(three);
ASSERT_EQ(test_container->size(),2);
EXPECT_EQ(test_container->at(1)->evaluate(),3);
}

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);


	return RUN_ALL_TESTS();
}
