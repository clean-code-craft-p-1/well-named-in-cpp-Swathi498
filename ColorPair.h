#ifndef COLORPAIR_HPP
#define COLORPAIR_HPP

#include <iostream>
#include <string>

namespace TelCoColorCoder
{
    enum class MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum class MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
    int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
    int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    class ColorPair 
    {

    private:
        TelCoColorCoder::MajorColor majorColor;
        TelCoColorCoder::MinorColor minorColor;

    public:
        ColorPair(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor);

        TelCoColorCoder::MajorColor getMajor();
        TelCoColorCoder::MinorColor getMinor();
        std::string ToString();
    };

    
}
#endif // !COLORCODER_HPP