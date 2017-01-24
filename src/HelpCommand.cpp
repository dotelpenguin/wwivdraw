#include<HelpCommand.hpp>
#include "mdraw.h"

const int  help_lines = 54;
char* online_help[] = {
	"EDITING KEYS :",
	" CURSOR KEYS - Move cursor",
	" PGDWN/UP    - Page DOWN/UP",
	" POS 1       - Jump to begin of line",
	" END         - Jump to end of line",
	" TAB         - Go to next tab",
	" ALT+TAB     - Go to last tab",
	" INSERT      - Toggle insert mode ON/OFF",
	" SHIFT+F1-F10- Change chartable 1-10",
	" F1-F10      - Write character",
	" ALT+Y       - Delte a line",
	" ALT+I       - Insert a line",
	" ALT+1       - Delte a row",
	" ALT+2       - Insert a row",
	" PRINTSCREEN - Toggle fullscreen mode ON/OFF",
	"",
	"PALETTE KEYS :",
	" ALT+A       - Change color",
	" ALT+U       - Pick up color",
	" ALT+Z       - BLINK ON/OFF",
	"",
	"SETUP KEYS :",
	" ALT+T       - TAB setup",
	" ALT+W       - Set outline font type",
	" CTRL+S      - View/edit SAUCE",
	" ALT+M       - Select effect style/colors",
	"",
	"SCREEN KEYS :",
	" ALT+V       - View screen in 320x200",
	" ALT+P       - Select page",
	" ALT+C       - Clear screen",
	" ALT+G       - Global commands",
	"",
	"FONT KEYS :",
	" ALT+E       - Toggle elite mode ON/OFF",
	" ALT+F       - Select font",
	" ALT+N       - Font mode ON/OFF",
	" CTRL+F      - Screen font editor",
	"",
	"BLOCK KEYS :",
	" ALT+B    - Block mode (=Left button)",
	" ALT+R    - UNDO last block operation",
	"",
	"MISCELEANEOUS KEYS :",
	" ALT+L    - Load",
	" ALT+S    - Save",
	" ALT+X    - Exit",
	" ALT+D    - Draw line mode",
	" ALT+-    - Draw mode",
	" ALT+K    - Ascii table",
	" ALT+H    - This screen",
	" CTRL+P   - Palette editor",
	" ESC      - Enter menue mode(=right buton)",
	"",
	"<EOH>"
};

unsigned char helpansi[3338]={
0,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,220,1,220,1,220,1,220,1,220,1,220,1,220,1,220,1,32,
1,220,1,220,1,220,1,220,1,220,1,220,1,220,1,32,1,220,1,220,
1,220,1,0,7,0,7,0,7,0,7,0,7,220,1,220,1,220,1,220,
1,220,1,220,1,220,1,0,7,0,7,0,7,0,7,0,7,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,220,1,223,1,32,1,220,8,220,8,32,8,32,8,220,8,220,8,32,
8,223,1,32,1,220,8,32,8,220,8,220,8,220,8,32,8,223,1,32,
1,220,8,32,8,223,1,220,1,32,1,220,1,223,1,32,1,220,8,32,
8,220,8,220,8,220,8,32,8,223,1,220,1,0,7,0,7,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,219,15,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,220,1,223,
1,32,1,220,8,220,7,223,7,223,7,32,7,32,7,223,7,223,7,220,
7,220,8,223,8,223,7,219,7,223,7,223,7,223,7,223,8,32,8,223,
8,223,7,219,7,220,8,32,8,223,1,220,1,32,1,223,8,223,7,220,
7,223,7,223,7,223,7,220,7,220,8,32,8,219,1,0,7,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,223,8,32,8,220,8,32,8,219,15,32,15,223,8,32,8,32,8,220,
8,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,219,1,32,
1,219,8,219,7,219,8,223,15,223,15,223,15,223,15,223,15,223,15,219,
8,219,7,219,8,32,8,219,8,219,7,223,15,223,15,223,15,223,15,223,
8,222,8,219,15,219,15,219,8,220,8,32,8,219,1,32,1,32,1,219,
15,219,15,220,15,220,15,223,15,223,8,32,8,219,1,0,7,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,220,8,32,8,220,
7,32,7,220,7,223,15,220,7,219,15,220,7,223,15,220,7,32,7,32,
7,220,8,0,7,0,7,0,7,0,7,0,7,0,7,0,7,223,1,220,
1,32,1,223,8,223,7,220,7,220,7,220,8,220,8,220,7,220,7,223,
7,223,8,220,8,220,7,223,15,219,7,220,7,220,7,220,8,32,8,220,
8,220,7,219,7,223,7,223,7,223,7,220,7,220,8,32,8,220,7,219,
7,223,8,223,8,223,8,32,8,220,1,223,1,32,1,32,1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,220,7,32,
7,223,15,220,7,220,15,223,127,220,127,223,127,220,15,220,7,223,15,32,
15,220,8,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,223,1,223,1,32,1,223,8,223,8,32,8,32,8,223,8,223,8,32,
8,32,8,32,8,223,8,32,8,223,8,223,8,223,8,72,1,76,1,80,
1,223,8,32,8,32,8,223,1,32,1,223,8,32,8,32,8,223,8,32,
8,223,1,223,1,223,1,223,1,32,1,32,1,32,1,32,1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,
7,0,7,0,7,0,7,0,7,0,7,223,15,223,15,223,15,223,15,219,
15,32,15,219,15,219,7,219,15,219,15,219,127,32,127,219,15,223,15,219,
15,223,15,223,15,32,15,223,15,32,15,223,15,32,15,223,15,223,15,223,
15,223,15,223,15,223,15,223,15,223,15,223,15,223,7,223,15,223,7,223,
7,223,7,223,7,223,7,223,7,223,7,223,7,223,7,223,7,223,7,223,
8,223,7,223,8,223,8,223,8,223,8,223,8,223,8,223,8,223,8,223,
8,223,8,223,8,223,8,223,8,223,8,223,8,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,220,8,32,8,223,
7,220,15,32,15,223,15,220,127,223,127,220,127,223,15,223,7,220,15,32,
15,220,8,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,220,8,32,8,32,
8,32,8,223,7,220,15,220,7,219,15,223,7,220,15,220,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,220,8,32,8,32,8,32,8,220,15,32,15,220,8,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,32,7,0,
7,0,7,0,7,0,7,0,7,220,15,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,32,7,32,7,0,7,0,
7,0,7,0,7,0,7,0,7,219,15,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
7,32,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,220,15,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,219,15,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,32,7,0,7,0,
7,0,7,0,7,0,7,0,7,219,15,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
7,0,7,32,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,219,15,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
7,0,7,0,7,32,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,219,15,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
7,0,7,0,7,0,7,32,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,219,15,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
7,0,7,0,7,0,7,0,7,32,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,219,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
7,0,7,0,7,0,7,0,7,0,7,32,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,219,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,0,7,0,7,219,8,32,8,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,
7,0,7,0,7,0,7,0,7,0,7,0,7,32,7,0,7,0,7,0,
7,0,7,0,7,0,7,0,7,219,7,220,7,220,7,220,7,220,7,220,
7,220,7,220,7,220,7,220,7,220,7,220,7,220,7,220,8,220,8,220,
7,220,7,220,7,220,8,220,7,220,8,220,8,220,8,220,8,220,8,220,
8,220,8,220,8,220,8,220,8,220,8,220,8,220,8,220,8,220,8,220,
8,220,8,220,8,220,8,220,8,220,8,220,8,220,8,220,8,220,8,220,
8,220,8,220,8,220,8,220,8,220,8,220,8,219,8,32,8};

void HelpCommand::run()
{
	int oldPage = -1, page=0;
	SDL_Event event;
	bool done = false;
	do {
		if (oldPage != page) {
			ansout << clrscrn() << gotoxy(0, 0);
			for (int x = 1; x < 1669; ++x) {
				if (helpansi[x << 1] == 0) {
					helpansi[x << 1] = ' ';
				}
				ansout << textattr(helpansi[(x<<1) + 1]) << helpansi[x<<1];
				if (COLS > 80 && x % 80 ==0) {
					ansout << endl;
				}
			}
			for (int x = 0; x <= 12; ++x) {
				ansout << gotoxy(22, 7 + x);
				CoolWrite(online_help[x + page]);
			}
		}
		oldPage = page;
		ansout << gotoxy(60, 21) << textattr(7) << "[";
		ansout << textattr(15) << setfill('0') << setw(3) << (page*100)/(help_lines-12) << '%';
		ansout << textattr(7) << "]";
		
		screenEngine.showScreen();
		SDL_Delay(50);
		
		while (SDL_PollEvent(&event)) {
			switch (event.type){
				case SDL_QUIT:
					exit(0);
					break;
				case SDL_KEYDOWN:
					switch (event.key.keysym.sym) {
						case SDLK_RETURN:
						case SDLK_ESCAPE:
							done = true;
							break;
						case SDLK_UP:
							if (page > 0) {
								page--;
							}
							break;
						case SDLK_DOWN:
							if (page < help_lines - 12) {
								page++;
							}
							break;
						case SDLK_PAGEUP:
							if (page >= 12) {
								page-=12; 
							} else {
								page=0;
							}
							break;
						case SDLK_PAGEDOWN:
							if (page < help_lines - 24) {
								page+=12;
							} else {
								page=help_lines-12;
							}
							break;
						default:
							break;
					}
					break;
			}
		}
	} while (!done);  
}
