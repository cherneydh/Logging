#include "logging.h"
#include <unistd.h>

int main(){
	open_log();

	for(int i = 0; i < 5; i++){
		write_log(__LINE__,__func__,i,"Test","Did it work?");
	}	

	flush_log();

	write_log(__LINE__,__func__,0,"Flush","after flushing");

	sleep(1);

	flush_log();
	
	read_log();

	flush_log();

	close_log();	
}
