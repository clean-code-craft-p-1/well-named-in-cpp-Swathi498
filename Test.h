#pragma once
#include <iostream>
#include <assert.h>
#include "ColorPair.h"

namespace TelCoColorCoder
{
	void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor);
	void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber);
}

