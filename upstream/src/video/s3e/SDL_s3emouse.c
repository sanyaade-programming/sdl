/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2006 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Sam Lantinga
    slouken@libsdl.org
*/
#include "SDL_config.h"

#include "SDL_mouse.h"
#include "../../events/SDL_events_c.h"
#include "../SDL_cursor_c.h"

#include "SDL_s3emouse_c.h"

/* The implementation dependent data for the window manager cursor */
struct WMcursor {
	int unused;
};

void S3E_CheckMouseMode(_THIS)
{
	//int mode = s3ePointerGetInt(S3E_POINTER_HIDE_CURSOR);
	if (SDL_cursorstate & CURSOR_VISIBLE)
	{
		s3ePointerSetInt(S3E_POINTER_HIDE_CURSOR, 0);
	}
	else
	{
		s3ePointerSetInt(S3E_POINTER_HIDE_CURSOR, 1);
	}
}