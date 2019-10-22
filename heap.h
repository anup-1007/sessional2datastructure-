


#ifndef _INCLUDED_HEAP_
#define _INCLUDED_HEAP_

#include <stdint.h>
#define HEAP_MAX_SIZE 32

#define TAKEOFF 0
#define LANDING 1

typedef struct _event_ Event;

struct _event_{
uint32_t timestamp;
uint32_t plane_no;
uint32_t tak_or_lan;
};

typedef struct _heap_ Heap;

struct  _heap_
{
uint32_t size;
Event **data;
};

Event create_event(uint32_t timestamp,uint32_t plane_no,uint32_t tak_or_lan);
Heap heap_new(Event **data, uint32_t len);
Heap* heap_sort(Heap *heap);
Heap* heap_insert(Heap *heap, Event *key);
Heap* heap_test(Heap *heap);
Event* heap_get_max(Heap *heap);
Event* heap_extract_max(Heap *heap);
uint32_t heap_size(Heap *heap);

#endif













//#ifndef _INCLUDED_HEAP_
//#define _INCLUDED_HEAP_

//#include <stdint.h>
//#define HEAP_MAX_SIZE 32
//#define TAKEOFF 0
//#define LANDING 1


//struct  _event_
//{   uint32_t timestamp;
//	uint32_t plane_no;
//}


//typedef struct _heap_{

//	uint32_t	size;
//	Event		data[HEAP_MAX_SIZE]	;
//};






//Heap 		heap_new(int32_t data[], uint32_t len);
//Heap*		heap_sort(Heap *heap);
//Heap*		heap_insert(Heap *heap, int32_t key);
//Heap*		heap_test(Heap *heap);
//int32_t		heap_get_max(Heap *heap);
//int32_t		heap_extract_max(Heap *heap);
//uint32_t	heap_size(Heap *heap);

//#endif
