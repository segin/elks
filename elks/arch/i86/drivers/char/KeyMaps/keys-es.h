/*
 *	The keymap for Spain.
 */

#ifndef __KEYMAP_ES__
#define __KEYMAP_ES__

#if defined(CONFIG_ES_KEYMAP)

/* Spanish Keyboard add by Nacho Martin. imartin@cie.uva.es */

static unsigned char xtkb_scan[84]=
{
	0, 033, '1', '2', '3', '4', '5', '6',
	'7', '8', '9', '0', '-', '=', '\b', '\t',
	'q', 'w', 'e', 'r', 't', 'y', 'u', 'i',
	'o', 'p', '\'', '`', 015, 0202, 'a', 's',
	'd', 'f', 'g', 'h', 'j', 'k', 'l', 0xa4,
	';', 135, 0200, '<', 'z', 'x', 'c', 'v',
	'b', 'n', 'm', ',', '.', '\'', 0201, '*',
	0203,' ',0204,0241,0242,0243,0244,0245,
	0246,0247,0250,0251,0252,0205,0210,0267,
	0270,0271,0211,0264,0265,0266,0214,0261,
	0262,0263,'O',0177
};

static unsigned char xtkb_scan_shifted[84]=
{
	0,033,173,168,'#','$','%','/',
	'&','*','(',')','_','+','\b','\t',
	'Q','W','E','R','T','Y','U','I',
	'O','P','\"','^',015,0202,'A','S',
	'D','F','G','H','J','K','L',0xa5,
	':',0x80,0200,'>','Z','X','C','V',
	'B','N','M','?','!','\"',0201,'*',
	0203,' ',0204,0221,0222,0223,0224,0225,
	0226,0227,0230,0231,0232,0204,0213,'7',
	'8','9',0211,'4','5','6',0214,'1',
	'2','3','0',0177
};

static unsigned char xtkb_scan_ctrl_alt[84]=
{
	0,033,'|','@','�','~','5','6',
	'7','8','{','}','-','=','\b','\t',
	'q','w',0x82,'r','t','y',0xa3,0xa1,
	0xa2,'p','[',']',015,0202,0xa0,'s',
	'd','f',0x81,'h','j','k','l','�',
	':',0x87,0200,'\\','z','x','c','v',
	'b','n','m',',','.','\'',0201,'*',
	0203,' ',0204,0241,0242,0243,0244,0245,
	0246,0247,0250,0251,0252,0205,0210,0267,
	0270,0271,0211,0264,0265,0266,0214,0261,
	0262,0263,'O',0177
};

static unsigned char xtkb_scan_caps[84]=
{
	0,033,'1','2','3','4','5','6',
	'7','8','9','0','-','=','\b','\t',
	'Q','W','E','R','T','Y','U','I',
	'O','P','\'','`',015,0202,'A','S',
	'D','F','G','H','J','K','L',0xa5,
	';',0x80,0200,'<','Z','X','C','V',
	'B','N','M',',','.','\'',0201,'*',
	0203,' ',0204,0221,0222,0223,0224,0225,
	0226,0227,0230,0231,0232,0204,0213,'7',
	'8','9',0211,'4','5','6',0214,'1',
	'2','3','0',0177
};

#endif

#endif
