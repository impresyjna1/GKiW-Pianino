#ifndef TLO_H
#define TLO_H

//cubeVertices - tablica ze współrzędnymi wierzchołków.
//cubeColors - tablica z kolorami wierzchołków
//cubeVertexCount - liczba wierzchołków

int sufitVertexCount=4;
int podlogaVertexCount=4;
int scianyVertexCount=12; 

float podlogaVertices[]={
	-1,-1,-1,
	-1, 1,-1,
	 1, 1,-1,
	 1,-1,-1,
};

float sufitVertices[]={
	-1,-1, 1,
	-1, 1, 1,
	 1, 1, 1,
	 1,-1, 1,
};

float scianyVertices[]={
	-1,-1,-1,
	-1,-1, 1,
	 1,-1, 1,
	 1,-1,-1,

	-1, 1,-1,
	-1, 1, 1,
	 1, 1, 1,
	 1, 1,-1,

	 1,-1,-1,
	 1,-1, 1,
	 1, 1, 1,
	 1, 1,-1
};

float podlogatexVertices[]={
	0,0,		0,1,		1,1,		1,0, 
}; 

float sufittexVertices[]={
	0,0,		0,1,		1,1,		1,0, 
}; 

float scianytexVertices[]={
	0,0,		0,1,		1,1,		1,0, 
	0,0,		0,1,		1,1,		1,0,
	0,0,		0,1,		1,1,		1,0,
}; 

float podlogaColors[]={
	0,0,1, 0,0,1, 0,0,1, 0,0,1
};

float scianyColors[]={
	1,1,0, 1,1,0, 1,1,0, 1,1,0, 
	1,1,0, 1,1,0, 1,1,0, 1,1,0, 
	1,1,0, 1,1,0, 1,1,0, 1,1,0
};

float sufitColors[]={
	1,1,1, 1,1,1, 1,1,1, 1,1,1
};


#endif
