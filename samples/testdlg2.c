/*
 * Harbour 3.2.0dev (r1704061005)
 * LLVM/Clang C 8.1 (clang-802.0.41) (64-bit)
 * Generated C source from "testdlg2.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MAIN );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( TSAY );
HB_FUNC_EXTERN( TGET );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_EXTERN( ISOPTIONKEYPRESSED );
HB_FUNC( BUILDMENU );
HB_FUNC( SHOWPOPUP );
HB_FUNC_EXTERN( MENUBEGIN );
HB_FUNC_EXTERN( MENUADDITEM );
HB_FUNC_EXTERN( MENUEND );
HB_FUNC_EXTERN( SHOWPOPUPMENU );
HB_FUNC_EXTERN( HB_GT_NUL_DEFAULT );
HB_FUNC_EXTERN( ERRORLINK );
HB_FUNC_EXTERN( MSGBEEP );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TESTDLG2 )
{ "MAIN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MAIN )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "TSAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( TSAY )}, NULL },
{ "TGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGET )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
{ "ISOPTIONKEYPRESSED", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISOPTIONKEYPRESSED )}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUILDMENU", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BUILDMENU )}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SHOWPOPUP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SHOWPOPUP )}, NULL },
{ "MENUBEGIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENUBEGIN )}, NULL },
{ "MENUADDITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENUADDITEM )}, NULL },
{ "MENUEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENUEND )}, NULL },
{ "SHOWPOPUPMENU", {HB_FS_PUBLIC}, {HB_FUNCNAME( SHOWPOPUPMENU )}, NULL },
{ "HB_GT_NUL_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_GT_NUL_DEFAULT )}, NULL },
{ "ERRORLINK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORLINK )}, NULL },
{ "MSGBEEP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGBEEP )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TESTDLG2, "testdlg2.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TESTDLG2
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TESTDLG2 )
   #include "hbiniseg.h"
#endif

HB_FUNC( MAIN )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,116,22,0,36,9,0,176,1,0,92,20,
		12,1,80,1,176,1,0,92,20,12,1,80,2,36,
		13,0,48,2,0,176,3,0,12,0,93,220,0,93,
		94,1,93,194,1,93,238,2,106,13,84,101,115,116,
		105,110,103,32,71,101,116,115,0,100,100,100,100,100,
		112,10,82,1,0,36,15,0,48,2,0,176,4,0,
		12,0,93,139,0,92,50,92,50,92,17,103,1,0,
		106,7,70,105,114,115,116,58,0,9,100,100,100,100,
		112,11,73,36,18,0,48,2,0,176,5,0,12,0,
		93,137,0,92,108,93,208,0,92,22,103,1,0,89,
		28,0,1,0,1,0,1,0,176,6,0,12,0,121,
		8,28,6,95,255,25,7,95,1,165,80,255,6,89,
		52,0,0,0,1,0,1,0,176,7,0,95,255,12,
		1,28,34,176,8,0,106,22,80,108,101,97,115,101,
		32,116,121,112,101,32,115,111,109,101,116,104,105,110,
		103,0,20,1,9,25,3,120,6,9,9,9,100,9,
		100,100,100,100,100,9,112,18,73,36,20,0,48,2,
		0,176,4,0,12,0,92,98,92,50,92,50,92,17,
		103,1,0,106,6,76,97,115,116,58,0,9,100,100,
		100,100,112,11,73,36,22,0,48,2,0,176,5,0,
		12,0,92,96,92,108,93,208,0,92,22,103,1,0,
		89,28,0,1,0,1,0,2,0,176,6,0,12,0,
		121,8,28,6,95,255,25,7,95,1,165,80,255,6,
		100,9,9,9,100,9,100,100,100,100,100,9,112,18,
		73,36,24,0,48,2,0,176,9,0,12,0,92,34,
		92,83,100,100,106,3,79,75,0,103,1,0,89,18,
		0,1,0,0,0,176,8,0,176,10,0,12,0,12,
		1,6,100,100,100,100,100,106,6,111,98,116,110,49,
		0,112,13,80,3,36,27,0,48,2,0,176,9,0,
		12,0,92,34,93,218,0,100,100,106,7,67,97,110,
		99,101,108,0,103,1,0,89,16,0,1,0,0,0,
		48,11,0,103,1,0,112,0,6,100,100,100,100,100,
		100,112,13,73,36,29,0,176,12,0,12,0,80,4,
		36,32,0,48,13,0,103,1,0,100,100,100,120,100,
		89,21,0,2,0,1,0,4,0,176,14,0,95,255,
		95,1,95,2,12,3,6,100,112,7,73,36,34,0,
		100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BUILDMENU )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,116,22,0,36,42,0,176,15,0,120,12,
		1,80,1,36,43,0,176,16,0,106,6,65,98,111,
		117,116,0,89,30,0,1,0,0,0,176,8,0,106,
		15,70,105,118,101,77,97,99,32,115,97,109,112,108,
		101,0,12,1,6,100,100,20,4,36,44,0,176,16,
		0,106,5,69,120,105,116,0,89,16,0,1,0,0,
		0,48,11,0,103,1,0,112,0,6,106,2,101,0,
		100,20,4,36,45,0,176,16,0,106,5,72,101,108,
		112,0,89,20,0,1,0,0,0,176,8,0,106,5,
		72,101,108,112,0,12,1,6,100,100,20,4,36,46,
		0,176,17,0,20,0,36,48,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SHOWPOPUP )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,116,22,0,36,54,0,176,18,0,95,1,
		103,1,0,95,2,95,3,20,4,36,56,0,100,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,22,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

