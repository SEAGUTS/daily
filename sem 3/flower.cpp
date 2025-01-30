#include <graphics.h>
#include <cmath>
#include <iostream>

void drawPetal(int x, int y, int radius, int angle) {
    for (int i = 0; i < 60; ++i) {
        float theta = (angle + i) * M_PI / 180.0;
        int x1 = x + radius * cos(theta);
        int y1 = y - radius * sin(theta);
        putpixel(x1, y1, RED);
    }
}

void drawFlower() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int xCenter = getmaxx() / 2;
    int yCenter = getmaxy() / 2;

    // Draw petals
    for (int i = 0; i < 36; ++i) {
        drawPetal(xCenter, yCenter, 50, i * 10);
        drawPetal(xCenter, yCenter, 50, i * 10 + 120);
    }

    // Draw center
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(xCenter, yCenter, 30, 30);

    getch();
    closegraph();
}

int main() {
    drawFlower();
    return 0;
}
