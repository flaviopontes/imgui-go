#pragma once

#include "imguiWrapperTypes.h"

#ifdef __cplusplus
extern "C"
{
#endif

extern IggContext iggCreateContext(IggFontAtlas sharedFontAtlas);
extern void iggDestroyContext(IggContext context);
extern IggContext iggGetCurrentContext();
extern void iggSetCurrentContext(IggContext context);

extern IggIO iggGetCurrentIO(void);
extern IggGuiStyle iggGetCurrentStyle(void);
extern void iggNewFrame(void);
extern void iggRender(void);
extern IggDrawData iggGetDrawData(void);
extern void iggEndFrame(void);

extern char const *iggGetVersion(void);
extern void iggShowDemoWindow(IggBool *open);
extern void iggShowUserGuide(void);

extern IggBool iggBegin(char const *id, IggBool *open, int flags);
extern void iggEnd(void);
extern IggBool iggBeginChild(char const *id, IggVec2 const *size, IggBool border, int flags);
extern void iggEndChild(void);

extern void iggSetNextWindowPos(IggVec2 const *pos, int cond, IggVec2 const *pivot);
extern void iggSetNextWindowSize(IggVec2 const *size, int cond);
extern void iggSetNextWindowFocus(void);
extern void iggSetNextWindowBgAlpha(float value);

extern void iggPushFont(IggFont handle);
extern void iggPopFont(void);
extern void iggPushStyleColor(int index, IggVec4 const *col);
extern void iggPopStyleColor(int count);
extern void iggPushStyleVarFloat(int index, float value);
extern void iggPushStyleVarVec2(int index, IggVec2 const *value);
extern void iggPopStyleVar(int count);

extern void iggPushItemWidth(float width);
extern void iggPopItemWidth(void);
extern void iggPushTextWrapPos(float wrapPosX);
extern void iggPopTextWrapPos(void);

extern void iggPushID(char const *id);
extern void iggPopID(void);

extern void iggTextUnformatted(char const *text);
extern void iggLabelText(char const *label, char const *text);

extern IggBool iggButton(char const *label, IggVec2 const *size);
extern IggBool iggCheckbox(char const *label, IggBool *selected);

extern IggBool iggBeginCombo(char const *label, char const *previewValue, int flags);
extern void iggEndCombo(void);

extern IggBool iggSliderInt(char const *label, int *value, int minValue, int maxValue, char const *format);

extern void iggSeparator(void);
extern void iggSameLine(float posX, float spacingW);
extern void iggBeginGroup(void);
extern void iggEndGroup(void);
extern float iggGetTextLineHeight(void);
extern float iggGetTextLineHeightWithSpacing(void);

extern IggBool iggSelectable(char const *label, IggBool selected, int flags, IggVec2 const *size);

extern IggBool iggBeginMainMenuBar(void);
extern void iggEndMainMenuBar(void);
extern IggBool iggBeginMenuBar(void);
extern void iggEndMenuBar(void);
extern IggBool iggBeginMenu(char const *label, IggBool enabled);
extern void iggEndMenu(void);
extern IggBool iggMenuItem(char const *label, char const *shortcut, IggBool selected, IggBool enabled);

extern void iggOpenPopup(char const *id);
extern IggBool iggBeginPopupModal(char const *name, IggBool *open, int flags);
extern void iggEndPopup(void);
extern void iggCloseCurrentPopup(void);

#ifdef __cplusplus
}
#endif
