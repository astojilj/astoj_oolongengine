//
// Fragment shader for cartoon-style shading
//
// Author: Philip Rideout
//
// Copyright (c) 2005-2006 3Dlabs Inc. Ltd.
//
// See 3Dlabs-License.txt for license information
//
precision mediump float;

varying vec3 v_Normal;
varying mediump vec2	v_TexCoord;

uniform sampler2D		s_texture;

void main (void)
{

	vec2 uv = v_TexCoord;	
	float Edge = 0.40;
	float Phong = 0.95;

	vec3 n = normalize( v_Normal );
	float f = dot(vec3(0,0,1),n);
		
	vec4 texture = texture2D(s_texture, uv);	
	if (abs(f) < Edge) {
		gl_FragColor = texture * 0.5;
	} else if (f < Phong) {
		vec4 color1 = texture;
		gl_FragColor = color1;
    } else {
	    vec4 PhongColor = vec4(1.20, 1.20, 1.20, 1.0);
		gl_FragColor = PhongColor * texture;
	}
}
