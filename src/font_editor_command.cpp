#include "font_editor_command.h"
#include "mdraw.h"

unsigned char fonteditorAnsi[4000]={
32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,32,7,32,7,32,7,32,7,49,7,32,7,32,7,50,7,32,7,32,7,51,7,32,7,32,7,52,7,32,7,32,7,53,7,32,7,32,7,54,7,32,7,32,7,55,7,32,7,32,7,56,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,32,7,49,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,67,7,104,7,97,7,114,7,97,7,99,7,116,7,101,7,114,7,115,7,58,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,32,7,50,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,32,7,51,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,32,7,52,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,32,7,53,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,32,7,54,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,32,7,55,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,32,7,56,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,32,7,57,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,250,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,49,7,48,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,49,7,49,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,67,7,104,7,97,7,114,7,32,7,67,7,111,7,100,7,101,7,58,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,49,7,50,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,49,7,51,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,84,7,105,7,108,7,101,7,115,7,101,7,116,7,58,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,49,7,52,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,49,7,53,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,49,7,54,7,32,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,45,7,32,7,32,7,32,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,176,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,91,7,67,7,85,7,82,7,83,7,82,7,93,7,32,7,77,7,111,7,118,7,101,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,91,7,84,7,65,7,66,7,93,7,32,7,32,7,32,7,83,7,119,7,105,7,116,7,99,7,104,7,32,7,99,7,104,7,97,7,114,7,47,7,115,7,101,7,108,7,101,7,99,7,116,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,91,7,69,7,78,7,84,7,69,7,82,7,93,7,32,7,65,7,99,7,99,7,101,7,112,7,116,7,32,7,102,7,111,7,110,7,116,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,91,7,69,7,83,7,67,7,93,7,32,7,32,7,32,7,65,7,98,7,98,7,111,7,114,7,116,7,32,7,99,7,104,7,97,7,110,7,103,7,101,7,115,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,
32,7,91,7,83,7,80,7,65,7,67,7,69,7,93,7,32,7,84,7,111,7,103,7,103,7,108,7,101,7,32,7,80,7,111,7,105,7,110,7,116,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7,32,7
};

void FontEditorCommand::drawCharTable(int posX, int posY)
{
	unsigned char drawChar = 0;
	for (int y = 0; y < 8; ++y) {
		for (int x = 0; x < 32; ++x) {
			if (currentSelectedChar == drawChar) {
				ansout << textattr(15);
			} else {
				ansout << textattr(7);
			}
			ansout << gotoxy(posX + x, posY + y) << drawChar;
			drawChar++;
		}
	}
}

void FontEditorCommand::drawTileSet(int posX, int posY, int width, int height)
{
	ansout << textattr(7);
	for (int y = 0; y < height; ++y) {
		for (int x = 0; x < width; ++x) {
			ansout << gotoxy(posX + x, posY + y) << currentSelectedChar;
		}
	}
}

void FontEditorCommand::drawFontEditor(int posX, int posY)
{
	// draw Y marks
	for (int y = 0; y < 16; ++y) {
		ansout << gotoxy(posX + 1 - (y + 1) / 10, posY + 1 + y);
		if (cursorY == y) {
			ansout << textattr(15);
		} else {
			ansout << textattr(8);
		}
		ansout << y + 1;
	}
	
	// draw X marks
	for (int x = 0; x < 8; ++x) {
		ansout << gotoxy(posX + 4 + x * 3, posY);
		if (cursorX == x) {
			ansout << textattr(15);
		} else {
			ansout << textattr(8);
		}
		ansout << x + 1;
	}
	
	// draw 'field'
	Uint8* fnt = screenEngine.getFont();
	for (int y = 0; y < 16; ++y) {
		Uint8 line = *(fnt + currentSelectedChar * 16 + y);
		for (int x = 0; x < 8; ++x) {
			ansout << gotoxy(posX + 3 + x * 3, posY + 1 + y);
			if ((line & (128 >> x)) != 0) {
				if (cursorX == x && cursorY == y) {
					ansout << textattr(15 + 16);
					ansout << (char)178 << (char)178 << (char)178;
				} else {
					ansout << textattr(15);
					ansout << (char)177 << (char)177 << (char)177;
				}
			} else {
				if (cursorX == x && cursorY == y) {
					ansout << textattr(7 + 16);
					ansout << (char)177 << (char)177 << (char)177;
				} else {
					ansout << textattr(7);
					ansout << (char)176 << (char)176 << (char)176;
				}
			}
		}
	}
}

void FontEditorCommand::cursorLeft()
{
	if (selectMode) {
		--currentSelectedChar;
	} else {
		if (cursorX > 0) {
			--cursorX;
		} else {
			cursorX = 7;
			if (cursorY > 0) {
				cursorY--;
			} else {
				cursorY = 15;
			}
		}
	}
}

void FontEditorCommand::cursorRight()
{
	if (selectMode) {
		++currentSelectedChar;
	} else { 
		if (cursorX < 7) {
			++cursorX;
		} else {
			cursorX = 0;
			if (cursorY < 15) {
				cursorY++;
			} else {
				cursorY = 0;
			}
		}
	}
}

void FontEditorCommand::run()
{
	SDL_Event event;
	bool done = false;
	unsigned char saveFontData[4096];
	Uint8* fnt = screenEngine.getFont();
	copy(fnt, fnt + 4096, saveFontData);
	
	do {
		ansout << clrscrn() << gotoxy(0, 0);
		for (unsigned int x = 1; x < sizeof(fonteditorAnsi) / 2; ++x) {
			if (fonteditorAnsi[x << 1] == 0) {
				fonteditorAnsi[x << 1] = ' ';
			}
			ansout << textattr(fonteditorAnsi[(x<<1) + 1]) << fonteditorAnsi[x<<1];
			if (COLS > 80 && x % 80 ==0) {
				ansout << endl;
			}
		}
		
		drawCharTable(30, 3);
		drawTileSet(30, 15, 32, 4);
		drawFontEditor(0, 1);
		
		// print char code
		ansout << gotoxy(42, 12) << (int)currentSelectedChar;
		
		screenEngine.showScreen();
		SDL_Delay(50);
		
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
				case SDL_QUIT:
					exit(0);
					break;
				case SDL_KEYDOWN:
					switch (event.key.keysym.sym) {
						case SDLK_TAB:
							selectMode = !selectMode;
							break;
						case SDLK_SPACE:
							if (!selectMode) {
								*(fnt + currentSelectedChar * 16 + cursorY) ^= 128 >> cursorX;
								cursorRight();
							}
							break;
						case SDLK_ESCAPE:
							done = true;
							copy(saveFontData, saveFontData + 4096, fnt);
							break;
						case SDLK_RETURN:
							done = true;
							break;
						case SDLK_UP:
							if (selectMode) {
								currentSelectedChar -= 32;
							} else {
								if (cursorY > 0) {
									--cursorY;
								}
							}
							break;
						case SDLK_DOWN:
							if (selectMode) {
								currentSelectedChar += 32;
							} else {
								if (cursorY < 15) {
									++cursorY;
								}
							}
							break;
						case SDLK_LEFT:
							cursorLeft();
							break;
						case SDLK_RIGHT:
							cursorRight();
							break;
						default:
							break;
					}
					break;
			}
		}
	} while (!done);  
}
