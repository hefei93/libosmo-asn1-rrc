/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "EAB-AccessClassBarredList.h"

static asn_per_constraints_t asn_PER_type_EAB_AccessClassBarredList_constr_1 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_EAB_AccessClassBarredList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_AccessClassBarred,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_EAB_AccessClassBarredList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_EAB_AccessClassBarredList_specs_1 = {
	sizeof(struct EAB_AccessClassBarredList),
	offsetof(struct EAB_AccessClassBarredList, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_EAB_AccessClassBarredList = {
	"EAB-AccessClassBarredList",
	"EAB-AccessClassBarredList",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_EAB_AccessClassBarredList_tags_1,
	sizeof(asn_DEF_EAB_AccessClassBarredList_tags_1)
		/sizeof(asn_DEF_EAB_AccessClassBarredList_tags_1[0]), /* 1 */
	asn_DEF_EAB_AccessClassBarredList_tags_1,	/* Same as above */
	sizeof(asn_DEF_EAB_AccessClassBarredList_tags_1)
		/sizeof(asn_DEF_EAB_AccessClassBarredList_tags_1[0]), /* 1 */
	&asn_PER_type_EAB_AccessClassBarredList_constr_1,
	asn_MBR_EAB_AccessClassBarredList_1,
	1,	/* Single element */
	&asn_SPC_EAB_AccessClassBarredList_specs_1	/* Additional specs */
};

