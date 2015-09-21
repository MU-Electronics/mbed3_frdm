#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2015 // UTC year
#define YOTTA_BUILD_MONTH 9 // UTC month 1-12
#define YOTTA_BUILD_DAY 19 // UTC day 1-31
#define YOTTA_BUILD_HOUR 17 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 2 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 0 // UTC second 0-61
#define YOTTA_BUILD_UUID 315dbe75-f65f-4a10-a7d1-e6c0940c7e93 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID cbf4c5b100cafbe54a7d5dd153287413cabb1163 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#endif // ndef __YOTTA_BUILD_INFO_H__
