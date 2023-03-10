/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * SDL Mouse Pointer
 *
 * Copyright 2023 Armin Novak <armin.novak@thincast.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_CLIENT_SDL_POINTER_H
#define FREERDP_CLIENT_SDL_POINTER_H

#include <freerdp/graphics.h>
#include "sdl_freerdp.h"

BOOL sdl_register_pointer(rdpGraphics* graphics);

BOOL sdl_Pointer_Set_Process(SDL_UserEvent* uptr);

#endif /* FREERDP_CLIENT_SDL_POINTER_H */
