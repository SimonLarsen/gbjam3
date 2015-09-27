#ifndef SELECT_H
#define SELECT_H

void initSelect();
void setTile(UBYTE x, UBYTE y, UBYTE *tile);
UBYTE *selectGetBannerData();
void selectTransitionIn();
void selectTransitionOut();
void updateSelectScreen();
void selectUpdateSprites();
void selectScrollCircles();
void enterSelect();

#define SELECT_IDLE		0U
#define SELECT_FADEOUT	1U
#define SELECT_FADEIN	2U

#endif
