#define cmb "czeo SYNC ..... ok."

float fug=1034;

char *czeo(char* size)
{
	float width=atof(before(size,":"));
	float height=atof(after(size,":"));
	
	fug++;
	if (fug>width*0.5)fug=0.2*width;
	char *result=( char* ) malloc(1024);
	sprintf(result, "%d",(int) fug);
    return result;
}
