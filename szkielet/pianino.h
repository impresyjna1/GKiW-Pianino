#ifndef pianino_h
#define pianino_h

int pudloVertexCount=56;
int staticpokrywaVertexCount=44;
int movingpokrywaVertexCount=44;

float pudloVertices[]={
	-1.5,-1.0,-0.5,
	-1.5, 1.0,-0.5,
	 1.5, 1.0,-0.5,
	 1.5,-1.0,-0.5,

	 -1.5,-1.0,0.5,
	-1.5, 1.0,0.5,
	 1.5, 1.0,0.5,
	 1.5,-1.0,0.5,

	 -1.5, -1.0, -0.5,
	 -1.5, -1.0, 0.5,
	 1.5, -1.0, 0.5,
	 1.5, -1.0, -0.5,

	 -1.5, -1.0, -0.5,
	 -1.5, 1.0, -0.5,
	 -1.5, 1.0, 0.5,
	 -1.5, -1.0, 0.5,

	 1.5, -1.0, -0.5,
	 1.5, 1.0, -0.5,
	 1.5, 1.0, 0.5,
	 1.5, -1.0, 0.5,

	 -1.5, 1.0, -0.5,
	 -1.5, 1.0, -0.35,
	 1.5, 1.0, -0.35,
	 1.5, 1.0, -0.5,

	 -1.5, 1.0, 0.5,
	 -1.5, 1.0, 0.35,
	 1.5, 1.0, 0.35,
	 1.5, 1.0,0.5,

	 -1.5, 1.0, 0.35,
	 -1.35, 1.0, 0.35,
	 -1.35, 1.0, -0.35,
	 -1.5, 1.0, -0.35,
	 
	 1.5, 1.0, 0.35,
	 1.35, 1.0, 0.35,
	 1.35, 1.0, -0.35,
	 1.5, 1.0, -0.35,

	 -1.35, 1.0, 0.35,
	 -1.35, -1.0, 0.35,
	 -1.35, -1.0, -0.35,
	 -1.35, 1.0, -0.35,

	 1.35, 1.0, 0.35,
	 1.35, -1.0, 0.35,
	 1.35, -1.0, -0.35,
	 1.35, 1.0, -0.35,

	 -1.35, -0.85, -0.35,
	 -1.35, -0.85, 0.35,
	 1.35, -0.85, 0.35,
	 1.35, -0.85, -0.35,

	 -1.35, -1.0, -0.35,
	 -1.35, 1.0, -0.35,
	 1.35, 1.0, -0.35,
	 1.35, -1.0, -0.35,

	 -1.35, -1.0, 0.35,
	 -1.35, 1.0, 0.35,
	 1.35, 1.0, 0.35,
	 1.35, -1.0, 0.35
};

float staticpokrywaVertices[]={
	-1.5,-0.10,0.0,
	-1.5, -0.10,0.5,
	 1.5, -0.10,0.5,
	 1.5,-0.10,0.0,

	 1.5, -0.10, 0.0,
	 1.5, -0.10, 0.5,
	 1.5, 0.0, 0.5,
	 1.5, 0.0, 0.0,

	 -1.5, -0.10, 0.0,
	 -1.5, -0.10, 0.5,
	 -1.5, 0.0, 0.5,
	 -1.5, 0.0, 0.0,

	 -1.5, -0.10, 0.0,
	 1.5, -0.10, 0.0, 
	 1.5, 0.0, 0.0,
	 -1.5, 0.0, 0.0,

	 -1.5, -0.10, 0.5,
	 1.5, -0.10, 0.5, 
	 1.5, 0.0, 0.5,
	 -1.5, 0.0, 0.5,

	 -1.6, 0.0, 0.0,
	 1.6, 0.0, 0.0,
	 1.6, 0.0, 0.6,
	 -1.6, 0.0, 0.6,

	 -1.6, 0.0, 0.0,
	 -1.6, 0.0, 0.6, 
	 -1.6, 0.1, 0.6,
	 -1.6, 0.1, 0.0,

	 1.6, 0.0, 0.0,
	 1.6, 0.0, 0.6, 
	 1.6, 0.1, 0.6,
	 1.6, 0.1, 0.0,

	 -1.6, 0.0, 0.0,
	 -1.6, 0.1, 0.0, 
	 1.6, 0.1, 0.0,
	 1.6, 0.0, 0.0, 

	 -1.6, 0.0, 0.6,
	 -1.6, 0.1, 0.6, 
	 1.6, 0.1, 0.6,
	 1.6, 0.0, 0.6, 

	 -1.6, 0.1, 0.0,
	 1.6, 0.1, 0.0,
	 1.6, 0.1, 0.6,
	 -1.6, 0.1, 0.6
};

float movingpokrywaVertices[]={
	-1.5,-0.10,0.0,
	-1.5, -0.10,-0.5,
	 1.5, -0.10,-0.5,
	 1.5,-0.10,0.0,

	 1.5, -0.10, 0.0,
	 1.5, -0.10, -0.5,
	 1.5, 0.0, -0.5,
	 1.5, 0.0, 0.0,

	 -1.5, -0.10, 0.0,
	 -1.5, -0.10, -0.5,
	 -1.5, 0.0, -0.5,
	 -1.5, 0.0, 0.0,

	 -1.5, -0.10, 0.0,
	 1.5, -0.10, 0.0, 
	 1.5, 0.0, 0.0,
	 -1.5, 0.0, 0.0,

	 -1.5, -0.10, -0.5,
	 1.5, -0.10, -0.5, 
	 1.5, 0.0, -0.5,
	 -1.5, 0.0, -0.5,

	 -1.6, 0.0, 0.0,
	 1.6, 0.0, 0.0,
	 1.6, 0.0, -0.6,
	 -1.6, 0.0, -0.6,

	 -1.6, 0.0, 0.0,
	 -1.6, 0.0, -0.6, 
	 -1.6, 0.1, -0.6,
	 -1.6, 0.1, 0.0,

	 1.6, 0.0, 0.0,
	 1.6, 0.0, -0.6, 
	 1.6, 0.1, -0.6,
	 1.6, 0.1, 0.0,

	 -1.6, 0.0, 0.0,
	 -1.6, 0.1, 0.0, 
	 1.6, 0.1, 0.0,
	 1.6, 0.0, 0.0, 

	 -1.6, 0.0, -0.6,
	 -1.6, 0.1, -0.6, 
	 1.6, 0.1, -0.6,
	 1.6, 0.0, -0.6, 

	 -1.6, 0.1, 0.0,
	 1.6, 0.1, 0.0,
	 1.6, 0.1, -0.6,
	 -1.6, 0.1, -0.6
};

float pudloColors[]={
	1,0,0, 1,0,0, 1,0,0, 1,0,0,
	1,0,0, 1,0,0, 1,0,0, 1,0,0,
	1,1,0, 1,1,0, 1,1,0, 1,1,0,
	0,0,1, 0,0,1, 0,0,1, 0,0,1,
	0,0,1, 0,0,1, 0,0,1, 0,0,1,
	1,1,0, 1,1,0, 1,1,0, 1,1,0,
	1,1,0, 1,1,0, 1,1,0, 1,1,0,
	1,1,0, 1,1,0, 1,1,0, 1,1,0,
	1,1,0, 1,1,0, 1,1,0, 1,1,0,
	1,1,1, 1,1,1, 1,1,1, 1,1,1,
	1,1,1, 1,1,1, 1,1,1, 1,1,1,
	1,1,1, 1,1,1, 1,1,1, 1,1,1,
	1,1,1, 1,1,1, 1,1,1, 1,1,1,
	1,1,1, 1,1,1, 1,1,1, 1,1,1,
};

float pudlotexVertices[]={
	0,0,		0,1,		1,1,		1,0, 
	0,0,		0,1,		1,1,		1,0,
	0,0,		0,1,		1,1,		1,0,
	0,0,		0,1,		1,1,		1,0, 
	0,0,		0,1,		1,1,		1,0,
	0,0,		0,1,		1,1,		1,0,
	0,0,		0,1,		1,1,		1,0, 
	0,0,		0,1,		1,1,		1,0,
	0,0,		0,1,		1,1,		1,0,
	0,0,		0,1,		1,1,		1,0, 
	0,0,		0,1,		1,1,		1,0,
	0,0,		0,1,		1,1,		1,0,
	0,0,		0,1,		1,1,		1,0, 
	0,0,		0,1,		1,1,		1,0,
}; 

float staticpokrywaColors[]={
	1,0,0, 1,0,0, 1,0,0, 1,0,0,
	1,0,0, 1,0,0, 1,0,0, 1,0,0,
	1,1,0, 1,1,0, 1,1,0, 1,1,0,
	0,0,1, 0,0,1, 0,0,1, 0,0,1,
	0,0,1, 0,0,1, 0,0,1, 0,0,1,
	1,1,0, 1,1,0, 1,1,0, 1,1,0,
	1,1,0, 1,1,0, 1,1,0, 1,1,0,
	1,1,0, 1,1,0, 1,1,0, 1,1,0,
	1,1,0, 1,1,0, 1,1,0, 1,1,0,
	1,1,1, 1,1,1, 1,1,1, 1,1,1,
	1,1,1, 1,1,1, 1,1,1, 1,1,1,
};
#endif