#ifndef WINALERT_H
#define WINALERT_H

/* Choose between three types of messages that will be used for showing severity in debug messages. */
typedef enum
{
	MESSAGE, 
	WARNING,
	ERR     /* ERROR keyword not allowed so ERR is used instead. */
} MessageType;

/* Show a graphical popup. */
void show_alert(MessageType, const char*);

#endif


