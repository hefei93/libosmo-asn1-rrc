/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "Event1a-LCR-r4.h"

static asn_TYPE_member_t asn_MBR_Event1a_LCR_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Event1a_LCR_r4, triggeringCondition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TriggeringCondition2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"triggeringCondition"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event1a_LCR_r4, reportingRange),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportingRange,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportingRange"
		},
	{ ATF_POINTER, 1, offsetof(struct Event1a_LCR_r4, forbiddenAffectCellList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ForbiddenAffectCellList_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"forbiddenAffectCellList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event1a_LCR_r4, w),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_W,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"w"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event1a_LCR_r4, reportDeactivationThreshold),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportDeactivationThreshold,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportDeactivationThreshold"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event1a_LCR_r4, reportingAmount),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportingAmount,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportingAmount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Event1a_LCR_r4, reportingInterval),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportingInterval,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportingInterval"
		},
};
static int asn_MAP_Event1a_LCR_r4_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_Event1a_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Event1a_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* triggeringCondition at 14059 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportingRange at 14060 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* forbiddenAffectCellList at 14061 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* w at 14062 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* reportDeactivationThreshold at 14063 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* reportingAmount at 14064 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* reportingInterval at 14066 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Event1a_LCR_r4_specs_1 = {
	sizeof(struct Event1a_LCR_r4),
	offsetof(struct Event1a_LCR_r4, _asn_ctx),
	asn_MAP_Event1a_LCR_r4_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_Event1a_LCR_r4_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Event1a_LCR_r4 = {
	"Event1a-LCR-r4",
	"Event1a-LCR-r4",
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
	asn_DEF_Event1a_LCR_r4_tags_1,
	sizeof(asn_DEF_Event1a_LCR_r4_tags_1)
		/sizeof(asn_DEF_Event1a_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_Event1a_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_Event1a_LCR_r4_tags_1)
		/sizeof(asn_DEF_Event1a_LCR_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Event1a_LCR_r4_1,
	7,	/* Elements count */
	&asn_SPC_Event1a_LCR_r4_specs_1	/* Additional specs */
};

