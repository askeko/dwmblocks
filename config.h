// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "sb-tasks", 10, 26},
    {"", "sb-blue", 0, 0},
    {"", "sb-news", 600, 6},
    {"", "sb-red", 0, 0},
    {"", "sb-nettraf", 1, 16},
    {"", "sb-orange", 0, 0},
    {"", "sb-disk", 60, 5},
    {"", "sb-green", 0, 0},
    {"", "sb-internet", 5, 4},
    {"", "sb-magenta", 0, 0},
    {"", "sb-volume", 60, 10},
    {"", "sb-yellow", 0, 0},
    {"", "sb-datetime", 1, 1},
    {"", "sb-teal", 0, 0},
    {"", "sb-battery", 5, 3},
    {"", "sb-cyan", 0, 0},
};

// Sets delimiter between status commands. NULL character ('\0') means no
// delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd
// ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid
// dwmblocks & }
