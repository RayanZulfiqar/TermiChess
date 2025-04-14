#pragma once

#include <ansi.h>
#include <string>
using namespace std;
namespace UI
{
    class Text
    {
    private:
        string text;
        UI::FGColor fg;
        UI::BGColor bg;
        UI::Style style;

    public:
        Text(
            string text,
            UI::FGColor fg,
            UI::BGColor bg,
            UI::Style style);
        
        string getText();
        UI::FGColor getFGColor();
        UI::BGColor getBGColor();
        UI::Style getStyle();
        
        void display();
    };
}