module.exports= {
    LBUTTON:0x01,//Left mouse button
    RBUTTON:0x02,//Right mouse button
    CANCEL:0x03,//Control-break processing
    MBUTTON:0x04,//Middle mouse button (three-button mouse)
    XBUTTON1:0x05,//X1 mouse button
    XBUTTON2:0x06,//X2 mouse button
    BACK:0x08,//BACKSPACE key
    TAB:0x09,//TAB key
    CLEAR:0x0C,//CLEAR key
    RETURN:0x0D,//ENTER key
    SHIFT:0x10,//SHIFT key
    CONTROL:0x11,//CTRL key
    MENU:0x12,//ALT key
    PAUSE:0x13,//PAUSE key
    CAPITAL:0x14,//CAPS LOCK key
    KANA:0x15,//IME Kana mode
    HANGUEL:0x15,//IME Hanguel mode (maintained for compatibility; use HANGUL)
    HANGUL:0x15,//IME Hangul mode
    IME_ON:0x16,//IME On
    JUNJA:0x17,//IME Junja mode
    FINAL:0x18,//IME final mode
    HANJA:0x19,//IME Hanja mode
    KANJI:0x19,//IME Kanji mode
    IME_OFF:0x1A,//IME Off
    ESCAPE:0x1B,//ESC key
    CONVERT:0x1C,//IME convert
    NONCONVERT:0x1D,//IME nonconvert
    ACCEPT:0x1E,//IME accept
    MODECHANGE:0x1F,//IME mode change request
    SPACE:0x20,//SPACEBAR
    PRIOR:0x21,//PAGE UP key
    NEXT:0x22,//PAGE DOWN key
    END:0x23,//END key
    HOME:0x24,//HOME key
    LEFT:0x25,//LEFT ARROW key
    UP:0x26,//UP ARROW key
    RIGHT:0x27,//RIGHT ARROW key
    DOWN:0x28,//DOWN ARROW key
    SELECT:0x29,//SELECT key
    PRINT:0x2A,//PRINT key
    EXECUTE:0x2B,//EXECUTE key
    SNAPSHOT:0x2C,//PRINT SCREEN key
    INSERT:0x2D,//INS key
    DELETE:0x2E,//DEL key
    HELP:0x2F,//HELP key
    0: 0x30,//	0 键
    1: 0x31,//	1 个键
    2: 0x32,//	2 键
    3: 0x33,//	3 键
    4: 0x34,//	4 键
    5: 0x35,//	5 键
    6: 0x36,//	6 键
    7: 0x37,//	7 键
    8: 0x38,//	8 键
    9: 0x39,//	9 键
    A: 0x41,	//A
    B: 0x42,	//B 键
    C: 0x43,	//C 键
    D: 0x44,	//D 键
    E: 0x45,	//E 键
    F: 0x46,	//	F 键
    G: 0x47,	//	G 键
    H: 0x48,	//	I 键
    J: 0x4A,	//	J 键
    K: 0x4B,	//	K 键
    L: 0x4C,	//	L 键
    M: 0x4D,	//	M 键
    N: 0x4E,	//	N 键
    O: 0x4F,	//	O 键
    P: 0x50,	//	P 键
    Q: 0x51,	//	Q 键
    R: 0x52,	//	R 键
    S: 0x53,	//	S 键
    T: 0x54,	//	T 键
    U: 0x55,	//	U 键
    V: 0x56,	//	V 键
    W: 0x57,	//	W 键
    X: 0x58,	//	X 键
    Y: 0x59,	//	Y 键
    Z: 0x5A,	//	Z 键
    LWIN:0x5B,//Left Windows key (Natural keyboard)
    RWIN:0x5C,//Right Windows key (Natural keyboard)
    APPS:0x5D,//Applications key (Natural keyboard)
    SLEEP:0x5F,//Computer Sleep key
    NUMPAD0:0x60,//Numeric keypad 0 key
    NUMPAD1:0x61,//Numeric keypad 1 key
    NUMPAD2:0x62,//Numeric keypad 2 key
    NUMPAD3:0x63,//Numeric keypad 3 key
    NUMPAD4:0x64,//Numeric keypad 4 key
    NUMPAD5:0x65,//Numeric keypad 5 key
    NUMPAD6:0x66,//Numeric keypad 6 key
    NUMPAD7:0x67,//Numeric keypad 7 key
    NUMPAD8:0x68,//Numeric keypad 8 key
    NUMPAD9:0x69,//Numeric keypad 9 key
    MULTIPLY:0x6A,//Multiply key
    ADD:0x6B,//Add key
    SEPARATOR:0x6C,//Separator key
    SUBTRACT:0x6D,//Subtract key
    DECIMAL:0x6E,//Decimal key
    DIVIDE:0x6F,//Divide key
    F1:0x70,//F1 key
    F2:0x71,//F2 key
    F3:0x72,//F3 key
    F4:0x73,//F4 key
    F5:0x74,//F5 key
    F6:0x75,//F6 key
    F7:0x76,//F7 key
    F8:0x77,//F8 key
    F9:0x78,//F9 key
    F10:0x79,//F10 key
    F11:0x7A,//F11 key
    F12:0x7B,//F12 key
    F13:0x7C,//F13 key
    F14:0x7D,//F14 key
    F15:0x7E,//F15 key
    F16:0x7F,//F16 key
    F17:0x80,//F17 key
    F18:0x81,//F18 key
    F19:0x82,//F19 key
    F20:0x83,//F20 key
    F21:0x84,//F21 key
    F22:0x85,//F22 key
    F23:0x86,//F23 key
    F24:0x87,//F24 key
    NUMLOCK:0x90,//NUM LOCK key
    SCROLL:0x91,//SCROLL LOCK key
    LSHIFT:0xA0,//Left SHIFT key
    RSHIFT:0xA1,//Right SHIFT key
    LCONTROL:0xA2,//Left CONTROL key
    RCONTROL:0xA3,//Right CONTROL key
    LMENU:0xA4,//Left ALT key
    RMENU:0xA5,//Right ALT key
    BROWSER_BACK:0xA6,//Browser Back key
    BROWSER_FORWARD:0xA7,//Browser Forward key
    BROWSER_REFRESH:0xA8,//Browser Refresh key
    BROWSER_STOP:0xA9,//Browser Stop key
    BROWSER_SEARCH:0xAA,//Browser Search key
    BROWSER_FAVORITES:0xAB,//Browser Favorites key
    BROWSER_HOME:0xAC,//Browser Start and Home key
    VOLUME_MUTE:0xAD,//Volume Mute key
    VOLUME_DOWN:0xAE,//Volume Down key
    VOLUME_UP:0xAF,//Volume Up key
    MEDIA_NEXT_TRACK:0xB0,//Next Track key
    MEDIA_PREV_TRACK:0xB1,//Previous Track key
    MEDIA_STOP:0xB2,//Stop Media key
    MEDIA_PLAY_PAUSE:0xB3,//Play/Pause Media key
    LAUNCH_MAIL:0xB4,//Start Mail key
    LAUNCH_MEDIA_SELECT:0xB5,//Select Media key
    LAUNCH_APP1:0xB6,//Start Application 1 key
    LAUNCH_APP2:0xB7,//Start Application 2 key
    OEM_1:0xBA,//
    OEM_PLUS:0xBB,//For any country/region, the '+' key
    OEM_COMMA:0xBC,//For any country/region, the ',' key
    OEM_MINUS:0xBD,//For any country/region, the '-' key
    OEM_PERIOD:0xBE,//For any country/region, the '.' key
    OEM_2:0xBF,//
    OEM_3:0xC0,//
    OEM_4:0xDB,//Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the '[{' key
    OEM_5:0xDC,//Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the '|' key
    OEM_6:0xDD,//Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the ']}' key
    OEM_7:0xDE,//Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the 'single-quote/double-quote' key
    OEM_8:0xDF,//Used for miscellaneous characters; it can vary by keyboard.
    OEM_102:0xE2,//The <> keys on the US standard keyboard, or the \| key on the non-US 102-key keyboard
    PROCESSKEY:0xE5,//IME PROCESS key
    PACKET:0xE7,//Used to pass Unicode characters as if they were keystrokes. The PACKET key is the low word of a 32-bit Virtual Key value used for non-keyboard input methods. For more information, see Remark in KEYBDINPUT, SendInput, WM_KEYDOWN, and WM_KEYUP
    ATTN:0xF6,//Attn key
    CRSEL:0xF7,//CrSel key
    EXSEL:0xF8,//ExSel key
    EREOF:0xF9,//Erase EOF key
    PLAY:0xFA,//Play key
    ZOOM:0xFB,//Zoom key
    NONAME:0xFC,//Reserved
    PA1:0xFD,//PA1 key
    OEM_CLEAR:0xFE,//Clear key
}