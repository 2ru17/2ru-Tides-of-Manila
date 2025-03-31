

#include "gamebackend.h"

void displayStartScreen() {
  printf(
      "__| |_________________________________________________________________| |__\n"
      "__   _________________________________________________________________   __\n"
      "  | |                                                                 | |  \n"
      "  | |                                                                 | |  \n"
      "  | |    ▄▄▄█████▓ ██▓▓█████▄ ▓█████   ██████     ▒█████    █████▒    | |  \n"
      "  | |    ▓  ██▒ ▓▒▓██▒▒██▀ ██▌▓█   ▀ ▒██    ▒    ▒██▒  ██▒▓██   ▒     | |  \n"
      "  | |    ▒ ▓██░ ▒░▒██▒░██   █▌▒███   ░ ▓██▄      ▒██░  ██▒▒████ ░     | |  \n"
      "  | |    ░ ▓██▓ ░ ░██░░▓█▄   ▌▒▓█  ▄   ▒   ██▒   ▒██   ██░░▓█▒  ░     | |  \n"
      "  | |      ▒██▒ ░ ░██░░▒████▓ ░▒████▒▒██████▒▒   ░ ████▓▒░░▒█░        | |  \n"
      "  | |      ▒ ░░   ░▓   ▒▒▓  ▒ ░░ ▒░ ░▒ ▒▓▒ ▒ ░   ░ ▒░▒░▒░  ▒ ░        | |  \n"
      "  | |        ░     ▒ ░ ░ ▒  ▒  ░ ░  ░░ ░▒  ░ ░     ░ ▒ ▒░  ░          | |  \n"
      "  | |      ░       ▒ ░ ░ ░  ░    ░   ░  ░  ░     ░ ░ ░ ▒   ░ ░        | |  \n"
      "  | |              ░     ░       ░  ░      ░         ░ ░              | |  \n"
      "  | |                  ░                                              | |  \n"
      "  | |     ███▄ ▄███▓ ▄▄▄       ███▄    █  ██▓ ██▓     ▄▄▄             | |  \n"
      "  | |    ▓██▒▀█▀ ██▒▒████▄     ██ ▀█   █ ▓██▒▓██▒    ▒████▄           | |  \n"
      "  | |    ▓██    ▓██░▒██  ▀█▄  ▓██  ▀█ ██▒▒██▒▒██░    ▒██  ▀█▄         | |  \n"
      "  | |    ▒██    ▒██ ░██▄▄▄▄██ ▓██▒  ▐▌██▒░██░▒██░    ░██▄▄▄▄██        | |  \n"
      "  | |    ▒██▒   ░██▒ ▓█   ▓██▒▒██░   ▓██░░██░░██████▒ ▓█   ▓██▒       | |  \n"
      "  | |    ░ ▒░   ░  ░ ▒▒   ▓▒█░░ ▒░   ▒ ▒ ░▓  ░ ▒░▓  ░ ▒▒   ▓▒█░       | |  \n"
      "  | |    ░  ░      ░  ▒   ▒▒ ░░ ░░   ░ ▒░ ▒ ░░ ░ ▒  ░  ▒   ▒▒ ░       | |  \n"
      "  | |    ░      ░     ░   ▒      ░   ░ ░  ▒ ░  ░ ░     ░   ▒          | |  \n"
      "  | |           ░         ░  ░         ░  ░      ░  ░      ░  ░       | |  \n"
      "  | |                                                                 | |  \n"
      "__| |_________________________________________________________________| |__\n"
      "__   _________________________________________________________________   __\n"
      "  | |                                                                 | | \n");

  printf("                ============================================\n");
  printf("                      Your journey as a merchant begins!\n");
  printf("                         May the spirits guide you.\n");
  printf("                ============================================\n");
}

/* Displays the ASCII art of the boat
   Precondition: None
   @return none, just prints the ASCII art of the boat
*/
void displayBoat() {
  printf(
      "                 ;~\n"
      "               ./|\\.\n"
      "             ./ /| `\\.\n"
      "            /  | |   `\\.\n"
      "           |   | |     `\\.\n"
      "           |    \\|       `\\.\n"
      "         .__  `----|__________\\.__\n"
      "          \\-----''----.....____/\n"
      "           \\ _________________/\n"
      "      ~^~^~^~^~^`~^~^`^~^~^`^~^~^\n"
      "       ~^~^~`~~^~^`~^~^~`~~^~^~\n");
}

/* Displays the ASCII art for the Win screen
   Precondition: None
   @return none, just prints the ASCII art for the Win screen
*/
void displayWinScreen() {
  printf(
      "__| |_________________________________________________________________| |__\n"
      "__   _________________________________________________________________   __\n"
      "  | |                                                                 | |  \n"
      "  | |                                                                 | |  \n"
      "  | |    ██╗   ██╗ ██████╗ ██╗   ██╗    ██╗    ██╗██╗███╗   ██╗██╗    | |  \n"
      "  | |    ╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║    ██║██║████╗  ██║██║    | |  \n"
      "  | |     ╚████╔╝ ██║   ██║██║   ██║    ██║ █╗ ██║██║██╔██╗ ██║██║    | |  \n"
      "  | |      ╚██╔╝  ██║   ██║██║   ██║    ██║███╗██║██║██║╚██╗██║╚═╝    | |  \n"
      "  | |       ██║   ╚██████╔╝╚██████╔╝    ╚███╔███╔╝██║██║ ╚████║██╗    | |  \n"
      "  | |       ╚═╝    ╚═════╝  ╚═════╝      ╚══╝╚══╝ ╚═╝╚═╝  ╚═══╝╚═╝    | |  \n"
      "  | |                                                                 | |  \n"
      "__| |_________________________________________________________________| |__\n"
      "__   _________________________________________________________________   __\n"
      "  | |                                                                 | |  \n");
}

/* Displays the ASCII art for the Lose screen
   Precondition: None
   @return none, just prints the ASCII art for the Lose screen
*/
void displayLoseScreen() {
  printf(
      "__| |_______________________________________________________________________| |__\n"
      "__   _______________________________________________________________________   __\n"
      "  | |                                                                       | |  \n"
      "  | |                                                                       | |  \n"
      "  | |    ▀▄    ▄ ████▄   ▄       █     ████▄    ▄▄▄▄▄   ▄███▄               | |  \n"
      "  | |      █  █  █   █    █      █     █   █   █     ▀▄ █▀   ▀              | |  \n"
      "  | |       ▀█   █   █ █   █     █     █   █ ▄  ▀▀▀▀▄   ██▄▄                | |  \n"
      "  | |       █    ▀████ █   █     ███▄  ▀████  ▀▄▄▄▄▀    █▄   ▄▀             | |  \n"
      "  | |     ▄▀           █▄ ▄█         ▀                  ▀███▀   ██ ██ ██    | |  \n"
      "  | |                   ▀▀▀                                                 | |  \n"
      "  | |                                                                       | |  \n"
      "__| |_______________________________________________________________________| |__\n"
      "__   _______________________________________________________________________   __\n"
      "  | |                                                                       | |  \n");
}

// prints when storm occurs
void displayStormOccurence() {
  printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣷⣄⠀⠀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⠿⣤⣾⣿⣽⡿⠛⣆⣬⣿⣅⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣶⣿⡟⣟⠁⠀⠀⠀⠉⠁⡀⠀⡚⠉⠀⠈⠹⡶⣄⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠀⠀⠀⠀⢀⣀⣤⠶⠶⠒⢛⣉⡭⠞⠁⠈⠙⢷⡤⠴⠶⢤⡴⠞⠋⢻⣧⡤⣦⡀⠀⠀⠈⣇⡈⠛⢳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠀⠀⣠⡴⠛⣡⠤⠖⠚⠛⠉⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⢾⡏⠁⠀⠀⠙⢦⡀⠀⠨⣧⠀⠀⣿⣦⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⢀⣤⠴⠛⠁⣠⠞⠁⠀⠀⠀⠀⠀⣼⠁⠀⠀⠀⠀⠀⠀⠀⠀⢀⡜⣡⠏⠀⠀⠀⠀⣀⡠⢿⡀⢰⠿⣤⠀⢘⠋⠉⠻⣆⣤⣤⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠋⠁⠀⣠⠞⠁⠀⠀⠀⠀⠀⠀⠀⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠚⣰⠋⠀⠀⠀⣰⠞⠁⠀⠀⠉⠁⠀⠹⠗⠻⡆⠀⠀⠻⣯⡉⢣⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⢠⣾⠀⠀⠀⠀⣰⠀⠀⠀⠀⠀⠈⣇⠀⠀⠀⠀⠀⠀⠀⠀⠰⡏⠀⠀⠀⣸⠃⠀⠀⠀⠀⠀⢀⣀⡀⠀⠈⣽⡄⠀⠀⣼⡿⣾⠛⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠘⢻⣤⠀⠀⠀⠹⡆⠀⠠⡄⠀⠀⠘⣆⠀⠀⠀⠀⠀⠀⠀⣶⣧⠀⠀⠀⡇⠀⠀⠀⠀⣠⠞⠉⣸⡿⠿⠿⡶⣽⣦⣶⠿⢦⠈⠳⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠘⢹⡀⠀⠀⠀⠹⣆⠀⠙⠀⠀⠀⠘⢦⡀⠀⠀⠀⠀⠀⠋⣿⠀⠀⣇⡇⠀⢀⠀⣼⠁⡤⠟⠁⣀⣀⣰⣖⣚⠋⠀⠀⢸⠀⠀⢘⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⡄⠀⠀⠈⢧⡀⠀⠀⠀⠈⠳⣄⠀⠀⠀⠀⠀⠙⢦⡀⠀⠀⠀⠀⢳⠀⠀⢸⣇⠀⡿⠇⣿⡾⢁⡴⣋⣉⣀⣉⠃⠉⢢⡀⠀⢸⠀⠀⠀⢿⣤⣶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠙⢦⣀⣀⠀⠙⠢⣄⠀⠀⠀⠈⠳⢦⡀⠀⠀⠀⠀⠙⢦⠀⠀⠀⠀⠀⠀⠀⠉⢀⡇⡇⣷⢃⣏⡾⠉⠀⠀⠉⠙⢶⣶⣿⣄⣿⡄⠀⠀⠘⢿⡍⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠀⠈⠙⠲⢤⣀⡉⠳⠦⣄⡀⠀⠙⠶⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣧⡇⡟⣺⡿⠀⠀⠀⠀⠀⠀⠀⠻⢿⠁⠙⣷⡀⠀⠀⠀⣇⠘⠿⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⢢⣶⢄⡀⠀⠀⠀⠀⠉⠓⠦⠤⣉⣓⠦⣄⡀⠙⠦⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠿⣧⡀⣾⡇⠀⠀⠀⠀⠀⠀⠀⠀⠈⢷⣄⢹⣿⡄⠀⠀⣿⠤⢤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠈⠓⢭⣓⠒⠒⠒⠒⠲⠤⣄⡀⠀⠉⠛⠛⠿⠦⣄⣙⠳⢤⡀⠀⠀⠀⠀⠀⠸⡄⠈⢧⢷⢹⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢯⢏⣿⣶⡄⢹⡇⢈⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠀⠀⠉⠓⠲⢤⣤⣀⣀⠀⠉⠓⠲⠤⠔⠶⢴⣤⣭⣉⠀⠈⠓⠦⣄⠀⠀⠀⢻⡄⠈⣞⣆⢳⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠿⠻⣞⢿⣼⣧⠘⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠘⣶⣤⣀⠀⠀⠀⠀⠉⠙⠦⣤⣤⣀⣤⣤⣤⣀⣀⡀⠉⠳⢦⣀⠀⠀⠀⠀⠀⠙⣄⡈⢯⢪⡻⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢾⣽⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠀⠀⢹⣦⡍⠓⠶⠤⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠲⠤⣍⣙⣳⣦⡀⠀⠀⠀⠙⠶⣷⣹⣟⢷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠀⠀⠘⠿⣇⡀⠀⠀⠀⠀⠉⠛⠛⠒⠒⠦⠤⢤⣤⣀⡀⠀⠀⠀⠀⠈⠙⠀⠀⢤⠀⠀⠀⠀⠀⠻⢧⡉⠳⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠀⠀⠀⠀⠈⠙⠒⠶⠤⣤⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠓⠶⠦⢄⣀⠀⠈⠙⢿⣶⠆⠀⠀⠀⠈⢻⡄⠈⠻⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠙⠒⠒⠒⠒⠶⠤⠤⣤⣤⣀⣀⣉⠉⠉⠙⠋⠀⠀⠀⠀⠀⠀⠀⠻⡀⠀⠀⠉⠙⠶⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠒⠒⠶⠶⠶⠶⢶⠶⠶⢤⣀⠉⠓⠦⢤⣀⠀⠀⠙⢶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
  printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠒⠒⠒⠲⠤⢄⣀⣸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");

  printf(
      "╔═════════════════════════════════════════════════════════════════════╗\n"
      "║///██████/▄▄▄█████▓/▒█████///██▀███///███▄/▄███▓▓█████/▓█████▄//▐██▌/║\n"
      "║/▒██////▒/▓//██▒/▓▒▒██▒//██▒▓██/▒/██▒▓██▒▀█▀/██▒▓█///▀/▒██▀/██▌/▐██▌/║\n"
      "║/░/▓██▄///▒/▓██░/▒░▒██░//██▒▓██/░▄█/▒▓██////▓██░▒███///░██///█▌/▐██▌/║\n"
      "║///▒///██▒░/▓██▓/░/▒██///██░▒██▀▀█▄//▒██////▒██/▒▓█//▄/░▓█▄///▌/▓██▒/║\n"
      "║/▒██████▒▒//▒██▒/░/░/████▓▒░░██▓/▒██▒▒██▒///░██▒░▒████▒░▒████▓//▒▄▄//║\n"
      "║/▒/▒▓▒/▒/░//▒/░░///░/▒░▒░▒░/░/▒▓/░▒▓░░/▒░///░//░░░/▒░/░/▒▒▓//▒//░▀▀▒/║\n"
      "║/░/░▒//░/░////░//////░/▒/▒░///░▒/░/▒░░//░//////░/░/░//░/░/▒//▒//░//░/║\n"
      "║/░//░//░////░//////░/░/░/▒////░░///░/░//////░//////░////░/░//░/////░/║\n"
      "║///////░///////////////░/░/////░////////////░//////░//░///░/////░////║\n"
      "║////////////////////////////////////////////////////////░////////////║\n"
      "╚═════════════════════════════════════════════════════════════════════╝\n"
      "It consumed 1 of your turns");
}

void displayManilaPort() {
  printf(
      "╔════════════════════════════════════════════════════╗\n"
      "║-███╗---███╗-█████╗-███╗---██╗██╗██╗------█████╗----║\n"
      "║-████╗-████║██╔══██╗████╗--██║██║██║-----██╔══██╗---║\n"
      "║-██╔████╔██║███████║██╔██╗-██║██║██║-----███████║---║\n"
      "║-██║╚██╔╝██║██╔══██║██║╚██╗██║██║██║-----██╔══██║---║\n"
      "║-██║-╚═╝-██║██║--██║██║-╚████║██║███████╗██║--██║---║\n"
      "║-╚═╝-----╚═╝╚═╝--╚═╝╚═╝--╚═══╝╚═╝╚══════╝╚═╝--╚═╝---║\n"
      "║----------------------------------------------------║\n"
      "║-██████╗--██████╗-██████╗-████████╗-----██╗-██╗██╗--║\n"
      "║-██╔══██╗██╔═══██╗██╔══██╗╚══██╔══╝----██╔╝███║╚██╗-║\n"
      "║-██████╔╝██║---██║██████╔╝---██║-------██║-╚██║-██║-║\n"
      "║-██╔═══╝-██║---██║██╔══██╗---██║-------██║--██║-██║-║\n"
      "║-██║-----╚██████╔╝██║--██║---██║-------╚██╗-██║██╔╝-║\n"
      "║-╚═╝------╚═════╝-╚═╝--╚═╝---╚═╝--------╚═╝-╚═╝╚═╝--║\n"
      "╚════════════════════════════════════════════════════╝\n");
}

void displayTondoPort() {
  printf(
      "╔════════════════════════════════════════════════════════╗\n"
      "║-████████╗-██████╗-███╗---██╗██████╗--██████╗-----------║\n"
      "║-╚══██╔══╝██╔═══██╗████╗--██║██╔══██╗██╔═══██╗----------║\n"
      "║----██║---██║---██║██╔██╗-██║██║--██║██║---██║----------║\n"
      "║----██║---██║---██║██║╚██╗██║██║--██║██║---██║----------║\n"
      "║----██║---╚██████╔╝██║-╚████║██████╔╝╚██████╔╝----------║\n"
      "║----╚═╝----╚═════╝-╚═╝--╚═══╝╚═════╝--╚═════╝-----------║\n"
      "║--------------------------------------------------------║\n"
      "║-██████╗--██████╗-██████╗-████████╗-----██╗██████╗-██╗--║\n"
      "║-██╔══██╗██╔═══██╗██╔══██╗╚══██╔══╝----██╔╝╚════██╗╚██╗-║\n"
      "║-██████╔╝██║---██║██████╔╝---██║-------██║--█████╔╝-██║-║\n"
      "║-██╔═══╝-██║---██║██╔══██╗---██║-------██║-██╔═══╝--██║-║\n"
      "║-██║-----╚██████╔╝██║--██║---██║-------╚██╗███████╗██╔╝-║\n"
      "║-╚═╝------╚═════╝-╚═╝--╚═╝---╚═╝--------╚═╝╚══════╝╚═╝--║\n"
      "╚════════════════════════════════════════════════════════╝\n");
}

void displaySapaPort() {
  printf(
      "╔═══════════════════════════════════════════════════════════╗\n"
      "║------------███████╗-█████╗-██████╗--█████╗----------------║\n"
      "║------------██╔════╝██╔══██╗██╔══██╗██╔══██╗---------------║\n"
      "║------------███████╗███████║██████╔╝███████║---------------║\n"
      "║------------╚════██║██╔══██║██╔═══╝-██╔══██║---------------║\n"
      "║------------███████║██║--██║██║-----██║--██║---------------║\n"
      "║------------╚══════╝╚═╝--╚═╝╚═╝-----╚═╝--╚═╝---------------║\n"
      "║-----------------------------------------------------------║\n"
      "║██████╗--██████╗-██████╗-████████╗-----██╗██╗--██╗██╗------║\n"
      "║██╔══██╗██╔═══██╗██╔══██╗╚══██╔══╝----██╔╝██║--██║╚██╗-----║\n"
      "║██████╔╝██║---██║██████╔╝---██║-------██║-███████║-██║-----║\n"
      "║██╔═══╝-██║---██║██╔══██╗---██║-------██║-╚════██║-██║-----║\n"
      "║██║-----╚██████╔╝██║--██║---██║-------╚██╗-----██║██╔╝-----║\n"
      "║╚═╝------╚═════╝-╚═╝--╚═╝---╚═╝--------╚═╝-----╚═╝╚═╝------║\n"
      "╚═══════════════════════════════════════════════════════════╝\n");
}

void displayPandakanPort() {
  printf(
      "╔══════════════════════════════════════════════════════════════════════╗\n"
      "║-██████╗--█████╗-███╗---██╗██████╗--█████╗-██╗--██╗-█████╗-███╗---██╗-║\n"
      "║-██╔══██╗██╔══██╗████╗--██║██╔══██╗██╔══██╗██║-██╔╝██╔══██╗████╗--██║-║\n"
      "║-██████╔╝███████║██╔██╗-██║██║--██║███████║█████╔╝-███████║██╔██╗-██║-║\n"
      "║-██╔═══╝-██╔══██║██║╚██╗██║██║--██║██╔══██║██╔═██╗-██╔══██║██║╚██╗██║-║\n"
      "║-██║-----██║--██║██║-╚████║██████╔╝██║--██║██║--██╗██║--██║██║-╚████║-║\n"
      "║-╚═╝-----╚═╝--╚═╝╚═╝--╚═══╝╚═════╝-╚═╝--╚═╝╚═╝--╚═╝╚═╝--╚═╝╚═╝--╚═══╝-║\n"
      "║----------------------------------------------------------------------║\n"
      "║-██████╗--██████╗-██████╗-████████╗-----██╗██████╗-██╗----------------║\n"
      "║-██╔══██╗██╔═══██╗██╔══██╗╚══██╔══╝----██╔╝╚════██╗╚██╗---------------║\n"
      "║-██████╔╝██║---██║██████╔╝---██║-------██║--█████╔╝-██║---------------║\n"
      "║-██╔═══╝-██║---██║██╔══██╗---██║-------██║--╚═══██╗-██║---------------║\n"
      "║-██║-----╚██████╔╝██║--██║---██║-------╚██╗██████╔╝██╔╝---------------║\n"
      "║-╚═╝------╚═════╝-╚═╝--╚═╝---╚═╝--------╚═╝╚═════╝-╚═╝----------------║\n"
      "╚══════════════════════════════════════════════════════════════════════╝\n");
}

void displayBuyScreen() {
  printf(
      "▐▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▌\n"
      "▐//////////////////////////////////////////▌\n"
      "▐///███████████//█████//█████/█████/█████//▌\n"
      "▐//░░███░░░░░███░░███//░░███/░░███/░░███///▌\n"
      "▐///░███////░███/░███///░███//░░███/███////▌\n"
      "▐///░██████████//░███///░███///░░█████/////▌\n"
      "▐///░███░░░░░███/░███///░███////░░███//////▌\n"
      "▐///░███////░███/░███///░███/////░███//////▌\n"
      "▐///███████████//░░████████//////█████/////▌\n"
      "▐//░░░░░░░░░░░////░░░░░░░░//////░░░░░//////▌\n"
      "▐//////////////////////////////////////////▌\n"
      "▐▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▌\n");
}

void displaySellScreen() {
  printf(
      "▐▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▌\n"
      "▐///////////////////////////////////////////////////▌\n"
      "▐////█████████//██████████/█████///////█████////////▌\n"
      "▐///███░░░░░███░░███░░░░░█░░███///////░░███/////////▌\n"
      "▐//░███////░░░//░███//█/░//░███////////░███/////////▌\n"
      "▐//░░█████████//░██████////░███////////░███/////////▌\n"
      "▐///░░░░░░░░███/░███░░█////░███////////░███/////////▌\n"
      "▐///███////░███/░███/░///█/░███//////█/░███//////█//▌\n"
      "▐//░░█████████//██████████/███████████/███████████//▌\n"
      "▐///░░░░░░░░░//░░░░░░░░░░/░░░░░░░░░░░/░░░░░░░░░░░///▌\n"
      "▐///////////////////////////////////////////////////▌\n"
      "▐▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▌\n");
}

void displayTravelScreen() {
  printf(
      "╔═════════════════════════════════════════════════════════════════════════════╗\n"
      "║/███████████/███████████/////█████████///█████///█████/██████████/█████//////║\n"
      "║░█░░░███░░░█░░███░░░░░███///███░░░░░███/░░███///░░███/░░███░░░░░█░░███///////║\n"
      "║░///░███//░//░███////░███//░███////░███//░███////░███//░███//█/░//░███///////║\n"
      "║////░███/////░██████████///░███████████//░███////░███//░██████////░███///////║\n"
      "║////░███/////░███░░░░░███//░███░░░░░███//░░███///███///░███░░█////░███///////║\n"
      "║////░███/////░███////░███//░███////░███///░░░█████░////░███/░///█/░███//////█║\n"
      "║////█████////█████///█████/█████///█████////░░███//////██████████/███████████║\n"
      "║///░░░░░////░░░░░///░░░░░/░░░░░///░░░░░//////░░░//////░░░░░░░░░░/░░░░░░░░░░░/║\n"
      "╚═════════════════════════════════════════════════════════════════════════════╝\n");
}

void displaySuccessTransaction() {
  printf(
      "░█▀▀░█░█░█▀▀░█▀▀░█▀▀░█▀▀░█▀▀░█▀▀░█░█░█░░░█\n"
      "░▀▀█░█░█░█░░░█░░░█▀▀░▀▀█░▀▀█░█▀▀░█░█░█░░░▀\n"
      "░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀░░░▀▀▀░▀▀▀░▀\n");
}

void displayCancelTransaction() {
  printf(
      "░█▀▀░█▀█░█▀█░█▀▀░█▀▀░█░░░█░░░█▀▀░█▀▄░█\n"
      "░█░░░█▀█░█░█░█░░░█▀▀░█░░░█░░░█▀▀░█░█░▀\n"
      "░▀▀▀░▀░▀░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀▀░░▀\n");
}

// press any char to continue
void displayKeyPressContinue(void) {
  char cTemp;
  printf("\n\nEnter any character to continue:\n\n");
  printf("> ");
  scanf(" %c", &cTemp);
}

// Gets User Input on which difficulty to pick
void getDifficultyLevel(int *nDifficulty, int *nMaxStormsAllowed, int *nStormChance) {
  int validInput = 0;

  // Loop until a valid difficulty level is entered
  while (!validInput) {
    printf("Enter game difficulty (1: Easy, 2: Hard, 3: Difficult): ");
    if (scanf("%d", nDifficulty) == 1 && (*nDifficulty >= 1 && *nDifficulty <= 3)) {
      validInput = 1;  // Valid input, set flag to exit loop
    } else {
      printf("Invalid difficulty level. Please enter a valid difficulty (1, 2, or 3): ");
      printf("Please make sure it is a VALID input WITHIN the GIVEN RANGE or AVAILABLE options\n");
      printf("If this messaged LOOPED, it means you WERE NOT following the instructions. :)\n");
    }
  }

  // Set storm parameters based on difficulty
  if (*nDifficulty == 1) {         // Easy
    *nMaxStormsAllowed = 0;        // No storms allowed
    *nStormChance = 0;             // 0% chance of storm
  } else if (*nDifficulty == 2) {  // Hard
    *nMaxStormsAllowed = 5;        // Max of 5 storms
    *nStormChance = 30;            // 30% chance of storm
  } else if (*nDifficulty == 3) {  // Difficult
    *nMaxStormsAllowed = 15;       // Max of 12 storms
    *nStormChance = 70;            // 70% chance of storm
  }
}

// Function to check for storm occurrence based on difficulty
int checkForStorm(int nMaxStormsAllowed, int nStormChance, int *nStormsCount) {
  // Check if storm limit has been reached
  if (*nStormsCount >= nMaxStormsAllowed) {
    printf("The wind gods have protected you. Storms will no longer occur.\n");
    return 0;
  } else {
    // Generate random number for storm occurrence
    int nRandomValue = rand() % 100;
    if (nRandomValue < nStormChance) {
      (*nStormsCount)++;  // Increment storm count
      printf("Storm occurred. Total storms now: %d\n", *nStormsCount);
      displayStormOccurence();  // Display the ASCII art for the storm
      return 1;                 // Indicate storm occurred
    } else {
      printf("No storm occurred.\n");
      return 0;  // Indicate no storm
    }
  }
}

// Retrieves the player's merchant code
int getMerchantCode() {
  int nMerchantCode;
  int validInput = 0;

  // Loop until a valid merchant code is entered
  while (!validInput) {
    printf("Enter Player / Merchant's Code (0-999): ");
    if (scanf("%d", &nMerchantCode) == 1 && nMerchantCode >= 0 && nMerchantCode <= 999) {
      validInput = 1;  // Set flag to exit loop
    } else {
      printf("Invalid Merchant Code! It must be between 0 and 999.\n");
      printf("Please make sure it is a VALID input WITHIN the GIVEN RANGE or AVAILABLE options\n");
      printf("If this messaged LOOPED, it means you WERE NOT following the instructions. :)\n");
    }
  }
  return nMerchantCode;  // Return the valid merchant code
}

// Retrieves the player's initial gold
int getInitialGold() {
  int nInitialGold;
  int validInput = 0;  // Initialize flag to manage the loop

  // Loop until a valid amount of initial gold is entered
  while (!validInput) {
    printf("Enter initial capital (gold coins, greater than 0): ");
    if (scanf("%d", &nInitialGold) == 1 && nInitialGold > 0) {
      validInput = 1;  // Set flag to exit loop
    } else {
      printf("Invalid amount! Gold coins must be greater than zero.\n");
      printf("Please make sure it is a VALID input WITHIN the GIVEN RANGE or AVAILABLE options\n");
      printf("If this messaged LOOPED, it means you WERE NOT following the instructions. :)\n");
    }
  }
  return nInitialGold;  // Return the valid initial gold amount
}

// Retrieves the player's target profit percentage
int getInitialProfit() {
  int nInitialProfit;
  int validInput = 0;  // Initi

  // Loop until a valid profit percentage is entered
  while (!validInput) {
    printf("Enter target profit percentage (must be integer and greater than or equal to 20%%): ");
    if (scanf("%d", &nInitialProfit) == 1 && nInitialProfit >= MIN_PROFIT_PERCENTAGE) {
      validInput = 1;  // Set flag to exit loop
    } else {
      printf("Invalid percentage! Target profit must be greater than or equal to 20%%.\n");
      printf("Please make sure it is a VALID input WITHIN the GIVEN RANGE or AVAILABLE options\n");
      printf("If this messaged LOOPED, it means you WERE NOT following the instructions. :)\n");
    }
  }
  return nInitialProfit;  // Return the valid profit percentage
}

char showCurrentGameDetails(int nMerchantCode, int nLocation, int nCurrentDay, int nPlayerGold,
                            int nInitialGold, int nInitialProfit, int nMarketPriceCoconut,
                            int nMarketPriceRice, int nMarketPriceSilk, int nMarketPriceGun,
                            int nCargoCapacity, int nCurrentCargoCoconut, int nCurrentCargoRice,
                            int nCurrentCargoSilk, int nCurrentCargoGun, char cActionCode) {
  int nTotalCargo = nCurrentCargoCoconut + nCurrentCargoRice + nCurrentCargoSilk + nCurrentCargoGun;
  int nTargetProfitGold = nInitialGold * (1 + (nInitialProfit / 100.0));
  int nCurrentProfitPercentage = ((nPlayerGold - nInitialGold) / (float)nInitialGold) * 100;

  switch (nLocation) {
    case LOCATION_MANILA:
      displayManilaPort();
      break;
    case LOCATION_TONDO:
      displayTondoPort();
      break;
    case LOCATION_PANDAKAN:
      displayPandakanPort();
      break;
    case LOCATION_SAPA:
      displaySapaPort();
      break;
    default:
      printf("Unknown");
      break;
  }

  printf("=== Current Game Details ===\n");
  printf("+---------------------------+-----------------------+\n");
  printf("| %-25s | %-21d |\n", "Merchant Code", nMerchantCode);
  printf("| %-25s | %-21d |\n", "Day", nCurrentDay);
  printf("| %-25s | %-21d |\n", "Player Gold", nPlayerGold);
  printf("| %-25s | %3d%% (Target: %3d%%)   |\n", "Player Profit", nCurrentProfitPercentage, nInitialProfit);
  printf("| %-25s | %-21d |\n", "Gold Needed for Target", nTargetProfitGold);
  printf("+---------------------------+-----------------------+\n");

  printf("Cargo Details:\n");
  printf("+---------------------------+-----------------------+\n");
  printf("| %-25s | %-5d / %-13d |\n", "Cargo Capacity", nTotalCargo, nCargoCapacity);
  printf("| %-25s | Coconut: %-12d |\n", "Current Cargo", nCurrentCargoCoconut);
  printf("| %-25s | Rice: %-15d |\n", "", nCurrentCargoRice);
  printf("| %-25s | Silk: %-15d |\n", "", nCurrentCargoSilk);
  printf("| %-25s | Guns: %-15d |\n", "", nCurrentCargoGun);
  printf("+---------------------------+-----------------------+\n");

  printf("Market Prices:\n");
  printf("+---------------------------+-----------------------+\n");
  printf("| %-25s | Coconut: %-12d |\n", "Prices", nMarketPriceCoconut);
  printf("| %-25s | Rice: %-15d |\n", "", nMarketPriceRice);
  printf("| %-25s | Silk: %-15d |\n", "", nMarketPriceSilk);
  printf("| %-25s | Guns: %-15d |\n", "", nMarketPriceGun);
  printf("+---------------------------+-----------------------+\n");

  int validInput = 0;
  while (!validInput) {
    printf("+------------------+------+\n");
    printf("| Select an Action | Key  |\n");
    printf("+------------------+------+\n");
    printf("| Travel           | [T]  |\n");
    printf("| Buy              | [B]  |\n");
    printf("| Sell             | [S]  |\n");
    printf("| Quit             | [Q]  |\n");
    printf("+------------------+------+\n");
    printf("Choice: ");
    if (scanf(" %c", &cActionCode) == 1 && (cActionCode == 'T' || cActionCode == 't' ||
                                            cActionCode == 'B' || cActionCode == 'b' ||
                                            cActionCode == 'S' || cActionCode == 's' ||
                                            cActionCode == 'Q' || cActionCode == 'q')) {
      validInput = 1;  // Valid input, set flag to exit loop
    } else {
      printf("Invalid selection. Please enter T, B, S, or Q.\n");
      printf("Please make sure it is a VALID input WITHIN the GIVEN RANGE or AVAILABLE options\n");
      printf("If this message LOOPED, it means you WERE NOT following the instructions. :)\n");
    }
  }

  return cActionCode;  // Return the chosen action
}

// Displays the menu for buying goods and allows the player to select an item
int showBuyScreen(int *nPlayerGold, int nMarketPriceCoconut, int nMarketPriceRice,
                  int nMarketPriceSilk, int nMarketPriceGun, int nCargoCapacity,
                  int *nCurrentCargoCoconut, int *nCurrentCargoRice, int *nCurrentCargoSilk,
                  int *nCurrentCargoGun, char cActionCode) {
  int nPrice = 0;
  int nBuyAmount;

  // Display the buy screen in table format
  displayBuyScreen();
  printf("+-----------+------------+\n");
  printf("| Item      | Price (G)  |\n");
  printf("+-----------+------------+\n");
  printf("| Coconut   | %-10d |\n", nMarketPriceCoconut);
  printf("| Rice      | %-10d |\n", nMarketPriceRice);
  printf("| Silk      | %-10d |\n", nMarketPriceSilk);
  printf("| Guns      | %-10d |\n", nMarketPriceGun);
  printf("+-----------+------------+\n");

  printf("+----------------------------+\n");
  printf("| Your Gold: %-17d |\n", *nPlayerGold);
  printf("+----------------------------+\n");
  printf("| Available Items to Buy:    |\n");
  printf("+----------------------------+\n");
  printf("| [C]oconut                  |\n");
  printf("| [R]ice                     |\n");
  printf("| [S]ilk                     |\n");
  printf("| [G]uns                     |\n");
  printf("| [X] to cancel              |\n");
  printf("+----------------------------+\n");
  printf("Select an item: ");

  if (scanf(" %c", &cActionCode) != 1 || !(cActionCode == 'C' || cActionCode == 'c' ||
                                           cActionCode == 'R' || cActionCode == 'r' ||
                                           cActionCode == 'S' || cActionCode == 's' ||
                                           cActionCode == 'G' || cActionCode == 'g' ||
                                           cActionCode == 'X' || cActionCode == 'x')) {
    printf("Invalid selection. Please enter C, R, S, G, or X.\n");
    return 0;  // Invalid option, return to menu
  }

  // Handle the player's choice of item using do-while loops with return statements
  switch (cActionCode) {
    case 'C':
    case 'c': {
      do {
        printf("Enter the amount of Coconut to buy (or 'X' to cancel): ");
        if (scanf("%d", &nBuyAmount) != 1) {
          char cCancelCheck;
          scanf(" %c", &cCancelCheck);
          if (cCancelCheck == 'X' || cCancelCheck == 'x') return -2;  // Cancel the transaction
          printf("Invalid amount! Please enter a positive integer.\n");
        } else if (nBuyAmount <= 0) {
          printf("Invalid amount! Please enter a positive integer.\n");
        } else {
          nPrice = nMarketPriceCoconut * nBuyAmount;
          if (*nPlayerGold >= nPrice && (*nCurrentCargoCoconut + nBuyAmount + *nCurrentCargoRice + *nCurrentCargoSilk + *nCurrentCargoGun) <= nCargoCapacity) {
            *nPlayerGold -= nPrice;               // Deduct gold
            *nCurrentCargoCoconut += nBuyAmount;  // Add to Coconut Cargo
            displaySuccessTransaction();
            printf("You bought %d units of Coconut for %d gold.\n", nBuyAmount, nPrice);
            loadingBar();
            return nBuyAmount;  // Return the amount bought
          } else {
            printf("Not enough gold or cargo space. Please try again.\n");
          }
        }
      } while (1);  // Keep looping until a return is triggered
      break;
    }

    case 'R':
    case 'r': {
      do {
        printf("Enter the amount of Rice to buy (or 'X' to cancel): ");
        if (scanf("%d", &nBuyAmount) != 1) {
          char cCancelCheck;
          scanf(" %c", &cCancelCheck);
          if (cCancelCheck == 'X' || cCancelCheck == 'x') return -2;  // Cancel the transaction
          printf("Invalid amount! Please enter a positive integer.\n");
        } else if (nBuyAmount <= 0) {
          printf("Invalid amount! Please enter a positive integer.\n");
        } else {
          nPrice = nMarketPriceRice * nBuyAmount;
          if (*nPlayerGold >= nPrice && (*nCurrentCargoCoconut + nBuyAmount + *nCurrentCargoRice + *nCurrentCargoSilk + *nCurrentCargoGun) <= nCargoCapacity) {
            *nPlayerGold -= nPrice;            // Deduct gold
            *nCurrentCargoRice += nBuyAmount;  // Add to Rice Cargo
            displaySuccessTransaction();
            printf("You bought %d units of Rice for %d gold.\n", nBuyAmount, nPrice);
            loadingBar();
            return nBuyAmount;  // Return the amount bought
          } else {
            printf("Not enough gold or cargo space. Please try again.\n");
          }
        }
      } while (1);
      break;
    }

    case 'S':
    case 's': {
      do {
        printf("Enter the amount of Silk to buy (or 'X' to cancel): ");
        if (scanf("%d", &nBuyAmount) != 1) {
          char cCancelCheck;
          scanf(" %c", &cCancelCheck);
          if (cCancelCheck == 'X' || cCancelCheck == 'x') return -2;  // Cancel the transaction
          printf("Invalid amount! Please enter a positive integer.\n");
        } else if (nBuyAmount <= 0) {
          printf("Invalid amount! Please enter a positive integer.\n");
        } else {
          nPrice = nMarketPriceSilk * nBuyAmount;
          if (*nPlayerGold >= nPrice && (*nCurrentCargoCoconut + nBuyAmount + *nCurrentCargoRice + *nCurrentCargoSilk + *nCurrentCargoGun) <= nCargoCapacity) {
            *nPlayerGold -= nPrice;            // Deduct gold
            *nCurrentCargoSilk += nBuyAmount;  // Add to Silk Cargo
            displaySuccessTransaction();
            printf("You bought %d units of Silk for %d gold.\n", nBuyAmount, nPrice);
            loadingBar();
            return nBuyAmount;  // Return the amount bought
          } else {
            printf("Not enough gold or cargo space. Please try again.\n");
          }
        }
      } while (1);
      break;
    }

    case 'G':
    case 'g': {
      do {
        printf("Enter the amount of Guns to buy (or 'X' to cancel): ");
        if (scanf("%d", &nBuyAmount) != 1) {
          char cCancelCheck;
          scanf(" %c", &cCancelCheck);
          if (cCancelCheck == 'X' || cCancelCheck == 'x') return -2;  // Cancel the transaction
          printf("Invalid amount! Please enter a positive integer.\n");
        } else if (nBuyAmount <= 0) {
          printf("Invalid amount! Please enter a positive integer.\n");
        } else {
          nPrice = nMarketPriceGun * nBuyAmount;
          if (*nPlayerGold >= nPrice && (*nCurrentCargoCoconut + nBuyAmount + *nCurrentCargoRice + *nCurrentCargoSilk + *nCurrentCargoGun) <= nCargoCapacity) {
            *nPlayerGold -= nPrice;           // Deduct gold
            *nCurrentCargoGun += nBuyAmount;  // Add to Gun Cargo
            displaySuccessTransaction();
            printf("You bought %d units of Guns for %d gold.\n", nBuyAmount, nPrice);
            loadingBar();
            return nBuyAmount;  // Return the amount bought
          } else {
            printf("Not enough gold or cargo space. Please try again.\n");
          }
        }
      } while (1);
      break;
    }

    case 'X':
    case 'x':  // Cancel
      displayCancelTransaction();
      return -2;  // Return to previous menu

    default:  // Should not happen due to initial validation
      return 0;
  }
}

// Displays the menu for selling goods and allows the player to select an item
int showSellScreen(int *nPlayerGold, int nMarketPriceCoconut, int nMarketPriceRice,
                   int nMarketPriceSilk, int nMarketPriceGun, int *nCurrentCargoCoconut,
                   int *nCurrentCargoRice, int *nCurrentCargoSilk, int *nCurrentCargoGun,
                   char cActionCode) {
  int nPrice = 0;
  int transactionComplete = 0;
  int nSellAmount;

  // Display sell screen in table format
  displaySellScreen();
  printf("+-----------+------------+-------------+\n");
  printf("| Item      | Price (Gold) | In Cargo   |\n");
  printf("+-----------+------------+-------------+\n");
  printf("| Coconut   | %-10d | %-11d |\n", nMarketPriceCoconut, *nCurrentCargoCoconut);
  printf("| Rice      | %-10d | %-11d |\n", nMarketPriceRice, *nCurrentCargoRice);
  printf("| Silk      | %-10d | %-11d |\n", nMarketPriceSilk, *nCurrentCargoSilk);
  printf("| Guns      | %-10d | %-11d |\n", nMarketPriceGun, *nCurrentCargoGun);
  printf("+-----------+------------+-------------+\n");

  printf("+----------------------------+\n");
  printf("| Your Gold: %-17d |\n", *nPlayerGold);
  printf("+----------------------------+\n");
  printf("| Available Items to Sell:   |\n");
  printf("+----------------------------+\n");
  printf("| [C]oconut                  |\n");
  printf("| [R]ice                     |\n");
  printf("| [S]ilk                     |\n");
  printf("| [G]uns                     |\n");
  printf("| [X] to cancel              |\n");
  printf("+----------------------------+\n");
  printf("Select an item: ");

  // Scan item selection code
  if (scanf(" %c", &cActionCode) != 1) {
    printf("Invalid selection. Exiting.\n");
    return -1;
  }

  switch (cActionCode) {
    case 'C':
    case 'c':  // Sell coconuts
      do {
        printf("Enter the amount of Coconut to sell (or 'X' to cancel): ");
        if (scanf("%d", &nSellAmount) != 1) {
          char cCancelCheck;
          scanf(" %c", &cCancelCheck);
          if (cCancelCheck == 'X' || cCancelCheck == 'x') return -2;  // Cancel transaction
          printf("Invalid amount! Please enter a positive integer.\n");
        } else if (nSellAmount <= 0) {
          printf("Invalid amount! Please enter a positive integer.\n");
        } else if (nSellAmount > *nCurrentCargoCoconut) {
          printf("Not enough Coconut to sell. Please try again.\n");
        } else {
          nPrice = nMarketPriceCoconut * nSellAmount;
          *nPlayerGold += nPrice;                // Add gold
          *nCurrentCargoCoconut -= nSellAmount;  // Reduce cargo
          displaySuccessTransaction();
          printf("You sold %d units of Coconut for %d gold.\n", nSellAmount, nPrice);
          loadingBar();
          transactionComplete = 1;  // Mark transaction as complete
        }
      } while (!transactionComplete);
      return nSellAmount;

    case 'R':
    case 'r':  // Sell rice
      do {
        printf("Enter the amount of Rice to sell (or 'X' to cancel): ");
        if (scanf("%d", &nSellAmount) != 1) {
          char cCancelCheck;
          scanf(" %c", &cCancelCheck);
          if (cCancelCheck == 'X' || cCancelCheck == 'x') return -2;
          printf("Invalid amount! Please enter a positive integer.\n");
        } else if (nSellAmount <= 0) {
          printf("Invalid amount! Please enter a positive integer.\n");
        } else if (nSellAmount > *nCurrentCargoRice) {
          printf("Not enough Rice to sell. Please try again.\n");
        } else {
          nPrice = nMarketPriceRice * nSellAmount;
          *nPlayerGold += nPrice;
          *nCurrentCargoRice -= nSellAmount;
          displaySuccessTransaction();
          printf("You sold %d units of Rice for %d gold.\n", nSellAmount, nPrice);
          loadingBar();
          transactionComplete = 1;
        }
      } while (!transactionComplete);
      return nSellAmount;

    case 'S':
    case 's':  // Sell silk
      do {
        printf("Enter the amount of Silk to sell (or 'X' to cancel): ");
        if (scanf("%d", &nSellAmount) != 1) {
          char cCancelCheck;
          scanf(" %c", &cCancelCheck);
          if (cCancelCheck == 'X' || cCancelCheck == 'x') return -2;
          printf("Invalid amount! Please enter a positive integer.\n");
        } else if (nSellAmount <= 0) {
          printf("Invalid amount! Please enter a positive integer.\n");
        } else if (nSellAmount > *nCurrentCargoSilk) {
          printf("Not enough Silk to sell. Please try again.\n");
        } else {
          nPrice = nMarketPriceSilk * nSellAmount;
          *nPlayerGold += nPrice;
          *nCurrentCargoSilk -= nSellAmount;
          displaySuccessTransaction();
          printf("You sold %d units of Silk for %d gold.\n", nSellAmount, nPrice);
          loadingBar();
          transactionComplete = 1;
        }
      } while (!transactionComplete);
      return nSellAmount;

    case 'G':
    case 'g':  // Sell guns
      do {
        printf("Enter the amount of Guns to sell (or 'X' to cancel): ");
        if (scanf("%d", &nSellAmount) != 1) {
          char cCancelCheck;
          scanf(" %c", &cCancelCheck);
          if (cCancelCheck == 'X' || cCancelCheck == 'x') return -2;
          printf("Invalid amount! Please enter a positive integer.\n");
        } else if (nSellAmount <= 0) {
          printf("Invalid amount! Please enter a positive integer.\n");
        } else if (nSellAmount > *nCurrentCargoGun) {
          printf("Not enough Guns to sell. Please try again.\n");
        } else {
          nPrice = nMarketPriceGun * nSellAmount;
          *nPlayerGold += nPrice;
          *nCurrentCargoGun -= nSellAmount;
          displaySuccessTransaction();
          printf("You sold %d units of Guns for %d gold.\n", nSellAmount, nPrice);
          loadingBar();
          transactionComplete = 1;
        }
      } while (!transactionComplete);
      return nSellAmount;

    case 'X':
    case 'x':  // Cancel transaction
      displayCancelTransaction();
      return -2;

    default:  // Invalid option
      printf("Invalid selection. Please enter C, R, S, G, or X.\n");
      return 0;
  }
}

// Generates a random price for an item within a specified range
int giveRandomPrice(int nMinimumItemPrice, int nMaximumItemPrice) {
  return nMinimumItemPrice + rand() % (nMaximumItemPrice - nMinimumItemPrice + 1);
}

// Displays the available ports for traveling and allows the player to choose a destination
int showPortsOptions(int nCurrentDock, int *nCurrentDay) {
  int nNewDock;
  int validPortSelection = 0;

  while (!validPortSelection) {
    // Display available ports in a table format
    displayTravelScreen();
    printf("=== Available Ports for Traveling ===\n");
    printf("+------------------+------------------+\n");
    printf("| Port Number      | Port Name        |\n");
    printf("+------------------+------------------+\n");

    if (nCurrentDock != LOCATION_MANILA) {
      printf("| [1]              | Manila           |\n");
    }
    if (nCurrentDock != LOCATION_TONDO) {
      printf("| [2]              | Tondo            |\n");
    }
    if (nCurrentDock != LOCATION_PANDAKAN) {
      printf("| [3]              | Pandakan         |\n");
    }
    if (nCurrentDock != LOCATION_SAPA) {
      printf("| [4]              | Sapa             |\n");
    }
    printf("| [5]              | Cancel           |\n");
    printf("+------------------+------------------+\n");

    // Prompt player to select a new port
    printf("Select a port to travel to (not your current location): ");
    int input;
    scanf(" %d", &input);

    if ((input == 1 && nCurrentDock != LOCATION_MANILA) ||
        (input == 2 && nCurrentDock != LOCATION_TONDO) ||
        (input == 3 && nCurrentDock != LOCATION_PANDAKAN) ||
        (input == 4 && nCurrentDock != LOCATION_SAPA)) {
      nNewDock = input;        // Store the selected port
      validPortSelection = 1;  // Valid input, exit loop
      (*nCurrentDay)++;        // Increment day when traveling
    } else if (input == 5) {
      return nCurrentDock;  // Cancel operation, return current dock
    } else {
      printf("Invalid selection. Please choose a valid port.\n");
      printf("Please make sure it is a VALID input WITHIN the GIVEN RANGE or AVAILABLE options.\n");
      printf("If this message LOOPED, it means you WERE NOT following the instructions. :)\n");
    }
  }

  return nNewDock;  // Return the chosen port
}

// Sets prices for each location
void setMarketPrices(int nLocation, int *nMarketPriceCoconut, int *nMarketPriceRice, int *nMarketPriceSilk, int *nMarketPriceGun) {
  switch (nLocation) {
    case LOCATION_MANILA:  // Manila Location
      *nMarketPriceCoconut = giveRandomPrice(MANILA_COCONUT_MIN, MANILA_COCONUT_MAX);
      *nMarketPriceRice = giveRandomPrice(MANILA_RICE_MIN, MANILA_RICE_MAX);
      *nMarketPriceSilk = giveRandomPrice(MANILA_SILK_MIN, MANILA_SILK_MAX);
      *nMarketPriceGun = giveRandomPrice(MANILA_GUN_MIN, MANILA_GUN_MAX);
      break;
    case LOCATION_TONDO:  // Tondo
      *nMarketPriceCoconut = giveRandomPrice(TONDO_COCONUT_MIN, TONDO_COCONUT_MAX);
      *nMarketPriceRice = giveRandomPrice(TONDO_RICE_MIN, TONDO_RICE_MAX);
      *nMarketPriceSilk = giveRandomPrice(TONDO_SILK_MIN, TONDO_SILK_MAX);
      *nMarketPriceGun = giveRandomPrice(TONDO_GUN_MIN, TONDO_GUN_MAX);
      break;
    case LOCATION_PANDAKAN:  // Pandakan
      *nMarketPriceCoconut = giveRandomPrice(PANDAKAN_COCONUT_MIN, PANDAKAN_COCONUT_MAX);
      *nMarketPriceRice = giveRandomPrice(PANDAKAN_RICE_MIN, PANDAKAN_RICE_MAX);
      *nMarketPriceSilk = giveRandomPrice(PANDAKAN_SILK_MIN, PANDAKAN_SILK_MAX);
      *nMarketPriceGun = giveRandomPrice(PANDAKAN_GUN_MIN, PANDAKAN_GUN_MAX);
      break;
    case LOCATION_SAPA:  // Sapa
      *nMarketPriceCoconut = giveRandomPrice(SAPA_COCONUT_MIN, SAPA_COCONUT_MAX);
      *nMarketPriceRice = giveRandomPrice(SAPA_RICE_MIN, SAPA_RICE_MAX);
      *nMarketPriceSilk = giveRandomPrice(SAPA_SILK_MIN, SAPA_SILK_MAX);
      *nMarketPriceGun = giveRandomPrice(SAPA_GUN_MIN, SAPA_GUN_MAX);
      break;
  }
}

// loading
void loadingBar() {
  // Initialize char for printing loading bar
  char a = '#', b = '>';

  printf("\n\n");
  printf("\n\n\n\n\t\t\t\tLoading...\n\n");
  printf("\t\t\t\t");

  // Print initial loading bar "#"
  for (int i = 0; i < 26; i++) {
    printf("%c", a);
  }

  // Set the cursor ">" again starting point of loading bar
  printf("\r");
  printf("\t\t\t\t");

  // loading progress
  for (int i = 0; i < 26; i++) {
    printf("%c", b);

    // delay
    for (int j = 0; j < 10000000; j++) {
    }
  }

  printf("\n\n");  // Move to a new line after loading bar is complete
}
