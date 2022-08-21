//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/	

	{"", 		"sb-date.sh",		60,			0},

	{"",		"sb-volume.sh",		0,			10},

	{"",		"sb-brightness.sh",	0,			10},

	{"",		"sb-battery.sh",	60,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;

