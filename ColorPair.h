#ifndef COLORPAIR_HPP
#define COLORPAIR_HPP

#include <iostream>
#include <string>

namespace TelCoColorCoder
{
    enum class MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum class MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    int GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor);
    void printRefManual();

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

    ColorPair GetColorFromPairNumber(int pairNumber);
}
#endif // !COLORCODER_HPP