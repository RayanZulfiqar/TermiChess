#include <iostream>
#include <ansi.h>
#include <text.h>
using namespace UI;
using namespace std;

Text::Text(string text,
           UI::FGColor fg,
           UI::BGColor bg,
           UI::Style style)
{
    this->text = text;
    this->fg = fg;
    this->bg = bg;
    this->style = style;
}

string Text::getText()
{
    return text;
}

UI::FGColor Text::getFGColor()
{
    return fg;
}

UI::BGColor Text::getBGColor()
{
    return bg;
}

UI::Style Text::getStyle()
{
    return style;
}

void Text::display()
{
    wcout << generateAnsiCode(text, fg, bg, style);
}