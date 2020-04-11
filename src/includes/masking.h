/* Define masking operations */

#define CLR(value, mask)   (value) ^= ( 1 << (mask) ) /* Clear a bit */
#define ISSET(value, mask) (value)  & ( 1 << (mask) ) /* Query a bit */
#define SET(value, mask)   (value) |= ( 1 << (mask) ) /* Set a bit */
