/*
 * rfpirate.c
 *
 * Created: 2014/06/17 10:44:06 AM
 *  Author: jstephenson
 */ 


#include <avr/io.h>

int main(void){
    
	while(1){
		1;    
	}
	
	return 0;
}

//browse non-module functions
//built in function to set rfmode, time, etc
//browse modules
//menu should only enable modules that work in current rfmode
//module shouldn't change any settings that can affect other modules (except maybe when transmitting, should be done using built-in functions)
//when unit changes mode all modules that do only that mode should run cleanup
//modules should keep track of their own captured frames
//these frames should be cleared on cleanup

//plausible to store samples in queue, worth it considering the sample processing method? ring buffer?