#ifndef WINALERT_H
#define WINALERT_H

/* Choose between different message types that will be used for determining what type of alert box to show. */
typedef enum
{
	MESSAGE, 
	WARNING,
	ERR     /* ERROR keyword not allowed so ERR is used instead. */
} MessageType;

/* Show a graphical popup. */
void show_alert(MessageType, const char*);

#endif


