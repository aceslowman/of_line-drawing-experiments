#version 120

varying vec4 position;
varying vec2 texCoordVarying;

void main(){
    texCoordVarying = gl_MultiTexCoord0.xy;

    gl_Position = ftransform();
}
