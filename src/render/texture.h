#pragma once
#include <GL/glew.h>
#include <string>

class Texture {
public:
    Texture(GLuint texID);
    ~Texture();

    void bind();

    static Texture *loadPng(const std::string &filename);

    GLuint m_textureID;
};
