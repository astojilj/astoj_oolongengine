/*
 *  piper_p.cpp
 *  ReadBlend
 *
 *  Created by astoj@rocketmail.com on 12/28/10.
 *  Copyright 2010 astoj@rocketmail.com. All rights reserved.
 *
 */

#include "piper_p.h"
#include "string.h"
#include "piperGL11.h"
#include "piperGL20.h"


const unsigned char stackSize(1 << MAX_STACK_DEPTH_LOG_2);

MatrixStack::MatrixStack()
{
	memset(this, 0, sizeof(this));
}

/* Allowed to push, but all pushes above 1 << MAX_STACK_DEPTH_LOG_2 ends to same, pop comes back */
static unsigned char normalizedTop(unsigned char topIndex)
{
	// topIndex % (1 << MAX_STACK_DEPTH_LOG_2)
	return topIndex & ((1 << MAX_STACK_DEPTH_LOG_2) - 1);
}


void MatrixStack::set(const MATRIX &matrix) {
	memcpy(&(stack[normalizedTop(topIndex)]), &matrix, sizeof(MATRIX));
}

const MATRIX &MatrixStack::top() const
{
	return stack[normalizedTop(topIndex)];
}

void MatrixStack::push()
{
	topIndex++;
	if (topIndex != stackSize) {
		memcpy(&(stack[topIndex]), &(stack[topIndex-1]), sizeof(MATRIX));
	} 
}

void MatrixStack::pop()
{
	if (topIndex) {
		topIndex--;
	}
}

Piper *Piper::_instance = 0;

Piper *Piper::instance() 
{
	return _instance;
}

void Piper::initInstance(bool fixedPipeline) 
{
	delete _instance;
	_instance = 0;
	if (fixedPipeline) {
		_instance = new PiperGL11;
	} else {
		_instance = new PiperGL20;
	}
}