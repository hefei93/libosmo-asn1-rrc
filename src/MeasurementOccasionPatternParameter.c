/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "MeasurementOccasionPatternParameter.h"

static int
memb_measurement_Occasion_Coeff_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 9)) {
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
memb_measurement_Occasion_Offset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 511)) {
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
memb_measurement_Occasion_Length_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 512)) {
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
memb_timeslotBitmap_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_measurement_Occasion_Coeff_constr_2 = {
	{ APC_CONSTRAINED,	 4,  4,  1,  9 }	/* (1..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_measurement_Occasion_Offset_constr_3 = {
	{ APC_CONSTRAINED,	 9,  9,  0,  511 }	/* (0..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_measurement_Occasion_Length_constr_4 = {
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (1..512) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_timeslotBitmap_constr_5 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  7,  7 }	/* (SIZE(7..7)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_MeasurementOccasionPatternParameter_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementOccasionPatternParameter, measurement_Occasion_Coeff),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_measurement_Occasion_Coeff_constraint_1,
		&asn_PER_memb_measurement_Occasion_Coeff_constr_2,
		0,
		"measurement-Occasion-Coeff"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementOccasionPatternParameter, measurement_Occasion_Offset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_measurement_Occasion_Offset_constraint_1,
		&asn_PER_memb_measurement_Occasion_Offset_constr_3,
		0,
		"measurement-Occasion-Offset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementOccasionPatternParameter, measurement_Occasion_Length),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_measurement_Occasion_Length_constraint_1,
		&asn_PER_memb_measurement_Occasion_Length_constr_4,
		0,
		"measurement-Occasion-Length"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasurementOccasionPatternParameter, timeslotBitmap),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_timeslotBitmap_constraint_1,
		&asn_PER_memb_timeslotBitmap_constr_5,
		0,
		"timeslotBitmap"
		},
};
static int asn_MAP_MeasurementOccasionPatternParameter_oms_1[] = { 3 };
static ber_tlv_tag_t asn_DEF_MeasurementOccasionPatternParameter_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MeasurementOccasionPatternParameter_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measurement-Occasion-Coeff at 16970 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measurement-Occasion-Offset at 16971 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measurement-Occasion-Length at 16972 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* timeslotBitmap at 16973 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MeasurementOccasionPatternParameter_specs_1 = {
	sizeof(struct MeasurementOccasionPatternParameter),
	offsetof(struct MeasurementOccasionPatternParameter, _asn_ctx),
	asn_MAP_MeasurementOccasionPatternParameter_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MeasurementOccasionPatternParameter_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MeasurementOccasionPatternParameter = {
	"MeasurementOccasionPatternParameter",
	"MeasurementOccasionPatternParameter",
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
	asn_DEF_MeasurementOccasionPatternParameter_tags_1,
	sizeof(asn_DEF_MeasurementOccasionPatternParameter_tags_1)
		/sizeof(asn_DEF_MeasurementOccasionPatternParameter_tags_1[0]), /* 1 */
	asn_DEF_MeasurementOccasionPatternParameter_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasurementOccasionPatternParameter_tags_1)
		/sizeof(asn_DEF_MeasurementOccasionPatternParameter_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MeasurementOccasionPatternParameter_1,
	4,	/* Elements count */
	&asn_SPC_MeasurementOccasionPatternParameter_specs_1	/* Additional specs */
};

