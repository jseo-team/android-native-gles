#pragma once

#include <GLES2/gl2.h>

#ifdef __cplusplus
extern "C" {
#endif

GLuint createProgram(const char* vertexSource, const char* fragmentSource);

typedef struct _wise
{
   struct _wise * entry[256];
   struct _wise * names[256];
   int entryCounter;
   int totalMemory;
   void (*add)(void*);
} wise;

#define won (wise*)
char*before(char*,char*);
char*after(char*,char*);
char*join(char*);
wise*split(char*,char*);
char *czeo(char *);


#ifdef __cplusplus
}
#endif
