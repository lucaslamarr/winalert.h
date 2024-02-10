#include "winalert.h"

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>

/* Returns the text displayed for the message type which will be passed into the MessageBoxA. */
const char* get_message_type(MessageType message_type)
{
	switch(message_type)
	{
		case MESSAGE:
		{
			return "Message";
			break;
		}
		case WARNING:
		{
			return "Warning";
			break;
		}
		case ERR:
		{
			return "Error";
			break;
		}
		default:
		{
			return "Message";
		}
	}
}

/* Displays a graphical popup showing the message type, followed by the message. */
void show_alert(MessageType message_type, const char* message)
{
	UINT icon_type; /* The icon that will show in the alert box */
	
	if (message_type == MESSAGE)
		icon_type = MB_ICONINFORMATION;
	else if (message_type == WARNING)
		icon_type = MB_ICONWARNING;
	else if (message_type == ERR)
		icon_type = MB_ICONERROR;
	
	/* Native Windows message box will appear based on the type specified. */
	MessageBoxA(NULL, message, get_message_type(message_type), icon_type | MB_OK);	
}

