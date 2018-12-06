
typedef struct linknd{
	int data;
	
	void *next;
	//struct linknd *next 와 같음

} linknd_t;		

static linknd_t *list; 	//linked list 실체 
