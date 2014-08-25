#ifndef pianino_h
#define pianino_h

int pudloVertexCount=56;
int staticpokrywaVertexCount=44;
int movingpokrywaVertexCount=44;

float pudloVertices[]={
	-2.0,-1.0,-0.5,
	-2.0, 1.0,-0.5,
	 2.0, 1.0,-0.5,
	 2.0,-1.0,-0.5,

	 -2.0,-1.0,0.5,
	-2.0, 1.0,0.5,
	 2.0, 1.0,0.5,
	 2.0,-1.0,0.5,

	 -2.0, -1.0, -0.5,
	 -2.0, -1.0, 0.5,
	 2.0, -1.0, 0.5,
	 2.0, -1.0, -0.5,

	 -2.0, -1.0, -0.5,
	 -2.0, 1.0, -0.5,
	 -2.0, 1.0, 0.5,
	 -2.0, -1.0, 0.5,

	 2.0, -1.0, -0.5,
	 2.0, 1.0, -0.5,
	 2.0, 1.0, 0.5,
	 2.0, -1.0, 0.5,

	 -2.0, 1.0, -0.5,
	 -2.0, 1.0, -0.35,
	 2.0, 1.0, -0.35,
	 2.0, 1.0, -0.5,

	 -2.0, 1.0, 0.5,
	 -2.0, 1.0, 0.35,
	 2.0, 1.0, 0.35,
	 2.0, 1.0,0.5,

	 -2.0, 1.0, 0.35,
	 -1.85, 1.0, 0.35,
	 -1.85, 1.0, -0.35,
	 -2.0, 1.0, -0.35,
	 
	 2.0, 1.0, 0.35,
	 1.85, 1.0, 0.35,
	 1.85, 1.0, -0.35,
	 2.0, 1.0, -0.35,

	 -1.85, 1.0, 0.35,
	 -1.85, -1.0, 0.35,
	 -1.85, -1.0, -0.35,
	 -1.85, 1.0, -0.35,

	 1.85, 1.0, 0.35,
	 1.85, -1.0, 0.35,
	 1.85, -1.0, -0.35,
	 1.85, 1.0, -0.35,

	 -1.85, -0.85, -0.35,
	 -1.85, -0.85, 0.35,
	 1.85, -0.85, 0.35,
	 1.85, -0.85, -0.35,

	 -1.85, -1.0, -0.35,
	 -1.85, 1.0, -0.35,
	 1.85, 1.0, -0.35,
	 1.85, -1.0, -0.35,

	 -1.85, -1.0, 0.35,
	 -1.85, 1.0, 0.35,
	 1.85, 1.0, 0.35,
	 1.85, -1.0, 0.35
};

float staticpokrywaVertices[]={
	-2.0,-0.10,0.0,
	-2.0, -0.10,0.5,
	 2.0, -0.10,0.5,
	 2.0,-0.10,0.0,

	 2.0, -0.10, 0.0,
	 2.0, -0.10, 0.5,
	 2.0, 0.0, 0.5,
	 2.0, 0.0, 0.0,

	 -2.0, -0.10, 0.0,
	 -2.0, -0.10, 0.5,
	 -2.0, 0.0, 0.5,
	 -2.0, 0.0, 0.0,

	 -2.0, -0.10, 0.0,
	 2.0, -0.10, 0.0, 
	 2.0, 0.0, 0.0,
	 -2.0, 0.0, 0.0,

	 -2.0, -0.10, 0.5,
	 2.0, -0.10, 0.5, 
	 2.0, 0.0, 0.5,
	 -2.0, 0.0, 0.5,

	 -2.1, 0.0, 0.0,
	 2.1, 0.0, 0.0,
	 2.1, 0.0, 0.6,
	 -2.1, 0.0, 0.6,

	 -2.1, 0.0, 0.0,
	 -2.1, 0.0, 0.6, 
	 -2.1, 0.1, 0.6,
	 -2.1, 0.1, 0.0,

	 2.1, 0.0, 0.0,
	 2.1, 0.0, 0.6, 
	 2.1, 0.1, 0.6,
	 2.1, 0.1, 0.0,

	 -2.1, 0.0, 0.0,
	 -2.1, 0.1, 0.0, 
	 2.1, 0.1, 0.0,
	 2.1, 0.0, 0.0, 

	 -2.1, 0.0, 0.6,
	 -2.1, 0.1, 0.6, 
	 2.1, 0.1, 0.6,
	 2.1, 0.0, 0.6, 

	 -2.1, 0.1, 0.0,
	 2.1, 0.1, 0.0,
	 2.1, 0.1, 0.6,
	 -2.1, 0.1, 0.6
};

float movingpokrywaVertices[]={
	-2.0,-0.10,0.0,
	-2.0, -0.10,-0.5,
	 2.0, -0.10,-0.5,
	 2.0,-0.10,0.0,

	 2.0, -0.10, 0.0,
	 2.0, -0.10, -0.5,
	 2.0, 0.0, -0.5,
	 2.0, 0.0, 0.0,

	 -2.0, -0.10, 0.0,
	 -2.0, -0.10, -0.5,
	 -2.0, 0.0, -0.5,
	 -2.0, 0.0, 0.0,

	 -2.0, -0.10, 0.0,
	 2.0, -0.10, 0.0, 
	 2.0, 0.0, 0.0,
	 -2.0, 0.0, 0.0,

	 -2.0, -0.10, -0.5,
	 2.0, -0.10, -0.5, 
	 2.0, 0.0, -0.5,
	 -2.0, 0.0, -0.5,

	 -2.1, 0.0, 0.0,
	 2.1, 0.0, 0.0,
	 2.1, 0.0, -0.6,
	 -2.1, 0.0, -0.6,

	 -2.1, 0.0, 0.0,
	 -2.1, 0.0, -0.6, 
	 -2.1, 0.1, -0.6,
	 -2.1, 0.1, 0.0,

	 2.1, 0.0, 0.0,
	 2.1, 0.0, -0.6, 
	 2.1, 0.1, -0.6,
	 2.1, 0.1, 0.0,

	 -2.1, 0.0, 0.0,
	 -2.1, 0.1, 0.0, 
	 2.1, 0.1, 0.0,
	 2.1, 0.0, 0.0, 

	 -2.1, 0.0, -0.6,
	 -2.1, 0.1, -0.6, 
	 2.1, 0.1, -0.6,
	 2.1, 0.0, -0.6, 

	 -2.1, 0.1, 0.0,
	 2.1, 0.1, 0.0,
	 2.1, 0.1, -0.6,
	 -2.1, 0.1, -0.6
};

float pudloColors[]={
	1,0,0, 1,0,0, 1,0,0, 1,0,0,
	0,1,0, 0,1,0, 0,1,0, 0,1,0,
	1,0,0, 1,0,0, 1,0,0, 1,0,0,
	1,1,0, 1,1,0, 1,1,0, 1,1,0,
	0,0,1, 0,0,1, 0,0,1, 0,0,1,
	1,1,0, 1,1,0, 1,1,0, 1,1,0,
	0,1,1, 0,1,1, 0,1,1, 0,1,1,
	1,1,1, 1,1,1, 1,1,1, 1,1,1,
	0,1,1, 0,1,1, 0,1,1, 0,1,1,
	1,1,1, 1,1,1, 1,1,1, 1,1,1,
	0,1,1, 0,1,1, 0,1,1, 0,1,1,
	1,1,1, 1,1,1, 1,1,1, 1,1,1,
	1,1,0, 1,1,0, 1,1,0, 1,1,0,
	0,1,0, 0,1,0, 0,1,0, 0,1,0,
	0,1,1, 0,1,1, 0,1,1, 0,1,1,
	0,1,0, 0,1,0, 0,1,0, 0,1,0,
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

#endif