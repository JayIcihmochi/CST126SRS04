#include "stdafx.h"
#include "CSWoman.h"
#include "linklist.h"
#include<iostream>

int main()
{
	CSWoman ada{ "Ada Lovelace", 1815, "Assisted Charls Babbage with coding his machine" };
	CSWoman adele{"Adele Goldberg", 1945, "Assisted in developing the programming language Smalltalk-80 and various concepts related to object-oriented programming"};
	CSWoman dana{ "Dana Ulery", 1938, "first woman engineer at the NASA Jet Propulsion Laboratory" };
	CSWoman grace{ "Grace Brewster Murray Hopper", 1906, "Invented one of the first compiler related tools" };
	CSWoman ida{"Ida Rhodes", 1900, "co-designed the C-10 language in the early 1950s for the UNIVAC I "};
	CSWoman jean{ "Jean E. Sammet", 1928, "developed the FORMAC programming language" };
	CSWoman joan{ "Joan Ball", 1934, "Started the first computer dating service" };
	CSWoman kathleen{"Kathleen Booth", 1922, "Wrote the first assembly language and designed the assembler and autocode for the first computer systems"};
	CSWoman maryC{ "Mary Coombs", 1929, "first woman to work on the LEO computers" };
	CSWoman maryK{"Mary Kenneth Keller", 1913, "The first woman to earn a Ph.D. in computer science"};

	list theList{};

	theList.addfunc(ada);
	theList.addfunc(adele);
	theList.addfunc(dana);
	theList.addfunc(grace);
	theList.addfunc(ida);
	theList.addfunc(jean);
	theList.addfunc(joan);
	theList.addfunc(kathleen);
	theList.addfunc(maryC);
	theList.addfunc(maryK);

	theList.printlist();

    return 0;
}