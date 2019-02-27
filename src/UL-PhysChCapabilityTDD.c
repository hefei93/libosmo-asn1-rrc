/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "UL-PhysChCapabilityTDD.h"

static asn_TYPE_member_t asn_MBR_UL_PhysChCapabilityTDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_PhysChCapabilityTDD, maxTS_PerFrame),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxTS_PerFrame,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxTS-PerFrame"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_PhysChCapabilityTDD, maxPhysChPerTimeslot),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxPhysChPerTimeslot,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxPhysChPerTimeslot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_PhysChCapabilityTDD, minimumSF),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinimumSF_UL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"minimumSF"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_PhysChCapabilityTDD, supportOfPUSCH),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportOfPUSCH"
		},
};
static ber_tlv_tag_t asn_DEF_UL_PhysChCapabilityTDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UL_PhysChCapabilityTDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxTS-PerFrame at 3315 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* maxPhysChPerTimeslot at 3316 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* minimumSF at 3317 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* supportOfPUSCH at 3318 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UL_PhysChCapabilityTDD_specs_1 = {
	sizeof(struct UL_PhysChCapabilityTDD),
	offsetof(struct UL_PhysChCapabilityTDD, _asn_ctx),
	asn_MAP_UL_PhysChCapabilityTDD_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UL_PhysChCapabilityTDD = {
	"UL-PhysChCapabilityTDD",
	"UL-PhysChCapabilityTDD",
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
	asn_DEF_UL_PhysChCapabilityTDD_tags_1,
	sizeof(asn_DEF_UL_PhysChCapabilityTDD_tags_1)
		/sizeof(asn_DEF_UL_PhysChCapabilityTDD_tags_1[0]), /* 1 */
	asn_DEF_UL_PhysChCapabilityTDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_PhysChCapabilityTDD_tags_1)
		/sizeof(asn_DEF_UL_PhysChCapabilityTDD_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UL_PhysChCapabilityTDD_1,
	4,	/* Elements count */
	&asn_SPC_UL_PhysChCapabilityTDD_specs_1	/* Additional specs */
};

