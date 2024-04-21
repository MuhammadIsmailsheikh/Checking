#include "AppleSilicon.h"
#include<iostream>
using namespace std;
void AppleSilicon::show() {
    cout << "Name of Cpu is" << cpuname << endl;

    cout << "This CPU's ALU has following specifications" << endl;
    alu->show();
    cout << "This CPU's ControlUnit has following specifications" << endl;
    cu->show();
    cout << "Apple has integrated Graphic card" << endl;
    //gc->show();
}