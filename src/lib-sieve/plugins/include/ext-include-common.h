#ifndef __EXT_INCLUDE_COMMON_H
#define __EXT_INCLUDE_COMMON_H

#include "lib.h"
#include "hash.h"

#include "sieve-common.h"

#define EXT_INCLUDE_MAX_NESTING_LEVEL 10

extern int ext_include_my_id;
extern const struct sieve_extension include_extension;

/* Main context, currently not used for anything and might be removed */

struct ext_include_main_context {
	struct sieve_generator *generator;
};

void ext_include_register_generator_context
	(struct sieve_generator *gentr);

bool ext_include_generate_include
	(struct sieve_generator *gentr, struct sieve_command_context *cmd,
		const char *script_path, const char *script_name);

#endif /* __EXT_INCLUDE_COMMON_H */
