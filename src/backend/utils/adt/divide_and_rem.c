#include "postgres.h"

#include "access/tupmacs.h"
#include "common/hashfn.h"
#include "funcapi.h"
#include "lib/stringinfo.h"
#include "libpq/pqformat.h"
#include "miscadmin.h"
#include "port/pg_bitutils.h"
#include "utils/builtins.h"
#include "utils/lsyscache.h"
#include "utils/rangetypes.h"
#include "utils/array.h"
#include "utils/memutils.h"

Datum
divide_and_rem(PG_FUNCTION_ARGS)
{
	int16 arg1 = PG_GETARG_INT16(0);
	int16 arg2 = PG_GETARG_INT16(1);

	PG_RETURN_INT16(100);
}
