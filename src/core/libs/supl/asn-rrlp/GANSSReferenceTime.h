/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef _GANSSReferenceTime_H_
#define _GANSSReferenceTime_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GANSSRefTimeInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct GANSSTOD_GSMTimeAssociation;

    /* GANSSReferenceTime */
    typedef struct GANSSReferenceTime
    {
        GANSSRefTimeInfo_t ganssRefTimeInfo;
        struct GANSSTOD_GSMTimeAssociation *ganssTOD_GSMTimeAssociation /* OPTIONAL */;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GANSSReferenceTime_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GANSSReferenceTime;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSSTOD-GSMTimeAssociation.h"

#endif /* _GANSSReferenceTime_H_ */
#include <asn_internal.h>
