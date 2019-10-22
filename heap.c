#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "heap.h"




static void _swap_(int32_t *data1, int32_t *data2) {
	int32_t temp = *data1;
	*data1 = *data2;
	*data2 = temp;
}




static void _swap_(Event *data1, Event *data2) {

uint32_t timestamp = data1->timestamp;
uint32_t plane_no = data1->plane_no;
uint32_t tak_or_lan = data1->tak_or_lan;

data1->timestamp = data2->timestamp;
data1->plane_no = data2->plane_no;
data1->tak_or_lan = data2->tak_or_lan;

data2->timestamp = timestamp;
data2->plane_no = plane_no;
data2->tak_or_lan = tak_or_lan;

}
