EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Bus Line
	4450 3600 4450 3650
Wire Bus Line
	4950 4200 4950 4150
$Comp
L Device:Buzzer BZ1
U 1 1 614A4FD5
P 4200 4100
F 0 "BZ1" V 4251 3913 50  0000 R CNN
F 1 "Buzzer" V 4160 3913 50  0000 R CNN
F 2 "Buzzer_Beeper:Buzzer_12x9.5RM7.6" V 4175 4200 50  0001 C CNN
F 3 "~" V 4175 4200 50  0001 C CNN
	1    4200 4100
	0    -1   -1   0   
$EndComp
$Comp
L MCU_Module:Arduino_Nano_v3.x A1
U 1 1 614A40FF
P 4900 3050
F 0 "A1" H 4900 1961 50  0000 C CNN
F 1 "Arduino_Nano_v3.x" H 4900 1870 50  0000 C CNN
F 2 "Module:Arduino_Nano" H 4900 3050 50  0001 C CIN
F 3 "http://www.mouser.com/pdfdocs/Gravitech_Arduino_Nano3_0.pdf" H 4900 3050 50  0001 C CNN
	1    4900 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	4100 4200 3850 4200
Wire Wire Line
	3850 4200 3850 3250
Wire Wire Line
	3850 3250 4400 3250
Wire Wire Line
	4300 4200 4900 4200
Wire Wire Line
	4900 4200 4900 4050
$Comp
L power:+12V #PWR0101
U 1 1 614C6D5B
P 4800 2050
F 0 "#PWR0101" H 4800 1900 50  0001 C CNN
F 1 "+12V" H 4815 2223 50  0000 C CNN
F 2 "" H 4800 2050 50  0001 C CNN
F 3 "" H 4800 2050 50  0001 C CNN
	1    4800 2050
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0102
U 1 1 614C940C
P 4900 4200
F 0 "#PWR0102" H 4900 3950 50  0001 C CNN
F 1 "GND" H 4905 4027 50  0000 C CNN
F 2 "" H 4900 4200 50  0001 C CNN
F 3 "" H 4900 4200 50  0001 C CNN
	1    4900 4200
	1    0    0    -1  
$EndComp
Connection ~ 4900 4200
$EndSCHEMATC
