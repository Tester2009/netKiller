# [netKiller](https://github.com/alepcat1710/netKiller)

License
-------
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


Notes
-----

I create this tools just to simplify my work.


Requirements
------------
aircrack-ng



Instruction
-----------
Okay. All you need is g++ and aircrack-ng.

Download from my repo ( wget )

$    wget https://raw.githubusercontent.com/alepcat1710/netKiller/master/netKiller.c

compile

$    g++ netKiller.c -o netKiller

run !

$    sudo airmon-ng start wlan0; ./netKiller 300 routerMAC clientMAC


Example
-------
$    sudo airmon-ng start wlan0; ./netKiller 300 AB:CD:EF:GH:IJ:KL MN:OP:QR:ST:UV:WX
