**WinAlert** is a simpler way to call graphical alert boxes on the Windows operating system. It is intended for programmers who are not familiar with the Windows API and would otherwise log messages to themselves or their users by using the command line. 

Someone with experience using the Windows API would probably not benefit much from this abstraction, as showing alert boxes is straightforward once you are familiar with how to program using the API.

Here is the function signature for an ANSI ```MessageBoxA```, directly taken from Microsoft's documentation. 
```
int MessageBoxA(
  [in, optional] HWND   hWnd,
  [in, optional] LPCSTR lpText,
  [in, optional] LPCSTR lpCaption,
  [in]           UINT   uType
);
```
Here is how the function is called in a Windows program.

```MessageBoxA(window_handle, "Main text here", "Caption text here", MB_ICONWARNING | MB_OK);```

For someone who is not familiar with the Windows API and feels overwhelmed by this, they have the option to ```#include "winalert.h"``` and create alert boxes like this...

```
show_alert(MESSAGE, "Test Message");
show_alert(WARNING, "Test Warning");
show_alert(ERR,     "Test Error");
```
To reduce complexity for the user, the function calls will display a ```MessageBoxA``` with graphics and a caption according to the ```enum MessageType``` that is specified.

More types can be added by modifying the source code and the function can be made more flexible by decoupling the ```MessageBoxA``` icon and caption that will be displayed from the ```enum MessageType```.
