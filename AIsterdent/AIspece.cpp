#include <iostream>
#include <easyx.h>
#include <Windows.h>
#include <conio.h>
#include <string.h>
#include <graphics.h>
using namespace std;
struct Map
{
	IMAGE Max[999];
};
/*Basic AI Function , Developed For C++*/
void JaZaiDongHua()
{
	for (int i = 0; i <= 100; i++) {
		cout << i << endl;
		Sleep(10);
		system("cls");
	}
	return;
}
int ZhuCaiDang(Map *m){
	clearcliprgn();
	loadimage(&m->Max[1], "01.jpg");
	loadimage(&m->Max[2], "02.jpg");
	initgraph(1000, 500, EX_SHOWCONSOLE);
	while (true) {
		BeginBatchDraw();
		//Helloset
		setbkmode(TRANSPARENT);
		putimage(0, 0, &m->Max[1]);
		setcolor(RGB(170, 170, 170));
		circle(300, 500, 40);
		putimage(0, 0, &m->Max[2]);
		settextcolor(WHITE);
		settextstyle(50, NULL, "Î¢ÈíÑÅºÚ");
		outtextxy(301, 0, "OperSedr");
		settextstyle(20, NULL, "Î¢ÈíÑÅºÚ");
		outtextxy(301, 50, "SL.Ofesstr");
		settextstyle(30, NULL, "Î¢ÈíÑÅºÚ");
		settextcolor(BLACK);
		outtextxy(50, 70, "SetGames");
		outtextxy(50, 120, "MultiplayerGame");
		outtextxy(50, 170, "AiPlayerGame");
		outtextxy(50, 220, "MyHome");
		outtextxy(50, 270, "ExitGame");
		/*XunZahoZuzBiaoQiu*/

		EndBatchDraw();
		/*get the msg to ther*/
		if (MouseHit()) {
			MOUSEMSG msg = GetMouseMsg();
			cout << msg.x << " " << msg.y << endl;
			/*set gitch*/
			switch (msg.uMsg) {
			case WM_LBUTTONDOWN: {
				if(msg.x>=50&&msg.x<=230&&msg.y>=70&&msg.y<=100)
				{cout << "over srt  1" << endl;}
				if (msg.x >= 50 && msg.x <= 230 && msg.y >= 120 && msg.y <= 150)
				{cout << "over srt  2" << endl;}
				if (msg.x >= 50 && msg.x <= 230 && msg.y >= 170 && msg.y <= 200)
				{cout << "over srt  3" << endl;}
				if (msg.x >= 50 && msg.x <= 230 && msg.y >= 220 && msg.y <= 250)
				{cout << "over srt  4" << endl;}
				if (msg.x >= 50 && msg.x <= 230 && msg.y >= 270 && msg.y <= 300)
				{
					HWND winds = GetHWnd();
					cout << "over srt  5" << endl;
					MessageBox(winds, "È·¶¨ÍË³öAIspece£¿","ÍË³ö³ÌÐò",MB_OK);
					return 1914;
				}
				cout << "oner paset" << endl; }
			}
		}
	}
}
int main() {
	Map Ms;
	JaZaiDongHua();
	initgraph(700, 300, EX_SHOWCONSOLE);
	while (true) {
		for (int i = 0; i <= 1400; i++) {
			BeginBatchDraw();
			settextcolor(WHITE);
			settextstyle(30, NULL, "Î¢ÈíÑÅºÚ");
			outtextxy(0, 0, "OperSedr");
			line(0, 300, i, 300);
			line(0, 299, i, 300);
			line(0, 328, i, 300);
			line(0, 397, i, 300);
			EndBatchDraw();
			Sleep(10);
			cleardevice();
			cout << i << endl;
	 }
		break;
	}
	int GetrMuse;
	while (true) {GetrMuse = ZhuCaiDang(&Ms);
	switch(GetrMuse)
	{
	 case 1902:
		 break;
	 case 1914:
		 return 0;
		 break;
	}
	}
}