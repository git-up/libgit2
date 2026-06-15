#include "common.h"
#include "indexer.h"
#include "types.h"
#include "oid.h"
#include "strarray.h"

/**
 * @file git2/index.h
 * @brief Index (aka "cache" aka "staging area")
 * @defgroup git_index Git index parsing and manipulation routines
 * @ingroup Git
 * @{
 */
GIT_BEGIN_DECL

/**
 * Forget the file associated with this index.
 *
 * This will prevent using operations that read
 * or write to the index's on-disk file.
 * This (probably) effectively makes this index
 * indistinguishable from an in-memory index.
 *
 * @param index An index object
 */
GIT_EXTERN(void) git_index_forget_file(git_index *index);

/** @} */
GIT_END_DECL
