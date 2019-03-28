// Constructor Member Initializer List 
// Code by: Nishant Shah
#include <iostream>
#include <string>
#include <cstdint>
using namespace std;

class RGBA
{
private:
    std::uint_fast8_t m_red;
    std::uint_fast8_t m_green;
    std::uint_fast8_t m_blue;
    std::uint_fast8_t m_alpha;
public:
    RGBA(std::uint_fast8_t red = 0, std::uint_fast8_t green = 0, std::uint_fast8_t blue = 0, std::uint_fast8_t alpha = 255)
        : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
    {}
        
    void print()
    {
        cout << "r = " << m_red << " g = " << m_green << " b = " << m_blue << " a = " << m_alpha << endl;
    }
};

int main()
{
    RGBA teal(0, 127, 127);
    teal.print();
    
    return 0; 
}
