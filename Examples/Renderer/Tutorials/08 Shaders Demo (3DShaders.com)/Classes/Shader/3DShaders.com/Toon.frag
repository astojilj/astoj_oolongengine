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

	vec2 uv = v_TexCoord - (1.0 * floor(v_TexCoord/1.0));
	uv = uv * 0.5;
	
	float Edge = 0.45;
	float Phong = 0.95;

	vec3 n = normalize( v_Normal );
	float f = dot(vec3(0,0,1),n);
		
	if (abs(f) < Edge) {
		gl_FragColor = vec4(0);
	} else if (f < Phong) {
		vec4 color1 = texture2D(s_texture, uv);
		gl_FragColor = color1;
    } else {
	    vec4 PhongColor = vec4(0.75, 0.75, 0.75, 1.0);
		gl_FragColor = PhongColor * texture2D(s_texture, uv);
	}
}
