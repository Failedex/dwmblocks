//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

    /*
    {"^b#f38ba8^^c#1e1e2e^ \ufa7d ^d^ ", "~/dwmblocks/scripts/getvolume.sh ", 0, 1},

	{"^b#eba0ac^^c#1e1e2e^ \uf578 ^d^ ", "cat /sys/class/power_supply/BAT0/capacity ",	30,		2},

	{"^b#fab387^^c#1e1e2e^ \ue384 ^d^ ", "date +'%a, %d %b, %I:%M %p' ",					30,		3},

    {"|", "", 0, 4},
    */

    {"^c#f38ba8^ \ufa7d ^d^ ", "~/dwmblocks/scripts/getvolume.sh ", 0, 1},

	{"^c#a6e3a1^ \uf578 ^d^ ", "cat /sys/class/power_supply/BAT0/capacity ",	30,		2},

	{"^c#74c7ec^ \ue384 ^d^ ", "date +'%a, %d %b, %I:%M %p' ",					30,		3},

	{" ", "", 0, 4}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " |";
static unsigned int delimLen = 5;
