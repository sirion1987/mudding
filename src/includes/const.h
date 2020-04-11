/* Timing*/
#define PULSE_PER_SECOND 4

/* Player creation bit status */
#define CNT_NAME     0 /* insert name */
#define CNT_EXIST    1 /* name exists */
#define CNT_NO_EXIST 2 /* name not exists */
#define CNT_PWD      3 /* insert password */
#define CNT_CNF_PWD  4 /* password confirmation */
#define CNT_PLAYER   5 /* player created */
#define CNT_RACE     6 /* insert race */
#define CNT_CLASS    7 /* insert class */
#define CNT_STAT     8 /* insert statistics */

/* Movement direction */
#define MAX_DIR  5
#define DIR_NORD 0
#define DIR_SUD  1
#define DIR_WEST 2
#define DIR_EST  3
#define DIR_UP   4
#define DIR_DOWN 5

/* Arguments */
#define ARG_1 1
#define ARG_2 2
#define ARG_3 3

/* Prompt */
#define SET_PROMPT 0
#define STD_PROMPT 1
#define NO_PROMPT  2

/* String */
#define MAX_STRING_LENGTH 1024

/* Colours */
#define MAX_COLOURS 34

#define CNUL  ""
#define CNRM  "\x1B[0;0m"
#define CBLK  "\x1B[0;30m"
#define CRED  "\x1B[0;31m"
#define CGRN  "\x1B[0;32m"
#define CYEL  "\x1B[0;33m"
#define CBLU  "\x1B[0;34m"
#define CMAG  "\x1B[0;35m"
#define CCYN  "\x1B[0;36m"
#define CWHT  "\x1B[0;37m"

/* Bold colours */
#define BRED  "\x1B[1;31m"
#define BGRN  "\x1B[1;32m"
#define BYEL  "\x1B[1;33m"
#define BBLU  "\x1B[1;34m"
#define BMAG  "\x1B[1;35m"
#define BCYN  "\x1B[1;36m"
#define BWHT  "\x1B[1;37m"
#define BBLK  "\x1B[1;30m"

/* Background colours */
#define BKRED  "\x1B[41m"
#define BKGRN  "\x1B[42m"
#define BKYEL  "\x1B[43m"
#define BKBLU  "\x1B[44m"
#define BKMAG  "\x1B[45m"
#define BKCYN  "\x1B[46m"
#define BKWHT  "\x1B[47m"
#define BKBLK  "\x1B[40m"

#define CUDL  "\x1B[4m"
#define CFSH  "\x1B[5m"
#define CRVS  "\x1B[7m"

/* Special characters */
#define CAMP  "&"
#define CSLH  "\\"
#define CTIL  "~"
#define CCR   "\n"
#define BELL  "\a"
#define BARLN "|"
