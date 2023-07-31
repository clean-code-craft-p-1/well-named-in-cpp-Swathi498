#include "ColorPair.h"

namespace TelCoColorCoder 
{
	/*const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
	int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
	const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
	int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);*/

	ColorPair::ColorPair(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) : majorColor(major), minorColor(minor)
	{}

	TelCoColorCoder::MajorColor ColorPair::getMajor() { return majorColor;}
	TelCoColorCoder::MinorColor ColorPair::getMinor() { return minorColor;}
	std::string ColorPair::ToString() {
		std::string colorPairStr = TelCoColorCoder::MajorColorNames[static_cast<int>(majorColor)];
		colorPairStr += " ";
		colorPairStr += TelCoColorCoder::MinorColorNames[static_cast<int>(minorColor)];
		return colorPairStr;
	}
}