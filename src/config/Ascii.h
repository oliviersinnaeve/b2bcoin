// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n          .-----------------    \n"
        "          ```````````````..---  \n"
        "                           `--. \n"
        "                           `--. \n"
        "                         ``---` \n"
        "      `---------------------.   \n"
        "      `````````````````````     \n"
        "     `..`  :::::::::::::::-.    \n"
        "     ---` /oooooooooooooooooo:` \n"
        "    .--` -oo+`````````````-/oo+`\n"
        "   `--.  ooo`               -oo+\n"
        "  `---  /oo-                 +oo\n"
        "  ---` -oo/  --------------  +oo\n"
        " .--. .ooo` ``````````````  /oo:\n"
        "`---  +oo+::::::::::::::::+ooo: \n"
        "---` :ooooooooooooooooooooo+:`  \n";

const std::string windowsAsciiArt1 =
      "\n ____ ___  ____            _       \n"
        "|  _ \\__ \\|  _ \\          (_)      \n"
        "| |_) | ) | |_) | ___ ___  _ _ __  \n"
        "|  _ < / /|  _ < / __/ _ \\| | '_ \\ \n"
        "| |_) / /_| |_) | (_| (_) | | | | |\n"
        "|____/____|____/ \\___\\___/|_|_| |_|\n";

const std::string nonWindowsAsciiArt =
      "\n          .-----------------    \n"
        "          ```````````````..---  \n"
        "                           `--. \n"
        "                           `--. \n"
        "                         ``---` \n"
        "      `---------------------.   \n"
        "      `````````````````````     \n"
        "     `..`  :::::::::::::::-.    \n"
        "     ---` /oooooooooooooooooo:` \n"
        "    .--` -oo+`````````````-/oo+`\n"
        "   `--.  ooo`               -oo+\n"
        "  `---  /oo-                 +oo\n"
        "  ---` -oo/  --------------  +oo\n"
        " .--. .ooo` ``````````````  /oo:\n"
        "`---  +oo+::::::::::::::::+ooo: \n"
        "---` :ooooooooooooooooooooo+:`  \n";

const std::string nonWindowsAsciiArt1 = 
      "\n                                                                            \n"
        "██████╗ ██████╗ ██████╗  ██████╗ ██████╗ ██╗███╗   ██╗\n"
        "██╔══██╗╚════██╗██╔══██╗██╔════╝██╔═══██╗██║████╗  ██║\n"
        "██████╔╝ █████╔╝██████╔╝██║     ██║   ██║██║██╔██╗ ██║\n"
        "██╔══██╗██╔═══╝ ██╔══██╗██║     ██║   ██║██║██║╚██╗██║\n"
        "██████╔╝███████╗██████╔╝╚██████╗╚██████╔╝██║██║ ╚████║\n"
        "╚═════╝ ╚══════╝╚═════╝  ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
