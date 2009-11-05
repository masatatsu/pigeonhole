#ifndef __TESTSUITE_SETTINGS_H
#define __TESTSUITE_SETTINGS_H

#include "sieve-common.h"

void testsuite_settings_init(void);
void testsuite_settings_deinit(void);

const char *testsuite_setting_get(const char *identifier);
void testsuite_setting_set(const char *identifier, const char *value);

#endif /* __TESTSUITE_SETTINGS_H */