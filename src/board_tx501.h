#pragma once

#define CONCAT_STR(X, Y)	X Y
#define SYSTEM_DIR			"/system/mds/system"
//#define USER_DATA_DIR		"/data/mds/data"

#define SYSTEM_INIT_LINK	CONCAT_STR(SYSTEM_DIR, "/devinit3")
#define SYSTEM_BIN_DIR		CONCAT_STR(SYSTEM_DIR, "/bin")
#define SYSTEM_UPDATE_DIR	CONCAT_STR(SYSTEM_DIR, "/UPDATE")

#define CHECK_BIN_DIR		"bin"
#define CHECK_INIT_FILE		"devinit3"
#define CHECK_SBIN_DIR		"sbin"
#define CHECK_UPDATE_DIR	"UPDATE"

#define TOUCH_DIR_CMD		"ls -la /system/mds/system/sbin/ &"
#define TOUCH_RECOV5_CMD	"touch /var/recov_5.dat &"
#define TOUCH_RECOV6_CMD	"touch /var/recov_6.dat &"


#define INIT_LOG_FILE		"/var/log/init.log"
#define MOND_FILE			CONCAT_STR(SYSTEM_DIR, "/bin/mond")
#define MON_FILE			CONCAT_STR(SYSTEM_DIR, "/bin/mon")
