#include "Color.h"

namespace TelCoColorCoder
{
	void PrintReferenceManual()
	{
		std::cout << "Color   Code   Manual \n";
		int Pair = 0;
		for (int majorCol = 0; majorCol < numberOfMajorColors; majorCol++)
		{
			for (int minorCol = 0; minorCol < numberOfMinorColors; minorCol++)
			{
				Pair = GetPairNumberFromColor(static_cast<MajorColor>(majorCol), static_cast<MinorColor>(minorCol));

				std::cout << MajorColorNames[majorCol] << " " << MinorColorNames[minorCol] << " " << Pair << std::endl;
			}
		}
	}
	ColorPair GetColorFromPairNumber(int pairNumber)
	{
		int zeroBasedPairNumber = pairNumber - 1;
		TelCoColorCoder::MajorColor majorColor = (TelCoColorCoder::MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
		TelCoColorCoder::MinorColor minorColor = (TelCoColorCoder::MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
		return ColorPair(majorColor, minorColor);
	}
	int GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) {
		return static_cast<int>(major) * numberOfMinorColors + static_cast<int>(minor) + 1;
	}
}