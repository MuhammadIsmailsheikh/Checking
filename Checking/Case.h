
#pragma once
#include <string> // Include necessary header for string usage

class Case {
protected:
    std::string color;
    std::string formFactor;
    int price;

public:
    // Constructors
    Case();
    Case(std::string color, std::string formfactor,int price);

    // Member functions
    void setcolor(std::string color);
    void setformfactor(std::string formfactor);
    std::string getcolor();
    std::string getformfactor();
    void show();
    int getprice();
    static Case* userimplementation(int g);
};

//#endif // End of header guard
