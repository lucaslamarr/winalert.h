#ifndef WINALERT_H
#define WINALERT_H

/* This file is specifically for Windows. The #ifdef is just a precaution. */
#ifdef WIN32
	#define WIN32_LEAN_AND_MEAN
	#define NOMINMAX
	#include <windows.h>
#endif

/* Choose between different message types that will be used for determining what type of alert box to show. */
typedef enum
{
	MESSAGE, 
	WARNING,
	ERR     /* ERROR keyword not allowed so ERR is used instead. */
} MessageType;

/* Displays a graphical popup showing the message type, followed by the message. */
static void show_alert(const MessageType message_type, const char* const message)
{
	/* Uses the message_type index to determine caption text and icon type. */
	static const char* const message_types[] =
	{
		"Message",
		"Warning",
		"Error"
	};

	static const UINT icon_types[] =
	{
		MB_ICONINFORMATION,
		MB_ICONWARNING,
		MB_ICONERROR
	};

	/* Native Windows message box will appear based on the MessageType specified. */
	MessageBoxA(NULL, message, message_types[message_type], icon_types[message_type] | MB_OK);
}

#endif


