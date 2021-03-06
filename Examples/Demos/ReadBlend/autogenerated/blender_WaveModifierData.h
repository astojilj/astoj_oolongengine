/* Copyright (C) 2006 Charlie C
*
* This software is provided 'as-is', without any express or implied
* warranty.  In no event will the authors be held liable for any damages
* arising from the use of this software.
*
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely, subject to the following restrictions:
*
* 1. The origin of this software must not be misrepresented; you must not
*    claim that you wrote the original software. If you use this software
*    in a product, an acknowledgment in the product documentation would be
*    appreciated but is not required.
* 2. Altered source versions must be plainly marked as such, and must not be
*    misrepresented as being the original software.
* 3. This notice may not be removed or altered from any source distribution.
*/
// Auto generated from makesdna dna.c
#ifndef __BLENDER_WAVEMODIFIERDATA__H__
#define __BLENDER_WAVEMODIFIERDATA__H__


// -------------------------------------------------- //
#include "blender_Common.h"
#include "blender_ModifierData.h"

namespace Blender {


    // ---------------------------------------------- //
    class WaveModifierData
    {
    public:
        ModifierData modifier;
        Object *objectcenter;
        char defgrp_name[32];
        Tex *texture;
        Object *map_object;
        short flag;
        short pad;
        float startx;
        float starty;
        float height;
        float width;
        float narrow;
        float speed;
        float damp;
        float falloff;
        int texmapping;
        int uvlayer_tmp;
        char uvlayer_name[32];
        float timeoffs;
        float lifetime;
        float pad1;
    };
}


#endif//__BLENDER_WAVEMODIFIERDATA__H__
