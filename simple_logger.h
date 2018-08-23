// Easy header file inclusion

#ifdef ENABLE_SIMPLE_LOGGER
#include "log_level.h"
#include "logger.h"
#include "null_log_writer.h"
#include "terminal_log_writer.h"
#include "json_log_formatter.h"
#endif

#ifdef ENABLE_SIMPLE_LOGGER
  #define verbose(msg) Log.verbose(msg)
  #define info(msg) Log.info(msg)
  #define debug(msg) Log.debug(msg)
  #define warning(msg) Log.warning(msg)
  #define error(msg) Log.error(msg)
#else
  #define verbose(msg) while(false)
  #define info(msg) while(false)
  #define debug(msg) while(false)
  #define warning(msg) while(false)
  #define error(msg) while(false)
#endif