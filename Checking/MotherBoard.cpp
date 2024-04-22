#include "MotherBoard.h"
#include<iostream>
#include"Port.h"
#include"MainMemory.h"
using namespace std;

int MotherBoard::getprice() {
    return price;
}
MotherBoard::MotherBoard() {
    number = 0;
    ports = new Port[5];
    initializeports();
   // mm = MainMemory();
}
MotherBoard::MotherBoard(Port*port, MainMemory* mm,int price) {
   
    this->price = price;
    ports = new Port[5]; // dynamically giving memory similar to ports passed in argument
    int i = 0;
    for (; i < 5; i++) {   // giving data to new ports
        this->ports[i] = port[i];
    }
    //this->ports[i].settype("");
    this->mm = mm;  // giving data to mainmemory
}

void MotherBoard::setmainmemory(MainMemory *mm) {
    this->mm = mm;
}

void MotherBoard::setprice(int a) {
    this->price = a;
}

void MotherBoard::setport(Port* p) {
    delete[]ports;
   
    ports = new Port[5];
    for (int i = 0;i < 5;i++) {

        this->ports[i] = p[i];
    }
}

MainMemory& MotherBoard::getmemory() {
    return *mm;
}
Port& MotherBoard::getport() {
    return *ports;
}

void MotherBoard::show() {
    cout << "     Following are ports in motherboard" << endl;
    for (int i = 0;i < 5;i++) {
         ports[i].show();
    }
    cout << "\n     Following is the mainmemory in motherboard " << endl;
    mm->show();
    cout << endl;
}

MotherBoard::~MotherBoard() {
    delete ports;
}
void MotherBoard::initializeports() {
    Port* MeraPort = new Port[5];     // all ports
    string* porttype = new string[5];   // name of ports
    int* portbaude_rate = new int[5]; // rate of ports

    int i = 0;
    porttype[0] = "USB port";
    porttype[1] = "I/O port";
    porttype[2] = "VGI port";
    porttype[3] = "HDMI port";
    porttype[4] = "display port";

    system("cls");
    //cout << "     \t\t   MotherBoard\n" << endl;
    cout << "   \t\t\t   Ports\n" << endl;
    for (int i = 0; i < 5; i++) {
        MeraPort[i].settype(porttype[i]); // setting names in new ports
        cout << "Enter Baud Rate in mbps for " << porttype[i] << ":";
        cin >> portbaude_rate[i];

        // Validate the baud rate for each specific port type
        while (true) {
            if (porttype[i] == "USB port" && (portbaude_rate[i] < 480 || portbaude_rate[i] > 4800)) {
                cout << "Baud Rate for USB port must be between 480 and 4800 mbps. Enter correct rate: ";
                cin >> portbaude_rate[i];
            }
            else if (porttype[i] == "I/O port" && (portbaude_rate[i] < 960 || portbaude_rate[i] > 9600)) {
                cout << "Baud Rate for I/O port must be between 960 and 9600 mbps. Enter correct rate: ";
                cin >> portbaude_rate[i];
            }
            else if (porttype[i] == "VGI port" && (portbaude_rate[i] < 240 || portbaude_rate[i] > 2400)) {
                cout << "Baud Rate for VGI port must be between 240 and 2400 mbps. Enter correct rate: ";
                cin >> portbaude_rate[i];
            }
            else if (porttype[i] == "HDMI port" && (portbaude_rate[i] < 120 || portbaude_rate[i] > 1200)) {
                cout << "Baud Rate for HDMI port must be between 120 and 1200 mbps. Enter correct rate: ";
                cin >> portbaude_rate[i];
            }
            else if (porttype[i] == "display port" && (portbaude_rate[i] < 240 || portbaude_rate[i] > 2400)) {
                cout << "Baud Rate for display port must be between 240 and 2400 mbps. Enter correct rate: ";
                cin >> portbaude_rate[i];
            }
            else {
                // Baud rate is valid for the port type
                MeraPort[i].setbaud_rate(portbaude_rate[i]);
                break;
            }
        }
    }
    setport(MeraPort);
}

MotherBoard* MotherBoard::userimplementation(int g) {
    MainMemory* mm;
    Port* port;
        MotherBoard* Meraboard=new MotherBoard();
  
        Meraboard->setmainmemory(mm->userimplementation( g));
        Meraboard->setprice(16000);
        return Meraboard;
}