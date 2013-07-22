#ifndef HALLOC_SIZE_INFO_H_
#define HALLOC_SIZE_INFO_H_

/** @file size-info.h information and definitions related to sizes */

/** size information type; this is non-changing information, to be stored in
		constant memory */
typedef struct {
/** block size */
uint block_sz;
/** number of blocks in superblock */
uint nblocks;
/** step for the hash function */
uint hash_step;
/** threshold for the superblock to be declared "roomy" */
uint roomy_threshold;
/** threshold for the superblock to be declared "busy" and become candidate for
		detachment */
uint busy_threshold;
} size_info_t;

/** maximum number of sizes supported */
#define MAX_NSIZES 64
/** a "no-size" constant */
#define SZ_NONE (~0)
/** block step (16 bytes by default), a power of two */
#define BLOCK_STEP 16
/** minimum unit size (allocation blocks are either 2 or 3 units) */
#define MIN_UNIT_SZ 8
/** maximum unit size */
#define MAX_UNIT_SZ 1024
/** unit step */
#define UNIT_STEP 2
/** the number of units */
#define NUNITS 8
/** minimum block size */
#define MIN_BLOCK_SZ 16
/** maximum block size */
#define MAX_BLOCK_SZ 3072

#endif
