#include "stb_image.h"

wise *this;

void add(void *entry, int size) 
{
    size=strlen(entry) ;
    this->entry
    [this->entryCounter++]
      =entry;
    this->totalMemory+=size;
} 

wise* create() 
{
  wise *mp= malloc(sizeof(wise));
  mp->entryCounter=0;
 
  return mp;
} 


char *join(char *between) 
{
    int total= this->totalMemory
    + strlen(between) * this->entryCounter;  
   
    char *result=malloc(total);
    char *ok=result;
    int t=0;int x=0;
    for(x=0; x<( this->entryCounter ) ;x++) {
      char *xe = (char*)this->entry[x];
      char *xd = between;
        while(*xe) 
        ok[t++] = (*xe++) ;
        while(*xd) 
        ok[t++] = (*xd++) ;
    }
    return result;
} 

char *before
(char *str, char *src) {
    char *s = str;
    int b = (*src) ? strlen(src) : 0;
    char *ret=(char*)malloc(strlen(str)+1);
    char *d=ret;
	char *empty="\0";
    while(*s!=0) {
        if (b) {
            char *v=src;
            char *t=s;
            while(*t==*v) {
                t++;
                v++;
                if ((v-src)==b) {
                    if (d==(ret+b-1)) return empty;
                    d[0]=*empty;
                    return ret;
                }
            }
        }
        d[0]=*s++;
        d++;
    }
    return str;
}

char *after
(char *str, char *src) {
    char *s = str;
    int b = (*src) ? strlen(src) : 0;
    while(*s!=0) {
        if (b) {
            char *d=src;
            while(*s==*d) {
                s++;
                d++;
                if ((d-src)==b)
                    return s;
            }
        }
        s++;
    }
    return str;
}


wise* split(char *src, char* sep)
{
    char *in=malloc(strlen(src)+1);

    strcpy(in, src);
    wise* result=create();
    char* e=after(in, sep);

    this=result;
    this->add(before(in,sep));
    while(e!=in)
    {
        *(e-1)=0;
        in=e;
        char *behind = before(e,sep);
        this->add(behind) ;
        e=after(in, sep);
    }
    return result;
}

char * replace(char* in, char* from, char* by)
{
    wise* xk = split(in, from);
    return join(by);
}


#include "edited.c"

