/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "DownlinkTimeslotsCodes-LCR-r4.h"

static int
memb_consecutive_constraint_6(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 5)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_timeslotList_constraint_6(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 5)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_timeslotList_constr_8 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_consecutive_constr_7 = {
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (1..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_timeslotList_constr_8 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  5 }	/* (SIZE(1..5)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_additionalTimeslots_constr_6 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_moreTimeslots_constr_4 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_timeslotList_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DownlinkAdditionalTimeslots_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_timeslotList_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_timeslotList_specs_8 = {
	sizeof(struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots__timeslotList),
	offsetof(struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots__timeslotList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_timeslotList_8 = {
	"timeslotList",
	"timeslotList",
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
	asn_DEF_timeslotList_tags_8,
	sizeof(asn_DEF_timeslotList_tags_8)
		/sizeof(asn_DEF_timeslotList_tags_8[0]) - 1, /* 1 */
	asn_DEF_timeslotList_tags_8,	/* Same as above */
	sizeof(asn_DEF_timeslotList_tags_8)
		/sizeof(asn_DEF_timeslotList_tags_8[0]), /* 2 */
	&asn_PER_type_timeslotList_constr_8,
	asn_MBR_timeslotList_8,
	1,	/* Single element */
	&asn_SPC_timeslotList_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_additionalTimeslots_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots, choice.consecutive),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_consecutive_constraint_6,
		&asn_PER_memb_consecutive_constr_7,
		0,
		"consecutive"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots, choice.timeslotList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_timeslotList_8,
		memb_timeslotList_constraint_6,
		&asn_PER_memb_timeslotList_constr_8,
		0,
		"timeslotList"
		},
};
static asn_TYPE_tag2member_t asn_MAP_additionalTimeslots_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* consecutive at 7878 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* timeslotList at 7881 */
};
static asn_CHOICE_specifics_t asn_SPC_additionalTimeslots_specs_6 = {
	sizeof(struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots),
	offsetof(struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots, _asn_ctx),
	offsetof(struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots, present),
	sizeof(((struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots__additionalTimeslots *)0)->present),
	asn_MAP_additionalTimeslots_tag2el_6,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_additionalTimeslots_6 = {
	"additionalTimeslots",
	"additionalTimeslots",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_additionalTimeslots_constr_6,
	asn_MBR_additionalTimeslots_6,
	2,	/* Elements count */
	&asn_SPC_additionalTimeslots_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_moreTimeslots_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots, choice.noMore),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"noMore"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots, choice.additionalTimeslots),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_additionalTimeslots_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additionalTimeslots"
		},
};
static asn_TYPE_tag2member_t asn_MAP_moreTimeslots_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* noMore at 7876 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* additionalTimeslots at 7878 */
};
static asn_CHOICE_specifics_t asn_SPC_moreTimeslots_specs_4 = {
	sizeof(struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots),
	offsetof(struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots, _asn_ctx),
	offsetof(struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots, present),
	sizeof(((struct DownlinkTimeslotsCodes_LCR_r4__moreTimeslots *)0)->present),
	asn_MAP_moreTimeslots_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_moreTimeslots_4 = {
	"moreTimeslots",
	"moreTimeslots",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_moreTimeslots_constr_4,
	asn_MBR_moreTimeslots_4,
	2,	/* Elements count */
	&asn_SPC_moreTimeslots_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DownlinkTimeslotsCodes_LCR_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DownlinkTimeslotsCodes_LCR_r4, firstIndividualTimeslotInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IndividualTimeslotInfo_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"firstIndividualTimeslotInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DownlinkTimeslotsCodes_LCR_r4, dl_TS_ChannelisationCodesShort),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_TS_ChannelisationCodesShort,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-TS-ChannelisationCodesShort"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DownlinkTimeslotsCodes_LCR_r4, moreTimeslots),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_moreTimeslots_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"moreTimeslots"
		},
};
static ber_tlv_tag_t asn_DEF_DownlinkTimeslotsCodes_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DownlinkTimeslotsCodes_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* firstIndividualTimeslotInfo at 7873 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-TS-ChannelisationCodesShort at 7874 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* moreTimeslots at 7876 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DownlinkTimeslotsCodes_LCR_r4_specs_1 = {
	sizeof(struct DownlinkTimeslotsCodes_LCR_r4),
	offsetof(struct DownlinkTimeslotsCodes_LCR_r4, _asn_ctx),
	asn_MAP_DownlinkTimeslotsCodes_LCR_r4_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DownlinkTimeslotsCodes_LCR_r4 = {
	"DownlinkTimeslotsCodes-LCR-r4",
	"DownlinkTimeslotsCodes-LCR-r4",
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
	asn_DEF_DownlinkTimeslotsCodes_LCR_r4_tags_1,
	sizeof(asn_DEF_DownlinkTimeslotsCodes_LCR_r4_tags_1)
		/sizeof(asn_DEF_DownlinkTimeslotsCodes_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_DownlinkTimeslotsCodes_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_DownlinkTimeslotsCodes_LCR_r4_tags_1)
		/sizeof(asn_DEF_DownlinkTimeslotsCodes_LCR_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DownlinkTimeslotsCodes_LCR_r4_1,
	3,	/* Elements count */
	&asn_SPC_DownlinkTimeslotsCodes_LCR_r4_specs_1	/* Additional specs */
};

