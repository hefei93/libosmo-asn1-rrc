/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "TrafficVolumeMeasuredResults.h"

static asn_TYPE_member_t asn_MBR_TrafficVolumeMeasuredResults_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficVolumeMeasuredResults, rb_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RB_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-Identity"
		},
	{ ATF_POINTER, 3, offsetof(struct TrafficVolumeMeasuredResults, rlc_BuffersPayload),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLC_BuffersPayload,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlc-BuffersPayload"
		},
	{ ATF_POINTER, 2, offsetof(struct TrafficVolumeMeasuredResults, averageRLC_BufferPayload),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AverageRLC_BufferPayload,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"averageRLC-BufferPayload"
		},
	{ ATF_POINTER, 1, offsetof(struct TrafficVolumeMeasuredResults, varianceOfRLC_BufferPayload),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VarianceOfRLC_BufferPayload,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"varianceOfRLC-BufferPayload"
		},
};
static int asn_MAP_TrafficVolumeMeasuredResults_oms_1[] = { 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_TrafficVolumeMeasuredResults_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_TrafficVolumeMeasuredResults_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rb-Identity at 18359 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlc-BuffersPayload at 18360 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* averageRLC-BufferPayload at 18361 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* varianceOfRLC-BufferPayload at 18362 */
};
static asn_SEQUENCE_specifics_t asn_SPC_TrafficVolumeMeasuredResults_specs_1 = {
	sizeof(struct TrafficVolumeMeasuredResults),
	offsetof(struct TrafficVolumeMeasuredResults, _asn_ctx),
	asn_MAP_TrafficVolumeMeasuredResults_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_TrafficVolumeMeasuredResults_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TrafficVolumeMeasuredResults = {
	"TrafficVolumeMeasuredResults",
	"TrafficVolumeMeasuredResults",
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
	asn_DEF_TrafficVolumeMeasuredResults_tags_1,
	sizeof(asn_DEF_TrafficVolumeMeasuredResults_tags_1)
		/sizeof(asn_DEF_TrafficVolumeMeasuredResults_tags_1[0]), /* 1 */
	asn_DEF_TrafficVolumeMeasuredResults_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrafficVolumeMeasuredResults_tags_1)
		/sizeof(asn_DEF_TrafficVolumeMeasuredResults_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_TrafficVolumeMeasuredResults_1,
	4,	/* Elements count */
	&asn_SPC_TrafficVolumeMeasuredResults_specs_1	/* Additional specs */
};

