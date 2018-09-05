#include "graphics.h"

int draw()
{
    initgraph(800, 600);
    setbkcolor(0xFFFFFF);

    PIMAGE img = newimage();
    getimage(img, "images\\1.png");
    putimage(0, 0, img);
    delimage(img);

    setcolor(0x00FF00);
    line(100, 100, 200, 200);
    setcolor(0x0000FF);
    circle(200, 200, 100);
    setfillcolor(EGERGB(255, 0, 0));
    bar(300, 300, 500, 500);
    bar3d(500, 500, 600, 600, 0, false);
    int points[] = {10, 10, 10, 45, 60, 70, 50, 20, 10, 10};
    drawpoly(5, points);
    rectangle(20, 50, 60, 90);
    moveto(50, 100);
    setfont(-30, 0,"楷体");
    outtext("你好！");
    outtextxy(700, 500, "hello");
    randomize();
    int x = random(10000);
    xyprintf(0, 0 , "%d", x);

    /**
    char str[100];
    inputbox_getline("这是一个对话框",
                    "请随便\n输入一串字符，输入完请回车",
                    str,
                    sizeof(str)/sizeof(*str));
    outtextxy(0, 0, str);
    */

    while(kbhit())
    {
        /**
        char a = getch();
        if (a == 'w')
        {
            outtextxy(0, 0, "向上");
        }
        else if (a == 's')
        {
            outtextxy(0, 0, "向下");
        }
        else if (a == 'q')
        {
            exit(0); // 退出程序
        }
        */
        char ch = getch();
        if (ch == 38)
        {
            outtextxy(0, 0, "向上");
        }
        else if (ch == 39)
        {
            outtextxy(0, 0, "向右");
        }
        else if (ch == 37)
        {
            outtextxy(0, 0, "向左");
        }
        else if (ch == 40)
        {
            outtextxy(0, 0, "向下");
        }
        else if (ch == 'q')
        {
            exit(0);
        }
    }

    // cleardevice();
    getch();
    closegraph();
    return 0;
}
