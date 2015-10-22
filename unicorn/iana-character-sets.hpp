// Internal to the library, do not include this directly
// NOT INSTALLED

// Compiled from the IANA character set registry:
//      http://www.iana.org/assignments/character-sets/character-sets.xhtml
// Additional Windows code pages from the catalogues on MSDN:
//      http://msdn.microsoft.com/en-us/goglobal/bb964653.aspx
//      http://msdn.microsoft.com/en-us/library/dd317756.aspx
// Common prefixes have been stripped:
//      ^(x-|cs) universally
//      ^(cp|dos|ibm|ms|windows)-? if suffix is an integer
//      (not stripped if this is the preferred name, or if an integer has leading zeros)

#pragma once

#include <cstdint>

namespace Unicorn {

    namespace UnicornDetail {

        struct CharsetInfo {
            uint32_t pages[3];  // Microsoft or IBM code pages (in order of preference)
            const char* names;  // Names (preferred display name first)
        };

        constexpr CharsetInfo iana_character_sets[] {

            {{37, 0, 0}, "ibm037,cp037,ebcdic-cp-ca,ebcdic-cp-nl,ebcdic-cp-us,ebcdic-cp-wt"},
            {{38, 0, 0}, "ibm038,cp038,ebcdic-int"},
            {{154, 0, 0}, "ptcp154,cyrillic-asian,pt154"},
            {{274, 0, 0}, "ibm274,ebcdic-be"},
            {{275, 0, 0}, "ibm275,ebcdic-br"},
            {{281, 0, 0}, "ibm281,ebcdic-jp-e"},
            {{437, 0, 0}, "ibm437,pc8codepage437"},
            {{500, 0, 0}, "ibm500,ebcdic-cp-be,ebcdic-cp-ch"},
            {{709, 0, 0}, "asmo_449,arabic7,iso-ir-89,iso89asmo449,iso_9036"},
            {{775, 0, 0}, "ibm775,pc775baltic"},
            {{850, 0, 0}, "ibm850,pc850multilingual"},
            {{851, 0, 0}, "ibm851"},
            {{852, 0, 0}, "ibm852,pcp852"},
            {{855, 0, 0}, "ibm855"},
            {{857, 0, 0}, "ibm857"},
            {{858, 0, 0}, "ibm858,ccsid00858,cp00858,ibm00858,pc-multilingual-850+euro"},
            {{860, 0, 0}, "ibm860"},
            {{861, 0, 0}, "ibm861,cp-is"},
            {{862, 0, 0}, "ibm862,pc862latinhebrew"},
            {{863, 0, 0}, "ibm863"},
            {{864, 0, 0}, "ibm864"},
            {{865, 0, 0}, "ibm865"},
            {{866, 0, 0}, "ibm866"},
            {{868, 0, 0}, "ibm868,cp-ar"},
            {{869, 0, 0}, "ibm869,cp-gr"},
            {{870, 0, 0}, "ibm870,ebcdic-cp-roece,ebcdic-cp-yu"},
            {{874, 0, 0}, "windows-874,iso-8859-11,iso_8859-11,tis-620,tis620"},
            {{891, 0, 0}, "ibm891"},
            {{903, 0, 0}, "ibm903"},
            {{904, 0, 0}, "ibm904"},
            {{918, 0, 0}, "ibm918,ebcdic-cp-ar2"},
            {{932, 0, 0}, "shift_jis,ms_kanji,shiftjis,sjis"},
            {{936, 0, 0}, "gbk"},
            {{949, 0, 0}, "ks_c_5601-1987,iso-ir-149,korean,ks_c_5601-1989,ksc56011987,ksc_5601,uhc"},
            {{950, 0, 0}, "big5,bigfive,cn-big5"},
            {{1026, 0, 0}, "ibm1026"},
            {{1047, 0, 0}, "ibm1047"},
            {{1140, 0, 0}, "ibm1140,ccsid01140,cp01140,ebcdic-us-37+euro,ibm01140"},
            {{1141, 0, 0}, "ibm1141,ccsid01141,cp01141,ebcdic-de-273+euro,ibm01141"},
            {{1142, 0, 0}, "ibm1142,ccsid01142,cp01142,ebcdic-dk-277+euro,ebcdic-no-277+euro,ibm01142"},
            {{1143, 0, 0}, "ibm1143,ccsid01143,cp01143,ebcdic-fi-278+euro,ebcdic-se-278+euro,ibm01143"},
            {{1144, 0, 0}, "ibm1144,ccsid01144,cp01144,ebcdic-it-280+euro,ibm01144"},
            {{1145, 0, 0}, "ibm1145,ccsid01145,cp01145,ebcdic-es-284+euro,ibm01145"},
            {{1146, 0, 0}, "ibm1146,ccsid01146,cp01146,ebcdic-gb-285+euro,ibm01146"},
            {{1147, 0, 0}, "ibm1147,ccsid01147,cp01147,ebcdic-fr-297+euro,ibm01147"},
            {{1148, 0, 0}, "ibm1148,ccsid01148,cp01148,ebcdic-international-500+euro,ibm01148"},
            {{1149, 0, 0}, "ibm1149,ccsid01149,cp01149,ebcdic-is-871+euro,ibm01149"},
            {{1200, 0, 0}, "utf-16le,utf16le"},
            {{1201, 0, 0}, "utf-16be,utf16be"},
            {{1250, 0, 0}, "windows-1250,ms-ee"},
            {{1251, 0, 0}, "windows-1251,ms-cyrl"},
            {{1252, 0, 0}, "windows-1252,ms-ansi"},
            {{1253, 0, 0}, "windows-1253,ms-greek"},
            {{1254, 0, 0}, "windows-1254,ms-turk"},
            {{1255, 0, 0}, "windows-1255,ms-hebr"},
            {{1256, 0, 0}, "windows-1256,ms-arab"},
            {{1257, 0, 0}, "windows-1257,winbaltrim"},
            {{1258, 0, 0}, "windows-1258"},
            {{1361, 0, 0}, "johab"},
            {{10000, 0, 0}, "macintosh,mac,macroman,mac-roman"},
            {{10001, 0, 0}, "mac-japanese,macjapanese"},
            {{10002, 0, 0}, "mac-chinesetrad,macchinesetrad"},
            {{10003, 0, 0}, "mac-korean,mackorean"},
            {{10004, 0, 0}, "mac-arabic,macarabic"},
            {{10005, 0, 0}, "mac-hebrew,machebrew"},
            {{10006, 0, 0}, "mac-greek,macgreek"},
            {{10007, 0, 0}, "mac-cyrillic,maccyrillic"},
            {{10008, 0, 0}, "mac-chinesesimp,macchinesesimp"},
            {{10010, 0, 0}, "mac-romanian,macromania"},
            {{10017, 0, 0}, "mac-ukrainian,macukraine"},
            {{10021, 0, 0}, "mac-thai,macthai"},
            {{10029, 0, 0}, "mac-ce,maccentraleurope"},
            {{10079, 0, 0}, "mac-icelandic,maciceland"},
            {{10081, 0, 0}, "mac-turkish,macturkish"},
            {{10082, 0, 0}, "mac-croatian,maccroatian"},
            {{12000, 0, 0}, "utf-32le,utf32le"},
            {{12001, 0, 0}, "utf-32be,utf32be"},
            {{20000, 0, 0}, "chinese_cns"},
            {{20002, 0, 0}, "chinese-eten"},
            {{20105, 0, 0}, "ia5"},
            {{20106, 0, 0}, "ia5-german"},
            {{20107, 0, 0}, "ia5-swedish"},
            {{20108, 0, 0}, "ia5-norwegian"},
            {{20127, 367, 0}, "us-ascii,ansi_x3.4-1968,ansi_x3.4-1986,ascii,iso-ir-6,iso646-us,iso_646.irv:1991,us"},
            {{20238, 0, 0}, "ibm-thai,ibmthai"},
            {{20261, 0, 0}, "t.61-8bit,iso-ir-103,iso103t618bit,t.61"},
            {{20273, 273, 0}, "ibm273"},
            {{20277, 277, 0}, "ibm277,ebcdic-cp-dk,ebcdic-cp-no"},
            {{20278, 278, 0}, "ibm278,ebcdic-cp-fi,ebcdic-cp-se"},
            {{20280, 280, 0}, "ibm280,ebcdic-cp-it"},
            {{20284, 284, 0}, "ibm284,ebcdic-cp-es"},
            {{20285, 285, 0}, "ibm285,ebcdic-cp-gb"},
            {{20290, 290, 0}, "ibm290,ebcdic-jp-kana"},
            {{20297, 297, 0}, "ibm297,ebcdic-cp-fr"},
            {{20420, 420, 0}, "ibm420,ebcdic-cp-ar1"},
            {{20423, 423, 0}, "ibm423,ebcdic-cp-gr"},
            {{20424, 424, 0}, "ibm424,ebcdic-cp-he"},
            {{20833, 0, 0}, "ebcdic-koreanextended"},
            {{20866, 0, 0}, "koi8-r,koi8r"},
            {{20871, 871, 0}, "ibm871,ebcdic-cp-is"},
            {{20880, 880, 0}, "ibm880,ebcdic-cyrillic"},
            {{20905, 905, 0}, "ibm905,ebcdic-cp-tr"},
            {{20924, 924, 0}, "ibm924,ccsid00924,cp00924,ebcdic-latin9--euro,ibm00924"},
            {{20936, 0, 0}, "gb2312"},
            {{21866, 0, 0}, "koi8-u,koi8u"},
            {{28591, 819, 0}, "iso-8859-1,iso-ir-100,iso_8859-1,iso_8859-1:1987,isolatin1,l1,latin1"},
            {{28592, 0, 0}, "iso-8859-2,iso-ir-101,iso_8859-2,iso_8859-2:1987,isolatin2,l2,latin2"},
            {{28593, 0, 0}, "iso-8859-3,iso-ir-109,iso_8859-3,iso_8859-3:1988,isolatin3,l3,latin3"},
            {{28594, 0, 0}, "iso-8859-4,iso-ir-110,iso_8859-4,iso_8859-4:1988,isolatin4,l4,latin4"},
            {{28595, 0, 0}, "iso-8859-5,cyrillic,iso-ir-144,iso_8859-5,iso_8859-5:1988,isolatincyrillic"},
            {{28596, 708, 0}, "iso-8859-6,arabic,asmo-708,ecma-114,iso-ir-127,iso_8859-6,iso_8859-6:1987,isolatinarabic"},
            {{28597, 0, 0}, "iso-8859-7,ecma-118,elot_928,greek,greek8,iso-ir-126,iso_8859-7,iso_8859-7:1987,isolatingreek"},
            {{28598, 0, 0}, "iso-8859-8,hebrew,iso-ir-138,iso_8859-8,iso_8859-8:1988,isolatinhebrew"},
            {{28599, 0, 0}, "iso-8859-9,iso-ir-148,iso_8859-9,iso_8859-9:1989,isolatin5,l5,latin5"},
            {{28603, 0, 0}, "iso-8859-13,iso885913,l7,latin7"},
            {{28605, 0, 0}, "iso-8859-15,iso885915,iso_8859-15,iso_8859-15:1998,l9,latin-9,latin9"},
            {{29001, 0, 0}, "europa,europa-3"},
            {{38598, 0, 0}, "iso-8859-8-i,iso88598i,iso_8859-8-i"},
            {{50222, 50221, 50220}, "iso-2022-jp,iso2022jp"},
            {{50225, 0, 0}, "iso-2022-kr,iso2022kr"},
            {{50227, 0, 0}, "iso-2022-cn,iso2022cn"},
            {{51932, 20932, 0}, "euc-jp,eucpkdfmtjapanese,extended_unix_code_packed_format_for_japanese"},
            {{51936, 0, 0}, "euc-cn"},
            {{51949, 0, 0}, "euc-kr,euckr"},
            {{52936, 0, 0}, "hz-gb-2312,hz"},
            {{54936, 0, 0}, "gb18030"},
            {{57002, 0, 0}, "iscii-de"},
            {{57003, 0, 0}, "iscii-be"},
            {{57004, 0, 0}, "iscii-ta"},
            {{57005, 0, 0}, "iscii-te"},
            {{57006, 0, 0}, "iscii-as"},
            {{57007, 0, 0}, "iscii-or"},
            {{57008, 0, 0}, "iscii-ka"},
            {{57009, 0, 0}, "iscii-ma"},
            {{57010, 0, 0}, "iscii-gu"},
            {{57011, 0, 0}, "iscii-pa"},
            {{65000, 0, 0}, "utf-7,utf7"},
            {{65001, 0, 0}, "utf-8,utf8"},
            {{0, 0, 0}, "adobe-standard-encoding,adobestandardencoding"},
            {{0, 0, 0}, "adobe-symbol-encoding,hppsmath"},
            {{0, 0, 0}, "amiga-1251,ami-1251,ami1251,amiga1251"},
            {{0, 0, 0}, "ansi_x3.110-1983,csa_t500-1983,iso-ir-99,iso99naplps,naplps"},
            {{0, 0, 0}, "big5-hkscs,big5hkscs"},
            {{0, 0, 0}, "bocu-1,bocu1,csbocu-1"},
            {{0, 0, 0}, "brf"},
            {{0, 0, 0}, "bs_4730,gb,iso-ir-4,iso4unitedkingdom,iso646-gb,uk"},
            {{0, 0, 0}, "bs_viewdata,iso-ir-47,iso47bsviewdata"},
            {{0, 0, 0}, "cesu-8,cesu8,cscesu-8"},
            {{0, 0, 0}, "csa_z243.4-1985-1,a71,ca,csa7-1,iso-ir-121,iso121canadian1,iso646-ca"},
            {{0, 0, 0}, "csa_z243.4-1985-2,a72,csa7-2,iso-ir-122,iso122canadian2,iso646-ca2"},
            {{0, 0, 0}, "csa_z243.4-1985-gr,iso-ir-123,iso123csaz24341985gr"},
            {{0, 0, 0}, "csn_369103,iso-ir-139,iso139csn369103"},
            {{0, 0, 0}, "dec-mcs,dec,decmcs"},
            {{0, 0, 0}, "din_66003,de,iso-ir-21,iso21german,iso646-de"},
            {{0, 0, 0}, "dk-us,dkus"},
            {{0, 0, 0}, "ds_2089,dk,ds2089,iso646-dk,iso646danish"},
            {{0, 0, 0}, "ebcdic-at-de,ibmebcdicatde"},
            {{0, 0, 0}, "ebcdic-at-de-a,ebcdicatdea"},
            {{0, 0, 0}, "ebcdic-ca-fr,ebcdiccafr"},
            {{0, 0, 0}, "ebcdic-dk-no,ebcdicdkno"},
            {{0, 0, 0}, "ebcdic-dk-no-a,ebcdicdknoa"},
            {{0, 0, 0}, "ebcdic-es,ebcdices"},
            {{0, 0, 0}, "ebcdic-es-a,ebcdicesa"},
            {{0, 0, 0}, "ebcdic-es-s,ebcdicess"},
            {{0, 0, 0}, "ebcdic-fi-se,ebcdicfise"},
            {{0, 0, 0}, "ebcdic-fi-se-a,ebcdicfisea"},
            {{0, 0, 0}, "ebcdic-fr,ebcdicfr"},
            {{0, 0, 0}, "ebcdic-it,ebcdicit"},
            {{0, 0, 0}, "ebcdic-pt,ebcdicpt"},
            {{0, 0, 0}, "ebcdic-uk,ebcdicuk"},
            {{0, 0, 0}, "ebcdic-us,ebcdicus"},
            {{0, 0, 0}, "ecma-cyrillic,iso-ir-111,iso111ecmacyrillic,koi8-e"},
            {{0, 0, 0}, "es,iso-ir-17,iso17spanish,iso646-es"},
            {{0, 0, 0}, "es2,iso-ir-85,iso646-es2,iso85spanish2"},
            {{0, 0, 0}, "eucfixwidjapanese,extended_unix_code_fixed_width_for_japanese"},
            {{0, 0, 0}, "gb_1988-80,cn,iso-ir-57,iso57gb1988,iso646-cn"},
            {{0, 0, 0}, "gb_2312-80,chinese,iso-ir-58,iso58gb231280"},
            {{0, 0, 0}, "gost_19768-74,iso-ir-153,iso153gost1976874,st_sev_358-88"},
            {{0, 0, 0}, "greek-ccitt,iso-ir-150,iso150,iso150greekccitt"},
            {{0, 0, 0}, "greek7,iso-ir-88,iso88greek7"},
            {{0, 0, 0}, "greek7-old,iso-ir-18,iso18greek7old"},
            {{0, 0, 0}, "hp-desktop,hpdesktop"},
            {{0, 0, 0}, "hp-legal,hplegal"},
            {{0, 0, 0}, "hp-math8,hpmath8"},
            {{0, 0, 0}, "hp-pi-font,hppifont"},
            {{0, 0, 0}, "hp-roman8,hproman8,r8,roman8"},
            {{0, 0, 0}, "ibm-symbols,ibmsymbols"},
            {{0, 0, 0}, "iec_p27-1,iso-ir-143,iso143iecp271"},
            {{0, 0, 0}, "inis,iso-ir-49,iso49inis"},
            {{0, 0, 0}, "inis-8,iso-ir-50,iso50inis8"},
            {{0, 0, 0}, "inis-cyrillic,iso-ir-51,iso51iniscyrillic"},
            {{0, 0, 0}, "iso-10646-j-1,unicodejapanese"},
            {{0, 0, 0}, "iso-10646-ucs-basic,unicodeascii"},
            {{0, 0, 0}, "iso-11548-1,iso115481,iso_11548-1,iso_tr_11548-1"},
            {{0, 0, 0}, "iso-2022-cn-ext,iso2022cnext"},
            {{0, 0, 0}, "iso-2022-jp-2,iso2022jp2"},
            {{0, 0, 0}, "iso-8859-1-windows-3.0-latin-1,windows30latin1"},
            {{0, 0, 0}, "iso-8859-1-windows-3.1-latin-1,windows31latin1"},
            {{0, 0, 0}, "iso-8859-10,iso-ir-157,iso_8859-10:1992,isolatin6,l6,latin6"},
            {{0, 0, 0}, "iso-8859-14,iso-celtic,iso-ir-199,iso885914,iso_8859-14,iso_8859-14:1998,l8,latin8"},
            {{0, 0, 0}, "iso-8859-16,iso-ir-226,iso885916,iso_8859-16,iso_8859-16:2001,l10,latin10"},
            {{0, 0, 0}, "iso-8859-2-windows-latin-2,windows31latin2"},
            {{0, 0, 0}, "iso-8859-6-e,iso88596e,iso_8859-6-e"},
            {{0, 0, 0}, "iso-8859-6-i,iso88596i,iso_8859-6-i"},
            {{0, 0, 0}, "iso-8859-8-e,iso88598e,iso_8859-8-e"},
            {{0, 0, 0}, "iso-8859-9-windows-latin-5,windows31latin5"},
            {{0, 0, 0}, "iso-ir-90,iso90"},
            {{0, 0, 0}, "iso-unicode-ibm-1261,unicodeibm1261"},
            {{0, 0, 0}, "iso-unicode-ibm-1264,unicodeibm1264"},
            {{0, 0, 0}, "iso-unicode-ibm-1265,unicodeibm1265"},
            {{0, 0, 0}, "iso-unicode-ibm-1268,unicodeibm1268"},
            {{0, 0, 0}, "iso-unicode-ibm-1276,unicodeibm1276"},
            {{0, 0, 0}, "iso_10367-box,iso-ir-155,iso10367box"},
            {{0, 0, 0}, "iso_2033-1983,e13b,iso-ir-98,iso2033"},
            {{0, 0, 0}, "iso_5427,iso-ir-37,iso5427cyrillic"},
            {{0, 0, 0}, "iso_5427:1981,iso-ir-54,iso54271981,iso5427cyrillic1981"},
            {{0, 0, 0}, "iso_5428:1980,iso-ir-55,iso5428greek"},
            {{0, 0, 0}, "iso_646.basic:1983,iso646basic1983,ref"},
            {{0, 0, 0}, "iso_646.irv:1983,irv,iso-ir-2,iso2intlrefversion"},
            {{0, 0, 0}, "iso_6937-2-25,iso-ir-152,iso6937add"},
            {{0, 0, 0}, "iso_6937-2-add,iso-ir-142,isotextcomm"},
            {{0, 0, 0}, "iso_8859-supp,iso-ir-154,iso8859supp,latin1-2-5"},
            {{0, 0, 0}, "it,iso-ir-15,iso15italian,iso646-it"},
            {{0, 0, 0}, "jis_c6220-1969-jp,iso-ir-13,iso13jisc6220jp,jis_c6220-1969,katakana,x0201-7"},
            {{0, 0, 0}, "jis_c6220-1969-ro,iso-ir-14,iso14jisc6220ro,iso646-jp,jp"},
            {{0, 0, 0}, "jis_c6226-1978,iso-ir-42,iso42jisc62261978"},
            {{0, 0, 0}, "jis_c6226-1983,iso-ir-87,iso87jisx0208,jis_x0208-1983,x0208"},
            {{0, 0, 0}, "jis_c6229-1984-a,iso-ir-91,iso91jisc62291984a,jp-ocr-a"},
            {{0, 0, 0}, "jis_c6229-1984-b,iso-ir-92,iso646-jp-ocr-b,iso92jisc62991984b,jp-ocr-b"},
            {{0, 0, 0}, "jis_c6229-1984-b-add,iso-ir-93,iso93jis62291984badd,jp-ocr-b-add"},
            {{0, 0, 0}, "jis_c6229-1984-hand,iso-ir-94,iso94jis62291984hand,jp-ocr-hand"},
            {{0, 0, 0}, "jis_c6229-1984-hand-add,iso-ir-95,iso95jis62291984handadd,jp-ocr-hand-add"},
            {{0, 0, 0}, "jis_c6229-1984-kana,iso-ir-96,iso96jisc62291984kana"},
            {{0, 0, 0}, "jis_encoding,jisencoding"},
            {{0, 0, 0}, "jis_x0201,halfwidthkatakana,x0201"},
            {{0, 0, 0}, "jis_x0212-1990,iso-ir-159,iso159jisx02121990,x0212"},
            {{0, 0, 0}, "jus_i.b1.002,iso-ir-141,iso141jusib1002,iso646-yu,js,yu"},
            {{0, 0, 0}, "jus_i.b1.003-mac,iso-ir-147,iso147macedonian,macedonian"},
            {{0, 0, 0}, "jus_i.b1.003-serb,iso-ir-146,iso146serbian,serbian"},
            {{0, 0, 0}, "koi7-switched,koi7switched"},
            {{0, 0, 0}, "ksc5636,iso646-kr"},
            {{0, 0, 0}, "kz-1048,kz1048,rk1048,strk1048-2002"},
            {{0, 0, 0}, "latin-greek,iso-ir-19,iso19latingreek"},
            {{0, 0, 0}, "latin-greek-1,iso-ir-27,iso27latingreek1"},
            {{0, 0, 0}, "latin-lap,iso-ir-158,iso158lap,lap"},
            {{0, 0, 0}, "microsoft-publishing,microsoftpublishing"},
            {{0, 0, 0}, "msz_7795.3,hu,iso-ir-86,iso646-hu,iso86hungarian"},
            {{0, 0, 0}, "nats-dano,iso-ir-9-1,natsdano"},
            {{0, 0, 0}, "nats-dano-add,iso-ir-9-2,natsdanoadd"},
            {{0, 0, 0}, "nats-sefi,iso-ir-8-1,natssefi"},
            {{0, 0, 0}, "nats-sefi-add,iso-ir-8-2,natssefiadd"},
            {{0, 0, 0}, "nc_nc00-10:81,cuba,iso-ir-151,iso151cuba,iso646-cu"},
            {{0, 0, 0}, "nf_z_62-010,fr,iso-ir-69,iso646-fr,iso69french"},
            {{0, 0, 0}, "nf_z_62-010_(1973),iso-ir-25,iso25french,iso646-fr1"},
            {{0, 0, 0}, "ns_4551-1,iso-ir-60,iso60danishnorwegian,iso60norwegian1,iso646-no,no"},
            {{0, 0, 0}, "ns_4551-2,iso-ir-61,iso61norwegian2,iso646-no2,no2"},
            {{0, 0, 0}, "osd_ebcdic_df03_irv,osdebcdicdf03irv"},
            {{0, 0, 0}, "osd_ebcdic_df04_1,osdebcdicdf041"},
            {{0, 0, 0}, "osd_ebcdic_df04_15,osdebcdicdf0415"},
            {{0, 0, 0}, "pc8-danish-norwegian,pc8danishnorwegian"},
            {{0, 0, 0}, "pc8-turkish,pc8turkish"},
            {{0, 0, 0}, "pt,iso-ir-16,iso16portuguese,iso646-pt"},
            {{0, 0, 0}, "pt2,iso-ir-84,iso646-pt2,iso84portuguese2"},
            {{0, 0, 0}, "scsu"},
            {{0, 0, 0}, "sen_850200_b,fi,iso-ir-10,iso10swedish,iso646-fi,iso646-se,se"},
            {{0, 0, 0}, "sen_850200_c,iso-ir-11,iso11swedishfornames,iso646-se2,se2"},
            {{0, 0, 0}, "t.101-g2,iso-ir-128,iso128t101g2"},
            {{0, 0, 0}, "t.61-7bit,iso-ir-102,iso102t617bit"},
            {{0, 0, 0}, "tscii"},
            {{0, 0, 0}, "unicode-1-1,unicode11"},
            {{0, 0, 0}, "unicode-1-1-utf-7,unicode11utf7"},
            {{0, 0, 0}, "us-dk,usdk"},
            {{0, 0, 0}, "ventura-international,venturainternational"},
            {{0, 0, 0}, "ventura-math,venturamath"},
            {{0, 0, 0}, "ventura-us,venturaus"},
            {{0, 0, 0}, "videotex-suppl,iso-ir-70,iso70videotexsupp1"},
            {{0, 0, 0}, "viqr"},
            {{0, 0, 0}, "viscii"},
            {{0, 0, 0}, "windows-31j,windows31j"},

        };

    }

}
