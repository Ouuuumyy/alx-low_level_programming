#ifndef ABS(x)
#define ABS(x) y
#ifndef y
#define y

{			\
if (x < 0)		\
{			\
	int y = -(x);	\
}			\
else			\
{			\
	y = x;		\
}			\
}
#endif
