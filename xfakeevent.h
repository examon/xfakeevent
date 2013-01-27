/*
 * xfakeevent - send fake button, motion and key events to the X
 * Copyright (C) 2013  Tomas Meszaros [exo at tty dot com]
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _XFAKEEVENT_H
#define _XFAKEEVENT_H


extern Display *dpy;


/* ------------
 * fake_button:
 * ------------
 *  Send fake mouse button event.
 *
 *  unsigned int button:
 *   - mouse left button = 1
 *   - mouse middle button = 2
 *   - mouse right button = 3
 *
 *  int is_press:
 *   - button press = 1
 *   - button release = 0
 *
 *  unsigned long delay:
 *   - delay before event
 *   - in milliseconds 
 */
extern void fake_button(unsigned int button, int is_press, unsigned long delay);


/* ------------
 * fake_motion:
 * ------------
 *  Send fake mouse pointer motion event.
 *
 *  int x:
 *   - destination x coordinate according to root window
 *
 *  int y:
 *   - destination y coordinate according to root window
 *
 *  unsigned long delay:
 *   - delay before event
 *   - in milliseconds 
 */
extern void fake_motion(int x, int y, unsigned long delay);


/* ---------
 * fake_key:
 * ---------
 *  Send fake keyboard key event.
 *
 *  const char *key:
 *   - key name string
 *
 *  int is_press:
 *   - key press = 1
 *   - key release = 0
 *
 *  unsigned long delay:
 *   - delay before event
 *   - in milliseconds 
 */
extern void fake_key(const char *key, int is_press, unsigned long delay);


#endif /* _XFAKEEVENT_H */


/* vim: set ts=8 sts=8 sw=8 : */
