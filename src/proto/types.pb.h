/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_PROMETHEUS_TYPES_PB_H_INCLUDED
#define PB_PROMETHEUS_TYPES_PB_H_INCLUDED
#include "pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _prometheus_Label { 
    pb_callback_t name; 
    pb_callback_t value; 
} prometheus_Label;

/* TimeSeries represents samples and labels for a single time series. */
typedef struct _prometheus_TimeSeries { 
    pb_callback_t labels; 
    pb_callback_t samples; 
} prometheus_TimeSeries;

typedef struct _prometheus_Sample { 
    double value; 
    int64_t timestamp; 
} prometheus_Sample;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define prometheus_Sample_init_default           {0, 0}
#define prometheus_TimeSeries_init_default       {{{NULL}, NULL}, {{NULL}, NULL}}
#define prometheus_Label_init_default            {{{NULL}, NULL}, {{NULL}, NULL}}
#define prometheus_Sample_init_zero              {0, 0}
#define prometheus_TimeSeries_init_zero          {{{NULL}, NULL}, {{NULL}, NULL}}
#define prometheus_Label_init_zero               {{{NULL}, NULL}, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define prometheus_Label_name_tag                1
#define prometheus_Label_value_tag               2
#define prometheus_TimeSeries_labels_tag         1
#define prometheus_TimeSeries_samples_tag        2
#define prometheus_Sample_value_tag              1
#define prometheus_Sample_timestamp_tag          2

/* Struct field encoding specification for nanopb */
#define prometheus_Sample_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, DOUBLE,   value,             1) \
X(a, STATIC,   SINGULAR, INT64,    timestamp,         2)
#define prometheus_Sample_CALLBACK NULL
#define prometheus_Sample_DEFAULT NULL

#define prometheus_TimeSeries_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  labels,            1) \
X(a, CALLBACK, REPEATED, MESSAGE,  samples,           2)
#define prometheus_TimeSeries_CALLBACK pb_default_field_callback
#define prometheus_TimeSeries_DEFAULT NULL
#define prometheus_TimeSeries_labels_MSGTYPE prometheus_Label
#define prometheus_TimeSeries_samples_MSGTYPE prometheus_Sample

#define prometheus_Label_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, SINGULAR, STRING,   value,             2)
#define prometheus_Label_CALLBACK pb_default_field_callback
#define prometheus_Label_DEFAULT NULL

extern const pb_msgdesc_t prometheus_Sample_msg;
extern const pb_msgdesc_t prometheus_TimeSeries_msg;
extern const pb_msgdesc_t prometheus_Label_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define prometheus_Sample_fields &prometheus_Sample_msg
#define prometheus_TimeSeries_fields &prometheus_TimeSeries_msg
#define prometheus_Label_fields &prometheus_Label_msg

/* Maximum encoded size of messages (where known) */
/* prometheus_TimeSeries_size depends on runtime parameters */
/* prometheus_Label_size depends on runtime parameters */
#define prometheus_Sample_size                   20

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif