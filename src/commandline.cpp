#include "../include/commandline.hpp"

void PrintUsage()
{
	std::cout << "options:" << std::endl
			<< "-s" << std::endl
			<< "   Specifies the type of surface." << std::endl
			<< "   Valid values are 'concrete', 'muddy' and 'snow'." << std::endl
			<< "-d" << std::endl
			<< "   Specifies the distance." << std::endl
			<< "   The value will be interpreted to be in kilometers." << std::endl
			<< "-t" << std::endl
			<< "   Specifies the type of surface." << std::endl
			<< "   Valid values are 'normal', 'spiked' and 'offroad'." << std::endl;
}

int Commandline::ProcessRequest(int argc, char **argv)
{
	std::string surfaces[] = {"concrete", "muddy", "snow"};
	std::string sopt = "none";
	int dopt = -1;
	std::string topt = "no_tires";
	std::string* p;
	int c;

	opterr = 0;

	while ((c = getopt (argc, argv, "s:d:t:")) != -1)
		switch (c)
		{
		case 's':
			sopt = optarg;
			break;
		case 'd':
			dopt = atoi(optarg);
			break;
		case 't':
			if (optarg != NULL)
				topt = (std::string)optarg;
			break;
		case '?':
			if ((optopt == 's') || (optopt == 'd'))
				std::cout << "Option -" << (char)optopt << " requires an argument." << std::endl;
			else if (isprint (optopt))
				std::cout << "Unknown option " << (char)optopt << "." << std::endl;
			else
				std::cout << "Unknown option character " << optopt << "." << std::endl;
			return 1;
		}

	//p = std::find(surfaces,surfaces+3,sopt);
	//++p;
	if ((sopt == "none") || (dopt == -1))
	{
		PrintUsage();
	}
	//std::cout << "sopt = " << sopt << "dopt = " << dopt << "topt = " << topt;

	return 0;
}
