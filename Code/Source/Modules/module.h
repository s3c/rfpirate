/*
 * module.h
 *
 * Created: 2014/06/17 11:07:08 AM
 *  Author: jstephenson
 */ 


#ifndef MODULE_H_
#define MODULE_H_

#include "../rfpirate.h"

typedef void (*modCallBackFP)(void);

typedef struct {
	
	char rfTypeC; //Change to proper rftypes, values only passed to this module if flag AND match
	char modIdC; //unique value used to identify module, used to load and save in eeprom
	char *modNameCP; //name shown on LCD
	
	modCallBackFP modInitFP; //called when the unit enters an rfmode this module operates in
	modCallBackFP modLcdInitFP; //called when the user selects current module from menu
	modCallBackFP modProcessFP; //process received samples, only used if module works in current rfmode
	modCallBackFP modExitFP; //called when unit changes to an rfmode not supported by module and module was active
	
} rfModuleS;

#endif /* MODULETEMPLATE_H_ */