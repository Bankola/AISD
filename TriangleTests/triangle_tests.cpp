#include "pch.h"
#include <stdexcept>
#include "../Triangle/triangle.h" 

TEST(TriangleTest, CorrectAreaCalculation) {
    Triangle t(10, 5);
    EXPECT_DOUBLE_EQ(t.find_s(), 25.0);
}

TEST(TriangleTest, InvalidArgumentsThrowException) {
    EXPECT_THROW(Triangle t(-5, 10), std::logic_error);

    Triangle t2(10, 5);
    EXPECT_THROW(t2.set_side(0), std::logic_error);
}