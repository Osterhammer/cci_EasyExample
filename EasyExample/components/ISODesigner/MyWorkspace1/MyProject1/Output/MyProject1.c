// ISO-Designer ISO 11783   Version 5.5.1.4367 Jetter AG
// Do not change!

#include "MyProject1.iop.h"
#include "MyProject1.c.h"

#define WORD(w)  (unsigned char)w, (unsigned char)(w >> 8)
#define LONG(l)  (unsigned char)l, \
					(unsigned char)((unsigned long)l >> 8), \
					(unsigned char)((unsigned long)l >> 16), \
					(unsigned char)((unsigned long)l >> 24)
#define ID(id)           WORD(id)
#define REF(id)          WORD(id)
#define XYREF(id, x, y)  WORD(id), WORD(x), WORD(y)
#define MACRO(ev, id)    ev, id
#define COLOR(c)         c

const unsigned char ISO_OP_MEMORY_CLASS isoOP_MyProject1[] = {
	17,
	ID(WorkingSet_0), TYPEID_WORKSET, COLOR(187), 1, ID(DataMask_Home), 1, 0, 2,
		XYREF(OutputString_Fasszaehler, 0, 20),
		'e', 'n',
		'd', 'e',
	ID(Macro_1), TYPEID_MACRO, WORD(8),
		CMD_HIDE_SHOW, ID(Container_Gesamtzaehler), False, 0xFF, 0xFF, 0xFF, 0xFF,
	ID(Macro_3), TYPEID_MACRO, WORD(8),
		CMD_HIDE_SHOW, ID(Container_Tageszaehler), False, 0xFF, 0xFF, 0xFF, 0xFF,
	ID(Macro_links), TYPEID_MACRO, WORD(8),
		CMD_HIDE_SHOW, ID(Container_Tageszaehler), 1, 0xFF, 0xFF, 0xFF, 0xFF,
	ID(DataMask_Home), TYPEID_DATAMASK, COLOR(230), ID(SoftKeyMask_Home), 8, 0, 
		XYREF(Button_MinusMinus, 400, 320),
		XYREF(Button_PlusPlus, 400, 400),
		XYREF(InputString_8001, 48, 176),
		XYREF(Container_Gesamtzaehler, 5, 5),
		XYREF(InputString_8000, 251, 173),
		XYREF(Container_Tageszaehler, 205, 5),
		XYREF(Button_Verschieben, 407, 154),
		XYREF(Button_6004, 412, 227),
	ID(DataMask_S2), TYPEID_DATAMASK, COLOR(230), ID(ID_NULL), 0, 0, 
	ID(Container_Gesamtzaehler), TYPEID_CONTAINER, WORD(191), WORD(470), 0, 8, 0, 
		XYREF(Rectangle_Box, 0, 0),
		XYREF(OutputString_Gesamtzaehler, 5, 5),
		XYREF(Button_Reset_Gesamtzaehler, 5, 351),
		XYREF(OutputNumber_Gesamtzaehler, 5, 286),
		XYREF(LinearBargraph_Gesamtzaehler, 128, 286),
		XYREF(InputNumber_Gesamtziel, 65, 90),
		XYREF(OutputString_Ziel, 5, 90),
		XYREF(ObjectPointer_Gesamtziel, 5, 150),
	ID(Container_Tageszaehler), TYPEID_CONTAINER, WORD(191), WORD(470), 0, 8, 0, 
		XYREF(Rectangle_Box, 0, 0),
		XYREF(OutputString_Tageszaehler, 5, 5),
		XYREF(Button_Reset_Tageszaehler, 5, 351),
		XYREF(OutputNumber_Tageszaehler, 5, 286),
		XYREF(LinearBargraph_Tageszaehler, 128, 286),
		XYREF(OutputString_Ziel, 5, 90),
		XYREF(InputNumber_Tagesziel, 65, 90),
		XYREF(ObjectPointer_Tagesziel, 5, 150),
	ID(SoftKeyMask_Home), TYPEID_SKEYMASK, COLOR(230), 6, 0, 
		REF(SoftKey_Reset_Gesamtzaehler),
		REF(SoftKey_Reset_Tageszaehler),
		REF(ObjectPointer_Null1),
		REF(ObjectPointer_Null2),
		REF(SoftKey_MinusMinus),
		REF(SoftKey_PlusPlus),
	ID(SoftKey_PlusPlus), TYPEID_SOFTKEY, COLOR(187), 1, 1, 0, 
		XYREF(IconSoftKey_PlusPlus, 4, 4),
	ID(SoftKey_Reset_Gesamtzaehler), TYPEID_SOFTKEY, COLOR(187), 1, 1, 0, 
		XYREF(OutputString_SoftKey_Reset_Gesamtzaehler, 0, 0),
	ID(SoftKey_Reset_Tageszaehler), TYPEID_SOFTKEY, COLOR(187), 1, 1, 0, 
		XYREF(OutputString_SoftKey_Reset_Tageszaehler, 0, 0),
	ID(SoftKey_MinusMinus), TYPEID_SOFTKEY, COLOR(187), 1, 1, 0, 
		XYREF(Icon_SoftKey_MinusMinus, 4, 4),
	ID(Button_PlusPlus), TYPEID_BUTTON, WORD(80), WORD(80), 187, 144, 1, 0, 1, 0, 
		XYREF(Icon_Button_PlusPlus, 0, 0),
	ID(Button_Reset_Gesamtzaehler), TYPEID_BUTTON, WORD(120), WORD(60), 187, 144, 1, 0, 1, 0, 
		XYREF(OutputString_Reset_Gesamtzaehler, 0, 0),
	ID(Button_Reset_Tageszaehler), TYPEID_BUTTON, WORD(120), WORD(60), 187, 144, 1, 0, 1, 0, 
		XYREF(OutputString_Reset_Tageszaehler, 0, 0),
	ID(Button_MinusMinus), TYPEID_BUTTON, WORD(80), WORD(80), 187, 144, 1, 0, 1, 0, 
		XYREF(Icon_Button_MinusMinus, 0, 0),
	ID(Button_6004), TYPEID_BUTTON, WORD(58), WORD(68), 249, 249, 1, 1, 1, 1, 
		XYREF(OutputString_11000, -4, 20),
		MACRO(EV_KEYRELEASE, Macro_1),
	ID(Button_6006), TYPEID_BUTTON, WORD(54), WORD(60), 249, 249, 1, 0, 1, 0, 
		XYREF(OutputString_11007, -417, -213),
	ID(Button_Verschieben), TYPEID_BUTTON, WORD(61), WORD(55), 249, 249, 1, 0, 1, 2, 
		XYREF(OutputString_11008, -4, 14),
		MACRO(EV_KEYPRESS, Macro_3),
		MACRO(EV_KEYRELEASE, Macro_links),
	ID(InputString_8000), TYPEID_INSTR, WORD(53), WORD(18), COLOR_SILVER, ID(FontAttributes_23003), 
		ID(ID_NULL), 2, ID(ID_NULL), 0, 4, 'M', 'i', 'c', 'h', 1, 0, 
	ID(InputString_8001), TYPEID_INSTR, WORD(56), WORD(19), COLOR_SILVER, ID(FontAttributes_23003), 
		ID(ID_NULL), 2, ID(ID_NULL), 0, 4, 'L', 'e', 'c', 'k', 1, 0, 
	ID(InputNumber_Gesamtziel), TYPEID_INNUM, WORD(120), WORD(55), COLOR_WHITE, ID(FontAttributes_Default), 0, 
		ID(NumberVariable_Gesamtziel), LONG(123UL), LONG(0UL), LONG(65535UL), LONG(0L), FLOAT_1, 0, 0, 2, 1, 0, 
	ID(InputNumber_Tagesziel), TYPEID_INNUM, WORD(120), WORD(55), COLOR_WHITE, ID(FontAttributes_Default), 0, 
		ID(NumberVariable_Tagesziel), LONG(123UL), LONG(0UL), LONG(65535UL), LONG(0L), FLOAT_1, 0, 0, 2, 1, 0, 
	ID(OutputString_11000), TYPEID_OUTSTR, WORD(58), WORD(20), COLOR_WHITE, ID(FontAttributes_23000), 1,
		ID(ID_NULL), 5, WORD(5), 'l', 'i', 'n', 'k', 's', 0,
	ID(OutputString_Fasszaehler), TYPEID_OUTSTR, WORD(80), WORD(40), COLOR_WHITE, ID(FontAttributes_Button), 3,
		ID(ID_NULL), 1, WORD(12), 'F', 'a', 's', 's', '\r', '\n',
		'Z', '�', 'h', 'l', 'e', 'r', 0,
	ID(OutputString_Reset_Gesamtzaehler), TYPEID_OUTSTR, WORD(112), WORD(52), COLOR_WHITE, ID(FontAttributes_Default), 3,
		ID(ID_NULL), 5, WORD(13), 'R', 'e', 's', 'e', 't', '\r', '\n',
		'G', 'e', 's', 'a', 'm', 't', 0,
	ID(OutputString_Gesamtzaehler), TYPEID_OUTSTR, WORD(182), WORD(55), COLOR_WHITE, ID(FontAttributes_Default), 1,
		ID(ID_NULL), 5, WORD(12), 'G', 'e', 's', 'a', 'm', 't', 'z', '�', 'h', 'l', 'e', 'r', 0,
	ID(OutputString_Tageszaehler), TYPEID_OUTSTR, WORD(182), WORD(55), COLOR_WHITE, ID(FontAttributes_Default), 1,
		ID(ID_NULL), 5, WORD(11), 'T', 'a', 'g', 'e', 's', 'z', '�', 'h', 'l', 'e', 'r', 0,
	ID(OutputString_Reset_Tageszaehler), TYPEID_OUTSTR, WORD(112), WORD(52), COLOR_WHITE, ID(FontAttributes_Default), 3,
		ID(ID_NULL), 5, WORD(12), 'R', 'e', 's', 'e', 't', '\r', '\n',
		'T', 'a', 'g', 'e', 's', 0,
	ID(OutputString_11007), TYPEID_OUTSTR, WORD(54), WORD(20), COLOR_WHITE, ID(FontAttributes_23000), 1,
		ID(ID_NULL), 5, WORD(6), 'B', 'u', 't', 't', 'o', 'n', 0,
	ID(OutputString_11008), TYPEID_OUTSTR, WORD(61), WORD(20), COLOR_WHITE, ID(FontAttributes_23000), 1,
		ID(ID_NULL), 5, WORD(6), 'r', 'e', 'c', 'h', 't', 's', 0,
	ID(OutputString_SoftKey_Reset_Gesamtzaehler), TYPEID_OUTSTR, WORD(72), WORD(72), COLOR_WHITE, ID(FontAttributes_Default), 3,
		ID(ID_NULL), 5, WORD(13), 'R', 'e', 's', 'e', 't', '\r', '\n',
		'G', 'e', 's', 'a', 'm', 't', 0,
	ID(OutputString_SoftKey_Reset_Tageszaehler), TYPEID_OUTSTR, WORD(72), WORD(72), COLOR_WHITE, ID(FontAttributes_Default), 3,
		ID(ID_NULL), 5, WORD(12), 'R', 'e', 's', 'e', 't', '\r', '\n',
		'T', 'a', 'g', 'e', 's', 0,
	ID(OutputString_Ziel), TYPEID_OUTSTR, WORD(60), WORD(55), COLOR_WHITE, ID(FontAttributes_Default), 1,
		ID(ID_NULL), 5, WORD(4), 'Z', 'i', 'e', 'l', 0,
	ID(OutputNumber_Tageszaehler), TYPEID_OUTNUM, WORD(120), WORD(60), COLOR_WHITE, ID(FontAttributes_Default), 1,
		ID(NumberVariable_Tageszaehler), LONG(0UL), LONG(0L), FLOAT_1, 0, 0, 2, 0,
	ID(OutputNumber_Gesamtzaehler), TYPEID_OUTNUM, WORD(120), WORD(60), COLOR_WHITE, ID(FontAttributes_Default), 1,
		ID(NumberVariable_Gesamtzaehler), LONG(0UL), LONG(0L), FLOAT_1, 0, 0, 2, 0,
	ID(Rectangle_Box), TYPEID_OUTRECT, ID(LineAttributes_Border), 
		WORD(192), WORD(470), 0, ID(FillAttributes_DarkerBG), 0, 
	ID(LinearBargraph_Gesamtzaehler), TYPEID_OUTLINBAR, WORD(60), WORD(180), COLOR_BLACK, COLOR_RED, 39, 11, 
		WORD(0), WORD(100), ID(NumberVariable_Gesamtzaehler), WORD(0), ID(NumberVariable_Gesamtziel), WORD(0), 0, 
	ID(LinearBargraph_Tageszaehler), TYPEID_OUTLINBAR, WORD(60), WORD(180), COLOR_BLACK, COLOR_RED, 39, 11, 
		WORD(0), WORD(100), ID(NumberVariable_Tageszaehler), WORD(0), ID(NumberVariable_Tagesziel), WORD(0), 0, 
	ID(Icon_Button_MinusMinus), TYPEID_OUTPICT, WORD(72), WORD(72), WORD(72), 
		0, 5, COLOR_WHITE, LONG(222UL), 0, 
		0x9E, 0xFF, 0x01, 0xF8, 0x01, 0x7F, 0x07, 0xFF, 0x01, 0xC0, 0x01, 0x7F, 
		0x06, 0xFF, 0x01, 0xFE, 0x01, 0x00, 0x01, 0x7F, 0x06, 0xFF, 0x01, 0xE0, 
		0x01, 0x00, 0x01, 0x7F, 0x06, 0xFF, 0x01, 0xC0, 0x01, 0x00, 0x01, 0x7F, 
		0x06, 0xFF, 0x01, 0x80, 0x01, 0x00, 0x01, 0x7F, 0x06, 0xFF, 0x01, 0x80, 
		0x01, 0xE0, 0x07, 0xFF, 0x01, 0x87, 0x01, 0xC0, 0x08, 0xFF, 0x01, 0xC1, 
		0x08, 0xFF, 0x01, 0x81, 0x08, 0xFF, 0x01, 0x83, 0x08, 0xFF, 0x01, 0x83, 
		0x05, 0xFF, 0x01, 0x80, 0x01, 0x3F, 0x01, 0xFF, 0x01, 0x03, 0x04, 0xFF, 
		0x01, 0xFE, 0x01, 0x00, 0x01, 0x1F, 0x01, 0xFF, 0x01, 0x07, 0x04, 0xFF, 
		0x01, 0xFC, 0x01, 0x00, 0x01, 0x1F, 0x01, 0xFE, 0x01, 0x07, 0x04, 0xFF, 
		0x01, 0xFC, 0x01, 0x00, 0x01, 0x3F, 0x01, 0xFE, 0x01, 0x0F, 0x04, 0xFF, 
		0x01, 0xFC, 0x01, 0x00, 0x01, 0x7F, 0x01, 0xFC, 0x01, 0x0F, 0x07, 0xFF, 
		0x01, 0xFC, 0x01, 0x1F, 0x07, 0xFF, 0x01, 0xF8, 0x01, 0x3F, 0x07, 0xFF, 
		0x01, 0xF0, 0x01, 0x3F, 0x07, 0xFF, 0x01, 0xF0, 0x01, 0x7F, 0x07, 0xFF, 
		0x01, 0xE0, 0x01, 0x7F, 0x07, 0xFF, 0x01, 0xE0, 0x08, 0xFF, 0x01, 0xC0, 
		0x08, 0xFF, 0x01, 0xC1, 0x08, 0xFF, 0x01, 0x81, 0x08, 0xFF, 0x01, 0x03, 
		0x08, 0xFF, 0x01, 0x07, 0x07, 0xFF, 0x01, 0x86, 0x01, 0x07, 0x01, 0x0F, 
		0x06, 0xFF, 0x02, 0x00, 0x01, 0x07, 0x06, 0xFF, 0x02, 0x00, 0x01, 0x0F, 
		0x06, 0xFF, 0x01, 0x80, 0x01, 0x00, 0x01, 0x1F, 0x06, 0xFF, 0x01, 0xF0, 
		0x01, 0x00, 0x01, 0x7F, 0xC9, 0xFF, 
	ID(Icon_Button_PlusPlus), TYPEID_OUTPICT, WORD(72), WORD(72), WORD(72), 
		0, 5, COLOR_WHITE, LONG(332UL), 0, 
		0xCD, 0xFF, 0x01, 0x87, 0x07, 0xFF, 0x01, 0xFC, 0x01, 0x07, 0x07, 0xFF, 
		0x01, 0xE0, 0x01, 0x07, 0x06, 0xFF, 0x01, 0xFE, 0x01, 0x00, 0x01, 0x07, 
		0x06, 0xFF, 0x01, 0xFC, 0x01, 0x00, 0x01, 0x07, 0x04, 0xFF, 0x01, 0xF8, 
		0x01, 0xFF, 0x01, 0xF8, 0x01, 0x00, 0x01, 0x07, 0x04, 0xFF, 0x01, 0xF0, 
		0x01, 0xFF, 0x01, 0xF8, 0x01, 0x0E, 0x01, 0x0F, 0x04, 0xFF, 0x01, 0xF0, 
		0x01, 0xFF, 0x01, 0xF8, 0x01, 0x7C, 0x01, 0x0F, 0x04, 0xFF, 0x01, 0xE0, 
		0x02, 0xFF, 0x01, 0xFC, 0x01, 0x1F, 0x04, 0xFF, 0x01, 0xE0, 0x02, 0xFF, 
		0x01, 0xF8, 0x01, 0x1F, 0x04, 0xFF, 0x01, 0xC1, 0x02, 0xFF, 0x01, 0xF8, 
		0x01, 0x3F, 0x04, 0xFF, 0x01, 0xC1, 0x02, 0xFF, 0x01, 0xF8, 0x01, 0x3F, 
		0x04, 0xFF, 0x01, 0xC3, 0x02, 0xFF, 0x01, 0xF0, 0x01, 0x3F, 0x04, 0xFF, 
		0x01, 0x83, 0x02, 0xFF, 0x01, 0xF0, 0x01, 0x7F, 0x03, 0xFF, 0x01, 0x00, 
		0x01, 0x03, 0x02, 0xFF, 0x01, 0xE0, 0x01, 0x7F, 0x02, 0xFF, 0x01, 0xFE, 
		0x02, 0x00, 0x01, 0x7F, 0x01, 0xFF, 0x01, 0xE0, 0x03, 0xFF, 0x01, 0xFE, 
		0x02, 0x00, 0x01, 0x07, 0x01, 0xFF, 0x01, 0xC0, 0x03, 0xFF, 0x01, 0xFE, 
		0x02, 0x00, 0x01, 0x07, 0x01, 0xFF, 0x01, 0xC1, 0x04, 0xFF, 0x01, 0xFE, 
		0x01, 0x00, 0x01, 0x07, 0x01, 0xFF, 0x01, 0x83, 0x04, 0xFF, 0x01, 0xFE, 
		0x01, 0x1E, 0x01, 0x0F, 0x01, 0xFF, 0x01, 0x03, 0x04, 0xFF, 0x01, 0xFC, 
		0x01, 0x1F, 0x02, 0xFF, 0x01, 0x07, 0x04, 0xFF, 0x01, 0xFC, 0x01, 0x1F, 
		0x01, 0xFF, 0x01, 0xFE, 0x01, 0x07, 0x04, 0xFF, 0x01, 0xF8, 0x01, 0x3F, 
		0x01, 0xFF, 0x01, 0xFE, 0x01, 0x0F, 0x04, 0xFF, 0x01, 0xF8, 0x01, 0x3F, 
		0x01, 0xFF, 0x01, 0xFC, 0x01, 0x0F, 0x04, 0xFF, 0x01, 0xF8, 0x01, 0x7F, 
		0x01, 0xFF, 0x01, 0xFC, 0x01, 0x1F, 0x04, 0xFF, 0x01, 0xF0, 0x01, 0x7F, 
		0x01, 0xFF, 0x01, 0xF8, 0x01, 0x1F, 0x04, 0xFF, 0x01, 0xF0, 0x02, 0xFF, 
		0x01, 0xF0, 0x01, 0x3F, 0x04, 0xFF, 0x01, 0xE0, 0x02, 0xFF, 0x01, 0xF0, 
		0x01, 0x7F, 0x04, 0xFF, 0x01, 0xF1, 0x01, 0xFF, 0x01, 0xF8, 0x01, 0x60, 
		0x01, 0x70, 0x06, 0xFF, 0x01, 0xF0, 0x02, 0x00, 0x01, 0x7F, 0x05, 0xFF, 
		0x01, 0xF0, 0x02, 0x00, 0x06, 0xFF, 0x01, 0xF8, 0x01, 0x00, 0x01, 0x01, 
		0x07, 0xFF, 0x01, 0x00, 0x01, 0x07, 0x9B, 0xFF, 
	ID(Icon_SoftKey_MinusMinus), TYPEID_OUTPICT, WORD(72), WORD(72), WORD(72), 
		0, 5, COLOR_WHITE, LONG(222UL), 0, 
		0x9E, 0xFF, 0x01, 0xF8, 0x01, 0x7F, 0x07, 0xFF, 0x01, 0xC0, 0x01, 0x7F, 
		0x06, 0xFF, 0x01, 0xFE, 0x01, 0x00, 0x01, 0x7F, 0x06, 0xFF, 0x01, 0xE0, 
		0x01, 0x00, 0x01, 0x7F, 0x06, 0xFF, 0x01, 0xC0, 0x01, 0x00, 0x01, 0x7F, 
		0x06, 0xFF, 0x01, 0x80, 0x01, 0x00, 0x01, 0x7F, 0x06, 0xFF, 0x01, 0x80, 
		0x01, 0xE0, 0x07, 0xFF, 0x01, 0x87, 0x01, 0xC0, 0x08, 0xFF, 0x01, 0xC1, 
		0x08, 0xFF, 0x01, 0x81, 0x08, 0xFF, 0x01, 0x83, 0x08, 0xFF, 0x01, 0x83, 
		0x05, 0xFF, 0x01, 0x80, 0x01, 0x3F, 0x01, 0xFF, 0x01, 0x03, 0x04, 0xFF, 
		0x01, 0xFE, 0x01, 0x00, 0x01, 0x1F, 0x01, 0xFF, 0x01, 0x07, 0x04, 0xFF, 
		0x01, 0xFC, 0x01, 0x00, 0x01, 0x1F, 0x01, 0xFE, 0x01, 0x07, 0x04, 0xFF, 
		0x01, 0xFC, 0x01, 0x00, 0x01, 0x3F, 0x01, 0xFE, 0x01, 0x0F, 0x04, 0xFF, 
		0x01, 0xFC, 0x01, 0x00, 0x01, 0x7F, 0x01, 0xFC, 0x01, 0x0F, 0x07, 0xFF, 
		0x01, 0xFC, 0x01, 0x1F, 0x07, 0xFF, 0x01, 0xF8, 0x01, 0x3F, 0x07, 0xFF, 
		0x01, 0xF0, 0x01, 0x3F, 0x07, 0xFF, 0x01, 0xF0, 0x01, 0x7F, 0x07, 0xFF, 
		0x01, 0xE0, 0x01, 0x7F, 0x07, 0xFF, 0x01, 0xE0, 0x08, 0xFF, 0x01, 0xC0, 
		0x08, 0xFF, 0x01, 0xC1, 0x08, 0xFF, 0x01, 0x81, 0x08, 0xFF, 0x01, 0x03, 
		0x08, 0xFF, 0x01, 0x07, 0x07, 0xFF, 0x01, 0x86, 0x01, 0x07, 0x01, 0x0F, 
		0x06, 0xFF, 0x02, 0x00, 0x01, 0x07, 0x06, 0xFF, 0x02, 0x00, 0x01, 0x0F, 
		0x06, 0xFF, 0x01, 0x80, 0x01, 0x00, 0x01, 0x1F, 0x06, 0xFF, 0x01, 0xF0, 
		0x01, 0x00, 0x01, 0x7F, 0xC9, 0xFF, 
	ID(IconSoftKey_PlusPlus), TYPEID_OUTPICT, WORD(72), WORD(72), WORD(72), 
		0, 5, COLOR_WHITE, LONG(332UL), 0, 
		0xCD, 0xFF, 0x01, 0x87, 0x07, 0xFF, 0x01, 0xFC, 0x01, 0x07, 0x07, 0xFF, 
		0x01, 0xE0, 0x01, 0x07, 0x06, 0xFF, 0x01, 0xFE, 0x01, 0x00, 0x01, 0x07, 
		0x06, 0xFF, 0x01, 0xFC, 0x01, 0x00, 0x01, 0x07, 0x04, 0xFF, 0x01, 0xF8, 
		0x01, 0xFF, 0x01, 0xF8, 0x01, 0x00, 0x01, 0x07, 0x04, 0xFF, 0x01, 0xF0, 
		0x01, 0xFF, 0x01, 0xF8, 0x01, 0x0E, 0x01, 0x0F, 0x04, 0xFF, 0x01, 0xF0, 
		0x01, 0xFF, 0x01, 0xF8, 0x01, 0x7C, 0x01, 0x0F, 0x04, 0xFF, 0x01, 0xE0, 
		0x02, 0xFF, 0x01, 0xFC, 0x01, 0x1F, 0x04, 0xFF, 0x01, 0xE0, 0x02, 0xFF, 
		0x01, 0xF8, 0x01, 0x1F, 0x04, 0xFF, 0x01, 0xC1, 0x02, 0xFF, 0x01, 0xF8, 
		0x01, 0x3F, 0x04, 0xFF, 0x01, 0xC1, 0x02, 0xFF, 0x01, 0xF8, 0x01, 0x3F, 
		0x04, 0xFF, 0x01, 0xC3, 0x02, 0xFF, 0x01, 0xF0, 0x01, 0x3F, 0x04, 0xFF, 
		0x01, 0x83, 0x02, 0xFF, 0x01, 0xF0, 0x01, 0x7F, 0x03, 0xFF, 0x01, 0x00, 
		0x01, 0x03, 0x02, 0xFF, 0x01, 0xE0, 0x01, 0x7F, 0x02, 0xFF, 0x01, 0xFE, 
		0x02, 0x00, 0x01, 0x7F, 0x01, 0xFF, 0x01, 0xE0, 0x03, 0xFF, 0x01, 0xFE, 
		0x02, 0x00, 0x01, 0x07, 0x01, 0xFF, 0x01, 0xC0, 0x03, 0xFF, 0x01, 0xFE, 
		0x02, 0x00, 0x01, 0x07, 0x01, 0xFF, 0x01, 0xC1, 0x04, 0xFF, 0x01, 0xFE, 
		0x01, 0x00, 0x01, 0x07, 0x01, 0xFF, 0x01, 0x83, 0x04, 0xFF, 0x01, 0xFE, 
		0x01, 0x1E, 0x01, 0x0F, 0x01, 0xFF, 0x01, 0x03, 0x04, 0xFF, 0x01, 0xFC, 
		0x01, 0x1F, 0x02, 0xFF, 0x01, 0x07, 0x04, 0xFF, 0x01, 0xFC, 0x01, 0x1F, 
		0x01, 0xFF, 0x01, 0xFE, 0x01, 0x07, 0x04, 0xFF, 0x01, 0xF8, 0x01, 0x3F, 
		0x01, 0xFF, 0x01, 0xFE, 0x01, 0x0F, 0x04, 0xFF, 0x01, 0xF8, 0x01, 0x3F, 
		0x01, 0xFF, 0x01, 0xFC, 0x01, 0x0F, 0x04, 0xFF, 0x01, 0xF8, 0x01, 0x7F, 
		0x01, 0xFF, 0x01, 0xFC, 0x01, 0x1F, 0x04, 0xFF, 0x01, 0xF0, 0x01, 0x7F, 
		0x01, 0xFF, 0x01, 0xF8, 0x01, 0x1F, 0x04, 0xFF, 0x01, 0xF0, 0x02, 0xFF, 
		0x01, 0xF0, 0x01, 0x3F, 0x04, 0xFF, 0x01, 0xE0, 0x02, 0xFF, 0x01, 0xF0, 
		0x01, 0x7F, 0x04, 0xFF, 0x01, 0xF1, 0x01, 0xFF, 0x01, 0xF8, 0x01, 0x60, 
		0x01, 0x70, 0x06, 0xFF, 0x01, 0xF0, 0x02, 0x00, 0x01, 0x7F, 0x05, 0xFF, 
		0x01, 0xF0, 0x02, 0x00, 0x06, 0xFF, 0x01, 0xF8, 0x01, 0x00, 0x01, 0x01, 
		0x07, 0xFF, 0x01, 0x00, 0x01, 0x07, 0x9B, 0xFF, 
	ID(NumberVariable_Tageszaehler), TYPEID_VARNUM, LONG(0UL), 
	ID(NumberVariable_Gesamtzaehler), TYPEID_VARNUM, LONG(0UL), 
	ID(NumberVariable_Gesamtziel), TYPEID_VARNUM, LONG(0UL), 
	ID(NumberVariable_Tagesziel), TYPEID_VARNUM, LONG(0UL), 
	ID(FontAttributes_23000), TYPEID_FONTATTR, COLOR_BLACK, 3, 0, 0, 0, 
	ID(FontAttributes_Default), TYPEID_FONTATTR, COLOR_BLACK, 3, 0, 1, 0, 
	ID(FontAttributes_Button), TYPEID_FONTATTR, COLOR_BLACK, 5, 0, 1, 0, 
	ID(FontAttributes_23003), TYPEID_FONTATTR, COLOR_BLACK, 3, 0, 1, 0, 
	ID(LineAttributes_Border), TYPEID_LINEATTR, COLOR_OLIVE, 2, WORD(65535), 0, 
	ID(FillAttributes_DarkerBG), TYPEID_FILLATTR, 2, COLOR(229), ID(ID_NULL), 0, 
	ID(ObjectPointer_Null2), TYPEID_OBJPTR, ID(ID_NULL), 
	ID(ObjectPointer_Tagesziel), TYPEID_OBJPTR, ID(ID_NULL), 
	ID(ObjectPointer_Null1), TYPEID_OBJPTR, ID(ID_NULL), 
	ID(ObjectPointer_Gesamtziel), TYPEID_OBJPTR, ID(ID_NULL), 
	ID(AuxFunction2_PlusPlus), TYPEID_AUXFUNC2, COLOR(187), 130, 1, 
		XYREF(IconSoftKey_PlusPlus, 4, 4),
	ID(AuxFunction2_MinusMinus), TYPEID_AUXFUNC2, COLOR(187), 130, 1, 
		XYREF(Icon_SoftKey_MinusMinus, 4, 4),
}; // isoOP_MyProject1
