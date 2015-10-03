
struct xfdf_form_translation it203_2014[] = {
	{"", NAME1FIRSTMID, "Your first name", ""},
	{"", NAME1LAST, "Your last name", ""},
	{"", SOCSEC1, "Your SSN", ""},
	{"", DOB1, "Your DOB", ""},
	{"", NAME2FIRSTMID, "Spouse's first name", ""},
	{"", NAME2LAST, "Spouse's last name", ""},
	{"", SOCSEC2, "Spouse's SSN", ""},
	{"", DOB2, "Spouse DOB", ""},
	{"", ADDRESS1, "Mailing address", ""},
	{"", ADDRESSAPTNO, "Apartment number 1", ""},
	{"", ADDRESSTOWN, "City, village or post office 1", ""},
	{"", ADDRESSSTATE, "State 1", ""},
	{"", ADDRESSZIP, "ZIP code 1", ""},
	{"", ACCOUNTNUM, "account number", ""},
	{"", ROUTINGNUM, "routing number", ""},
	{"", OCCUPATION, "Occupation", ""},
	{"", EMAIL, "email3", ""},
	{"", PHONEAREA, "day phone area code", ""},
	{"", PHONENUM, "daytimephoneno", ""},
	
	{"", NAME1_AND_NAME2, "Name as shown on page 1", ""},

	{"Single", IF_SET, "Filing Status", "Single"},
	{"MFJ", IF_SET, "Filing Status", "2 Married Filing Joint Return (enter spouse&#144;s social security number above)"},
	{"MFS", IF_SET, "Filing Status", "3 Married Filing Seperate Return (enter spouse&#144;s social security number above)"},
	{"HOH", IF_SET, "Filing Status", "Head of Household (with qualifying person)"},
	{"QW", IF_SET, "Filing Status", "Qualifying widow(er) with dependent child"},
	{"itemized", IF_SET, "Itemized", "yes"},
	{"did_not_itemize", IF_SET, "Itemized", "no"},
	{"dependent", IF_SET, "Dependent", "yes"},
	{"not_dependent", IF_SET, "Dependent", "no"},
	// {"", IF_SET, "Foreign accounts", "Yes"},	// note - this does not actually work - set this button manually
	{"68", IF_SET, "Foreign accounts", "Off"},
	{"ny_itemized", IF_SET, "deduction", "Itemized"},
	{"ny_standard", IF_SET, "deduction", "Standard"},

	{"nyc_months", DOLLAR_ONLY, "E2.0", ""},
	{"spouse_nyc_months", DOLLAR_ONLY, "E2.1", ""},

	{"nys_living_quarters", IF_SET, "In NYC", "yes"},
	{"not_nys_living_quarters", IF_SET, "In NYC", "no"},

	{"1", DOLLAR_ONLY, "federal 1 dollars", ""},
	{"2", DOLLAR_ONLY, "federal 2 dollars", ""},
	{"3", DOLLAR_ONLY, "federal 3 dollars", ""},
	{"4", DOLLAR_ONLY, "federal 4 dollars", ""},
	{"5", DOLLAR_ONLY, "federal 5 dollars", ""},
	{"6", DOLLAR_ONLY, "federal 6 dollars", ""},
	{"7", DOLLAR_ONLY, "federal 7 dollars", ""},
	{"8", DOLLAR_ONLY, "federal 8 dollars", ""},
	{"9", DOLLAR_ONLY, "federal 9 dollars", ""},
	{"10", DOLLAR_ONLY, "federal 10 dollars", ""},
	{"11", DOLLAR_ONLY, "federal 11 dollars", ""},
	{"12", DOLLAR_ONLY, "federal 12 dollars", ""},
	{"13", DOLLAR_ONLY, "federal 13 dollars", ""},
	{"14", DOLLAR_ONLY, "federal 14 dollars", ""},
	{"15", DOLLAR_ONLY, "federal 15 dollars", ""},
	{"16", DOLLAR_ONLY, "federal 16 dollars", ""},
	{"17", DOLLAR_ONLY, "federal 17 dollars", ""},
	{"18", DOLLAR_ONLY, "federal 18 dollars", ""},
	{"19", DOLLAR_ONLY, "federal 19 dollars", ""},
	{"20", DOLLAR_ONLY, "federal 20 dollars", ""},
	{"21", DOLLAR_ONLY, "federal 21 dollars", ""},
	{"22", DOLLAR_ONLY, "federal 22 dollars", ""},
	{"23", DOLLAR_ONLY, "federal 23 dollars", ""},
	{"24", DOLLAR_ONLY, "federal 24 dollars", ""},
	{"25", DOLLAR_ONLY, "federal 25 dollars", ""},
	{"26", DOLLAR_ONLY, "federal 26 dollars", ""},
	{"27", DOLLAR_ONLY, "federal 27 dollars", ""},
	{"28", DOLLAR_ONLY, "federal 28 dollars", ""},
	{"29", DOLLAR_ONLY, "federal 29 dollars", ""},
	{"30", DOLLAR_ONLY, "federal 30 dollars", ""},
	{"31", DOLLAR_ONLY, "federal 31 dollars", ""},
	{"32", DOLLAR_ONLY, "federal 32 dollars", ""},
	{"33", DOLLAR_ONLY, "federal 33 dollars", ""},

	{"34", DOLLAR_ONLY, "34 dollars", ""},
	{"35", DOLLAR_ONLY, "35 dollars", ""},
	{"36", DOLLAR_ONLY, "36 dollars", ""},
	{"37", DOLLAR_ONLY, "37 dollars", ""},
	{"38", DOLLAR_ONLY, "38 dollars", ""},
	{"39", DOLLAR_ONLY, "39 dollars", ""},
	{"40", DOLLAR_ONLY, "40 dollars", ""},
	{"41", DOLLAR_ONLY, "41 dollars", ""},
	{"42", DOLLAR_ONLY, "42 dollars", ""},
	{"43", DOLLAR_ONLY, "43 dollars", ""},
	{"44", DOLLAR_ONLY, "44 dollars", ""},
	{"45", DOLLAR_AND_CENTS_ONE, "45 dollars", ""},
	{"45", DOLLAR_AND_CENTS_ONE, "percent", ""},
	{"31", DOLLAR_ONLY, "43 federal dollars", ""},
	{"46", DOLLAR_ONLY, "46 dollars", ""},
	{"47", DOLLAR_ONLY, "47 dollars", ""},
	{"48", DOLLAR_ONLY, "48 dollars", ""},
	{"49", DOLLAR_ONLY, "49 dollars", ""},
	{"50", DOLLAR_ONLY, "50 dollars", ""},
	{"51", DOLLAR_ONLY, "51 dollars", ""},
	{"52", DOLLAR_ONLY, "52 dollars", ""},
	{"53", DOLLAR_ONLY, "53 dollars", ""},
	{"54", DOLLAR_ONLY, "54 dollars", ""},
	{"55", DOLLAR_ONLY, "55 dollars", ""},
	{"56", DOLLAR_ONLY, "56 dollars", ""},
	{"57", DOLLAR_ONLY, "57 dollars", ""},
	{"58", DOLLAR_ONLY, "58 dollars", ""},
	{"59", DOLLAR_ONLY, "59 dollars", ""},
	{"60", DOLLAR_ONLY, "60 dollars", ""},
	{"61", DOLLAR_ONLY, "61 dollars", ""},
	{"62", DOLLAR_ONLY, "62 dollars", ""},
	{"63", DOLLAR_ONLY, "63 dollars", ""},
	{"64", DOLLAR_ONLY, "64 dollars", ""},
	{"65", DOLLAR_ONLY, "65 dollars", ""},
	{"66", DOLLAR_ONLY, "66 dollars", ""},
	{"67", DOLLAR_ONLY, "67 dollars", ""},
	{"68", DOLLAR_ONLY, "68 dollars", ""},
	{"68", IF_SET, "line 68", "direct deposit"},

	{"69", DOLLAR_ONLY, "69 dollars", ""},
	{"70", DOLLAR_ONLY, "70 dollars", ""},
	{"71", DOLLAR_ONLY, "71 dollars", ""},
	{"72", DOLLAR_ONLY, "72 dollars", ""},
	{"68", ACCOUNTTYPE_CHECKING, "line 72b", "Personal checking"},
	{"68", ACCOUNTTYPE_SAVINGS, "line 72b", "Personal savings"},
	{"73", DOLLAR_ONLY, "73 dollars", ""},
	{"74", DOLLAR_ONLY, "74 dollars", ""},
	{"75", DOLLAR_ONLY, "75 dollars", ""},
	{"76", DOLLAR_ONLY, "76 dollars", ""},
	{"77", DOLLAR_ONLY, "77 dollars", ""},
	{"78", DOLLAR_ONLY, "78 dollars", ""},
	{"79", DOLLAR_ONLY, "79 dollars", ""},
	{"80", DOLLAR_ONLY, "80 dollars", ""},
	{"81", DOLLAR_ONLY, "81 dollars", ""},
	{"82", DOLLAR_ONLY, "82 dollars", ""},

	{NULL, DOLLAR_ONLY, NULL, NULL}
};

struct xfdf_form_translation it203_2014_State[] = {
	{"1", DOLLAR_ONLY, "nys 1 dollars", ""},
	{"2", DOLLAR_ONLY, "nys 2 dollars", ""},
	{"3", DOLLAR_ONLY, "nys 3 dollars", ""},
	{"4", DOLLAR_ONLY, "nys 4 dollars", ""},
	{"5", DOLLAR_ONLY, "nys 5 dollars", ""},
	{"6", DOLLAR_ONLY, "nys 6 dollars", ""},
	{"7", DOLLAR_ONLY, "nys 7 dollars", ""},
	{"8", DOLLAR_ONLY, "nys 8 dollars", ""},
	{"9", DOLLAR_ONLY, "nys 9 dollars", ""},
	{"10", DOLLAR_ONLY, "nys 10 dollars", ""},
	{"11", DOLLAR_ONLY, "nys 11 dollars", ""},
	{"12", DOLLAR_ONLY, "nys 12 dollars", ""},
	{"13", DOLLAR_ONLY, "nys 13 dollars", ""},
	{"14", DOLLAR_ONLY, "nys 14 dollars", ""},
	{"15", DOLLAR_ONLY, "nys 15 dollars", ""},
	{"16", DOLLAR_ONLY, "nys 16 dollars", ""},
	{"17", DOLLAR_ONLY, "nys 17 dollars", ""},
	{"18", DOLLAR_ONLY, "nys 18 dollars", ""},
	{"19", DOLLAR_ONLY, "nys 19 dollars", ""},
	{"20", DOLLAR_ONLY, "nys 20 dollars", ""},
	{"21", DOLLAR_ONLY, "nys 21 dollars", ""},
	{"22", DOLLAR_ONLY, "nys 22 dollars", ""},
	{"23", DOLLAR_ONLY, "nys 23 dollars", ""},
	{"24", DOLLAR_ONLY, "nys 24 dollars", ""},
	{"25", DOLLAR_ONLY, "nys 25 dollars", ""},
	{"26", DOLLAR_ONLY, "nys 26 dollars", ""},
	{"27", DOLLAR_ONLY, "nys 27 dollars", ""},
	{"28", DOLLAR_ONLY, "nys 28 dollars", ""},
	{"29", DOLLAR_ONLY, "nys 29 dollars", ""},
	{"30", DOLLAR_ONLY, "nys 30 dollars", ""},
	{"31", DOLLAR_ONLY, "nys 31 dollars", ""},
	{"32", DOLLAR_ONLY, "nys 32 dollars", ""},
	{"31", DOLLAR_ONLY, "43nys dollars", ""},
	{NULL, DOLLAR_ONLY, NULL, NULL}
};


struct xfdf_form_translation it203d_2014[] = {
	{"", NAME1_AND_NAME2, "name", ""},
	{"", SOCSEC1, "ssn", ""},

	{"1", DOLLAR_ONLY, "line 1.0.0", ""},
	{"2", DOLLAR_ONLY, "line 1.1.0", ""},
	{"3", DOLLAR_ONLY, "line 1.2.0", ""},
	{"4", DOLLAR_ONLY, "line 1.3.0", ""},
	{"5", DOLLAR_ONLY, "line 1.4.0", ""},
	{"6", DOLLAR_ONLY, "line 1.5.0", ""},
	{"7", DOLLAR_ONLY, "line 1.6.0", ""},
	{"8", DOLLAR_ONLY, "line 1.7.0", ""},
	{"9", DOLLAR_ONLY, "line 1.1.1", ""},
 	{"10", DOLLAR_ONLY, "line 1.2.1", ""},
	{"11", DOLLAR_ONLY, "line 1.3.1", ""},
	{"12", DOLLAR_ONLY, "line 1.4.1", ""},
	{"13", DOLLAR_ONLY, "line 1.5.1", ""},
	{"14", DOLLAR_ONLY, "line 1.6.1", ""},
	{"15", DOLLAR_ONLY, "line 1.7.1", ""},

	{NULL, DOLLAR_ONLY, NULL, NULL}
};