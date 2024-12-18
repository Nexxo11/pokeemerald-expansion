#ifndef GUARD_MAIN_MENU_H
#define GUARD_MAIN_MENU_H

void CB2_InitMainMenu(void);
void CreateYesNoMenuParameterized(u8 x, u8 y, u16 baseTileNum, u16 baseBlock, u8 yesNoPalNum, u8 winPalNum);
void NewGameBirchSpeech_SetDefaultPlayerName(u8);
void CB2_ReinitMainMenu(void);
void CB2_NewGameBirchSpeech_FromNewMainMenu(void);

void Task_NewGameBirchSpeech_Init(u8 taskId);
void CB2_ContinueSavedGame(void);
void CB2_InitOptionMenu(void);
void Task_DisplayMainMenuInvalidActionError(u8 taskId);
void Task_HandleMainMenuBPressed(u8);

#endif // GUARD_MAIN_MENU_H
