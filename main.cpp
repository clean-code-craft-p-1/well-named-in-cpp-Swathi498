#include "Color.h"
#include "Test.h"

int main() 
{
	TelCoColorCoder::PrintReferenceManual();

	testNumberToPair(4, TelCoColorCoder::MajorColor::WHITE, TelCoColorCoder::MinorColor::BROWN);
	testNumberToPair(5, TelCoColorCoder::MajorColor::WHITE, TelCoColorCoder::MinorColor::SLATE);

	testPairToNumber(TelCoColorCoder::MajorColor::BLACK, TelCoColorCoder::MinorColor::ORANGE, 12);
	testPairToNumber(TelCoColorCoder::MajorColor::VIOLET, TelCoColorCoder::MinorColor::SLATE, 25);
	return 0;

}