CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
ADD_SUBDIRECTORY(googletest)
SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(test
        test.cpp
	base.hpp
      	Op.cpp
        Add.cpp
        Sub.cpp
        Mult.cpp
        Div.cpp
        Pow.cpp
	Iterator.hpp
	BinaryIterator.cpp
	UnaryIterator.cpp
	NullIterator.h
	PreorderIterator.cpp
	visitor.cpp
	Decorator.cpp
	Trunc.cpp
	Paren.cpp
	Abs.cpp
	Ceil.cpp
	Floor.cpp
)
TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

