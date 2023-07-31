#ifndef TEST_H
#define TEST_H

#include <iostream>
#include "ColorPair.h"
#include "Color.h"

void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor);
void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber);

#endif // !TEST_H