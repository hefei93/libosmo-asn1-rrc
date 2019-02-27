/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "MBMS-MICHConfigurationInfo-r6.h"

static int
memb_channelisationCodeList_constraint_14(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 2)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_channelisationCodeList_constr_17 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_channelisationCodeList_constr_17 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_mode_constr_3 = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__fdd, channelisationCode256),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelisationCode256,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelisationCode256"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__fdd, ni_CountPerFrame),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_NI_CountPerFrame,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ni-CountPerFrame"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__fdd, sttd_Indicator),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sttd-Indicator"
		},
};
static ber_tlv_tag_t asn_DEF_fdd_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* channelisationCode256 at 22085 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ni-CountPerFrame at 22086 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sttd-Indicator at 22087 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_4 = {
	sizeof(struct MBMS_MICHConfigurationInfo_r6__mode__fdd),
	offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_4,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_4 = {
	"fdd",
	"fdd",
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
	asn_DEF_fdd_tags_4,
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_4,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_4,
	3,	/* Elements count */
	&asn_SPC_fdd_specs_4	/* Additional specs */
};

static int asn_DFL_13_set_0(int set_value, void **sptr) {
	MBMS_MICHNotificationIndLength_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_tdd384_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd384, timeslot),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd384, midambleShiftAndBurstType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftAndBurstType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleShiftAndBurstType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd384, channelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_TS_ChannelisationCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelisationCode"
		},
	{ ATF_POINTER, 2, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd384, repetitionPeriodLengthOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RepPerLengthOffset_MICH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionPeriodLengthOffset"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd384, mbmsNotificationIndLength),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_MICHNotificationIndLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_13_set_0,	/* DEFAULT 0 */
		"mbmsNotificationIndLength"
		},
};
static int asn_MAP_tdd384_oms_8[] = { 3, 4 };
static ber_tlv_tag_t asn_DEF_tdd384_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd384_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslot at 22092 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* midambleShiftAndBurstType at 22093 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* channelisationCode at 22094 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* repetitionPeriodLengthOffset at 22095 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* mbmsNotificationIndLength at 22096 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_specs_8 = {
	sizeof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd384),
	offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd384, _asn_ctx),
	asn_MAP_tdd384_tag2el_8,
	5,	/* Count of tags in the map */
	asn_MAP_tdd384_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_8 = {
	"tdd384",
	"tdd384",
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
	asn_DEF_tdd384_tags_8,
	sizeof(asn_DEF_tdd384_tags_8)
		/sizeof(asn_DEF_tdd384_tags_8[0]) - 1, /* 1 */
	asn_DEF_tdd384_tags_8,	/* Same as above */
	sizeof(asn_DEF_tdd384_tags_8)
		/sizeof(asn_DEF_tdd384_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd384_8,
	5,	/* Elements count */
	&asn_SPC_tdd384_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_channelisationCodeList_17[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_DL_TS_ChannelisationCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_channelisationCodeList_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_channelisationCodeList_specs_17 = {
	sizeof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd128__channelisationCodeList),
	offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd128__channelisationCodeList, _asn_ctx),
	1,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_channelisationCodeList_17 = {
	"channelisationCodeList",
	"channelisationCodeList",
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
	asn_DEF_channelisationCodeList_tags_17,
	sizeof(asn_DEF_channelisationCodeList_tags_17)
		/sizeof(asn_DEF_channelisationCodeList_tags_17[0]) - 1, /* 1 */
	asn_DEF_channelisationCodeList_tags_17,	/* Same as above */
	sizeof(asn_DEF_channelisationCodeList_tags_17)
		/sizeof(asn_DEF_channelisationCodeList_tags_17[0]), /* 2 */
	&asn_PER_type_channelisationCodeList_constr_17,
	asn_MBR_channelisationCodeList_17,
	1,	/* Single element */
	&asn_SPC_channelisationCodeList_specs_17	/* Additional specs */
};

static int asn_DFL_20_set_0(int set_value, void **sptr) {
	MBMS_MICHNotificationIndLength_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_tdd128_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd128, timeslot),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeslotNumber_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeslot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd128, midambleShiftAndBurstType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MidambleShiftAndBurstType_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleShiftAndBurstType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd128, channelisationCodeList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_channelisationCodeList_17,
		memb_channelisationCodeList_constraint_14,
		&asn_PER_memb_channelisationCodeList_constr_17,
		0,
		"channelisationCodeList"
		},
	{ ATF_POINTER, 2, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd128, repetitionPeriodLengthOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RepPerLengthOffset_MICH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"repetitionPeriodLengthOffset"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd128, mbmsNotificationIndLength),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_MICHNotificationIndLength,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_20_set_0,	/* DEFAULT 0 */
		"mbmsNotificationIndLength"
		},
};
static int asn_MAP_tdd128_oms_14[] = { 3, 4 };
static ber_tlv_tag_t asn_DEF_tdd128_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* timeslot at 22099 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* midambleShiftAndBurstType at 22100 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* channelisationCodeList at 22102 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* repetitionPeriodLengthOffset at 22103 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* mbmsNotificationIndLength at 22104 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_14 = {
	sizeof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd128),
	offsetof(struct MBMS_MICHConfigurationInfo_r6__mode__tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_14,
	5,	/* Count of tags in the map */
	asn_MAP_tdd128_oms_14,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_14 = {
	"tdd128",
	"tdd128",
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
	asn_DEF_tdd128_tags_14,
	sizeof(asn_DEF_tdd128_tags_14)
		/sizeof(asn_DEF_tdd128_tags_14[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_14,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_14)
		/sizeof(asn_DEF_tdd128_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128_14,
	5,	/* Elements count */
	&asn_SPC_tdd128_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mode_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd384_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6__mode, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_tdd128_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128"
		},
};
static asn_TYPE_tag2member_t asn_MAP_mode_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 22085 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd384 at 22092 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* tdd128 at 22099 */
};
static asn_CHOICE_specifics_t asn_SPC_mode_specs_3 = {
	sizeof(struct MBMS_MICHConfigurationInfo_r6__mode),
	offsetof(struct MBMS_MICHConfigurationInfo_r6__mode, _asn_ctx),
	offsetof(struct MBMS_MICHConfigurationInfo_r6__mode, present),
	sizeof(((struct MBMS_MICHConfigurationInfo_r6__mode *)0)->present),
	asn_MAP_mode_tag2el_3,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mode_3 = {
	"mode",
	"mode",
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
	&asn_PER_type_mode_constr_3,
	asn_MBR_mode_3,
	3,	/* Elements count */
	&asn_SPC_mode_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MBMS_MICHConfigurationInfo_r6_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6, michPowerOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_MICHPowerOffset,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"michPowerOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_MICHConfigurationInfo_r6, mode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mode_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mode"
		},
};
static ber_tlv_tag_t asn_DEF_MBMS_MICHConfigurationInfo_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MBMS_MICHConfigurationInfo_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* michPowerOffset at 22082 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mode at 22088 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MBMS_MICHConfigurationInfo_r6_specs_1 = {
	sizeof(struct MBMS_MICHConfigurationInfo_r6),
	offsetof(struct MBMS_MICHConfigurationInfo_r6, _asn_ctx),
	asn_MAP_MBMS_MICHConfigurationInfo_r6_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_MICHConfigurationInfo_r6 = {
	"MBMS-MICHConfigurationInfo-r6",
	"MBMS-MICHConfigurationInfo-r6",
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
	asn_DEF_MBMS_MICHConfigurationInfo_r6_tags_1,
	sizeof(asn_DEF_MBMS_MICHConfigurationInfo_r6_tags_1)
		/sizeof(asn_DEF_MBMS_MICHConfigurationInfo_r6_tags_1[0]), /* 1 */
	asn_DEF_MBMS_MICHConfigurationInfo_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_MICHConfigurationInfo_r6_tags_1)
		/sizeof(asn_DEF_MBMS_MICHConfigurationInfo_r6_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MBMS_MICHConfigurationInfo_r6_1,
	2,	/* Elements count */
	&asn_SPC_MBMS_MICHConfigurationInfo_r6_specs_1	/* Additional specs */
};

