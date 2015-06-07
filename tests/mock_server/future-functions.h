#ifndef future_functionS_H
#define future_functionS_H

#include "future-value.h"
#include "future.h"
#include "mongoc-bulk-operation.h"

/**************************************************
 *
 * Generated by build/generate-future-functions.py.
 *
 * DO NOT EDIT THIS FILE.
 *
 *************************************************/


future_t *
future_bulk_operation_execute (

   mongoc_bulk_operation_ptr bulk,
   bson_ptr reply,
   bson_error_ptr error
);


future_t *
future_cursor_next (

   mongoc_cursor_ptr cursor,
   const_bson_ptr_ptr doc
);


future_t *
future_client_get_database_names (

   mongoc_client_ptr client,
   bson_error_ptr error
);


future_t *
future_database_get_collection_names (

   mongoc_database_ptr database,
   bson_error_ptr error
);



#endif /* future_functionS_H */