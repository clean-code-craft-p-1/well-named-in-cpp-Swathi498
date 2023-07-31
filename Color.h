#ifndef COLOR_H
#define COLOR_H
#include "ColorPair.h"


namespace TelCoColorCoder
{
	int GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor);

	void PrintReferenceManual();

	ColorPair GetColorFromPairNumber(int pairNumber);
}

#endif // !COLOR_H