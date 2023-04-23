#include <stdio.h>
#include <stdlib.h>

union id{ 
int id_num; 
char nname[20];
};

void set_id(union id *item); 
void show_id(union id item);

int main(){
	union id item; 
	
	set_id(&item);
	show_id(item);
	
	return 0; 
}

void set_id(union id *item){
	item->id_num = 42;
}
void show_id(union id item){
	printf("ID es %d", item.id_num);
}
