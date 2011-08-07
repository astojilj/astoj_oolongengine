/*
 *  piper.h
 *  ReadBlend
 *
 *  Created by astoj@rocketmail.com on 12/28/10.
 *  Copyright 2010 astoj@rocketmail.com. All rights reserved.
 *
 */

#ifndef PIPER_PIPER_H
#define PIPER_PIPER_H

#include <Mathematics.h>
#include "../../Math/Matrix.h"

#ifdef QT_BUILD // first version for Qt only Opengl ES 2.0
#include <GLES2/gl2.h>
#else
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 30000
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>
extern int __OPENGLES_VERSION;
#else
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>
#endif
#endif
/* Collecting and constructing input for graphics pipeline */
class Piper
{
public:
	enum Mode {
		PROJECTION = 0,
		MODEL,	
		TEXTURE
	};

	virtual ~Piper() {};
	
	virtual void setMatrix(const MATRIX &matrix, Mode mode) = 0;	
	virtual void pushMatrix(Mode mode) = 0;
	virtual void popMatrix(Mode mode) = 0;
	virtual void multMatrix(const MATRIX &matrix, Mode mode) = 0;
	virtual void glDrawArrays (GLenum mode, GLint first, GLsizei count)
	{
		::glDrawArrays (mode, first, count);
	}
	
	virtual void glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid* indices)
	{
		::glDrawElements (mode, count, type, indices);
	}
	
	virtual void initFrame()
	{
	}
	
	/* instance needs to be created with initInstance() first. This could return 0 */
	static Piper *instance();

	void setViewMatrix(const MATRIX &matrix);
	
private:
	static Piper *_instance;
	/* fixedPipeline: 
	 *	true - OpenGL ES 1.1
	 *  false - OpenGL ES 2.0 and GLSL support
	 */
	static void initInstance(bool fixedPipeline = false);
	friend class CShell; // only has access to initInstance()
};

#endif //PIPER_PIPER_H
