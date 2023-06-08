//Modify this file to change what commands output to your statusbar, and recompile using the make command.

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

  {"^c#94e2d5^ 󰃞 ^d^ ", "brightnessctl -m | awk -F, '{print substr($4, 0, length($4)-1)}' | tr -d '%'", 10, 6},

  {"^b#45475a^", "~/dwmblocks/scripts/getvolume.sh ", 5, 1},

	{"", "~/dwmblocks/scripts/getbattery.sh",	1,		2},

	{"^d^ ^b#b4befe^^c#1e1e2e^ \ue384  ", "date +'%a, %d %b' ",					30,		3},

	// {"^c#74c7ec^ \ue384 ^d^ ", "date +'%a, %d %b, %r' ",					1,		3},
    {"", "date +'%I:%M %p'", 30, 4},

	{"^d^ ", "", 0, 5}
};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
