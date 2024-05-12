#include "PascalsTriangle.h"
#include <gtest/gtest.h>
#include <list>

TEST(PascalsTriangleTest, FirstRow)
{
    std::list<uint64_t> expected{1};
    ASSERT_EQ(getPascalsTriangleRow(0), expected);
}

TEST(PascalsTriangleTest, SecondRow)
{
    std::list<uint64_t> expected{1, 1};
    ASSERT_EQ(getPascalsTriangleRow(1), expected);
}

TEST(PascalsTriangleTest, ThirdRow)
{
    std::list<uint64_t> expected{1, 2, 1};
    ASSERT_EQ(getPascalsTriangleRow(2), expected);
}

TEST(PascalsTriangleTest, FifthRow)
{
    std::list<uint64_t> expected{1, 5, 10, 10, 5, 1};
    ASSERT_EQ(getPascalsTriangleRow(5), expected);
}

TEST(PascalsTriangleTest, TwelfthRow)
{
    std::list<uint64_t> expected{1, 12, 66, 220, 495, 792, 924, 792, 495, 220, 66, 12, 1};
    ASSERT_EQ(getPascalsTriangleRow(12), expected);
}

TEST(PascalsTriangleTest, PerformanceTest) { ASSERT_NO_FATAL_FAILURE(getPascalsTriangleRow(1000)); }

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
