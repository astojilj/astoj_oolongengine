//
// Vertex shader for cartoon-style shading
//
// Author: Philip Rideout
//
// Copyright (c) 2005-2006 3Dlabs Inc. Ltd.
//
// See 3Dlabs-License.txt for license information
//
attribute highp vec4	a_Vertex;
attribute highp vec2	a_MultiTexCoord0;
attribute highp vec4	a_Normal;
attribute highp vec4	a_Tangent;

uniform mediump mat4	u_ModelViewProjectionMatrix;
uniform mediump mat4	u_TrasposeInverseModelMatrix;
uniform mediump mat4	u_ModelMatrix;
uniform mediump mat4	u_ModelViewMatrix;
uniform mediump mat4	u_ViewMatrix;

varying vec3 v_Normal;

void main(void)
{
	vec4 n = u_TrasposeInverseModelMatrix * a_Normal;
	v_Normal = normalize(vec3(u_ViewMatrix * n));
	gl_Position = u_ModelViewProjectionMatrix * a_Vertex;
}
