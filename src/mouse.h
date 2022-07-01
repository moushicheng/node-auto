typedef int MouseButton;

#define  LEFT_BUTTON 0
#define  RIGHT_BUTTON 1
#define  CENTER_BUTTON  2


#define MouseEvent(down, button) down ? MouseUpEvent(button) : MouseDownEvent(button)

#define MouseUpEvent(button) \
    ((button) == LEFT_BUTTON ? MOUSEEVENTF_LEFTUP \
                             : ((button) == RIGHT_BUTTON ? MOUSEEVENTF_RIGHTUP \
                                                         : MOUSEEVENTF_MIDDLEUP))

#define MouseDownEvent(button) \
    ((button) == LEFT_BUTTON ? MOUSEEVENTF_LEFTDOWN \
                             : ((button) == RIGHT_BUTTON ? MOUSEEVENTF_RIGHTDOWN \
                                                         : MOUSEEVENTF_MIDDLEDOWN))


void MouseClick(MouseButton button);
void MouseToggle(bool down,MouseButton button);
void MouseMove(int x, int y);

void ScrollMouse(int x, int y);
