#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2015 // UTC year
#define YOTTA_BUILD_MONTH 9 // UTC month 1-12
#define YOTTA_BUILD_DAY 21 // UTC day 1-31
#define YOTTA_BUILD_HOUR 12 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 30 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 33 // UTC second 0-61
#define YOTTA_BUILD_UUID ce5c989f-5f74-42ea-8584-8a6d46bf6c2d // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID 69794318a8acb6cec28bd5b81cceb4b5977fd035 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#endif // ndef __YOTTA_BUILD_INFO_H__
