#include "stdafx.h"
#include <iostream>
#include "CSWoman.h"
#include "linklist.h"

int main()
{
	auto const ada = new const CSWoman { "Ada Lovelace", 1815, "Assisted Charls Babbage with coding his machine" };
	auto const adele = new const CSWoman {"Adele Goldberg", 1945, "Assisted in developing the programming language Smalltalk-80 and various concepts related to object-oriented programming"};
	auto const dana = new const CSWoman { "Dana Ulery", 1938, "first woman engineer at the NASA Jet Propulsion Laboratory" };
	auto const grace = new const CSWoman { "Grace B. M. Hopper", 1906, "Invented one of the first compiler related tools" };
	auto const ida = new const CSWoman {"Ida Rhodes", 1900, "co-designed the C-10 language in the early 1950s for the UNIVAC I "};
	auto const jean = new const CSWoman { "Jean E. Sammet", 1928, "developed the FORMAC programming language" };
	auto const joan = new const CSWoman { "Joan Ball", 1934, "Started the first computer dating service" };
	auto const kathleen = new const CSWoman {"Kathleen Booth", 1922, "Wrote the first assembly language and designed the assembler and autocode for the first computer systems"};
	auto const maryC = new const CSWoman { "Mary Coombs", 1929, "first woman to work on the LEO computers" };
	auto const maryK = new const CSWoman {"Mary K. Keller", 1913, "The first woman to earn a Ph.D. in computer science"};

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
	theList.reverselist();
	std::cout << "\n";
	theList.printlist();

	theList.deletelist();

    return 0;
}