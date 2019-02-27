/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "IntraFreqMeasurementSysInfo-RSCP.h"

static int asn_DFL_2_set_1(int set_value, void **sptr) {
	MeasurementIdentity_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 1 */
		*st = 1;
		return 0;
	} else {
		/* Test default value 1 */
		return (*st == 1);
	}
}
static asn_TYPE_member_t asn_MBR_IntraFreqMeasurementSysInfo_RSCP_1[] = {
	{ ATF_POINTER, 6, offsetof(struct IntraFreqMeasurementSysInfo_RSCP, intraFreqMeasurementID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_2_set_1,	/* DEFAULT 1 */
		"intraFreqMeasurementID"
		},
	{ ATF_POINTER, 5, offsetof(struct IntraFreqMeasurementSysInfo_RSCP, intraFreqCellInfoSI_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqCellInfoSI_List_RSCP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqCellInfoSI-List"
		},
	{ ATF_POINTER, 4, offsetof(struct IntraFreqMeasurementSysInfo_RSCP, intraFreqMeasQuantity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqMeasQuantity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqMeasQuantity"
		},
	{ ATF_POINTER, 3, offsetof(struct IntraFreqMeasurementSysInfo_RSCP, intraFreqReportingQuantityForRACH),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqReportingQuantityForRACH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqReportingQuantityForRACH"
		},
	{ ATF_POINTER, 2, offsetof(struct IntraFreqMeasurementSysInfo_RSCP, maxReportedCellsOnRACH),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxReportedCellsOnRACH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxReportedCellsOnRACH"
		},
	{ ATF_POINTER, 1, offsetof(struct IntraFreqMeasurementSysInfo_RSCP, reportingInfoForCellDCH),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportingInfoForCellDCH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportingInfoForCellDCH"
		},
};
static int asn_MAP_IntraFreqMeasurementSysInfo_RSCP_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_IntraFreqMeasurementSysInfo_RSCP_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IntraFreqMeasurementSysInfo_RSCP_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqMeasurementID at 15972 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intraFreqCellInfoSI-List at 15973 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* intraFreqMeasQuantity at 15974 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* intraFreqReportingQuantityForRACH at 15975 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* maxReportedCellsOnRACH at 15976 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* reportingInfoForCellDCH at 15977 */
};
static asn_SEQUENCE_specifics_t asn_SPC_IntraFreqMeasurementSysInfo_RSCP_specs_1 = {
	sizeof(struct IntraFreqMeasurementSysInfo_RSCP),
	offsetof(struct IntraFreqMeasurementSysInfo_RSCP, _asn_ctx),
	asn_MAP_IntraFreqMeasurementSysInfo_RSCP_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_IntraFreqMeasurementSysInfo_RSCP_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IntraFreqMeasurementSysInfo_RSCP = {
	"IntraFreqMeasurementSysInfo-RSCP",
	"IntraFreqMeasurementSysInfo-RSCP",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_IntraFreqMeasurementSysInfo_RSCP_tags_1,
	sizeof(asn_DEF_IntraFreqMeasurementSysInfo_RSCP_tags_1)
		/sizeof(asn_DEF_IntraFreqMeasurementSysInfo_RSCP_tags_1[0]), /* 1 */
	asn_DEF_IntraFreqMeasurementSysInfo_RSCP_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntraFreqMeasurementSysInfo_RSCP_tags_1)
		/sizeof(asn_DEF_IntraFreqMeasurementSysInfo_RSCP_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IntraFreqMeasurementSysInfo_RSCP_1,
	6,	/* Elements count */
	&asn_SPC_IntraFreqMeasurementSysInfo_RSCP_specs_1	/* Additional specs */
};

