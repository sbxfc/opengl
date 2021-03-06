//
//  ShaderLoader.hpp
//  demo
//
//  Created by sbxfc on 16/6/2.
//  Copyright © 2016年 me.rungame.sbxfc. All rights reserved.
//

#ifndef ShaderLoader_hpp
#define ShaderLoader_hpp

#include <OpenGL/gl3.h>


class ShaderLoader
{
public:
    ShaderLoader();
    ~ShaderLoader();
    
    bool initFromString(const char* vertexShader, const char* fragmentShader);
    void bind();
    void addAttribute(const char* attributeName, GLuint index);
    void unbind();
    unsigned int id();
    
private:
    bool link();
    bool compileShader(GLuint* shader, GLenum type, const GLchar* source);
    
private:
    GLuint _programID;
    GLuint _vertShader;
    GLuint _fragShader;
};


#endif /* ShaderLoader_hpp */
