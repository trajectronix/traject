﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("mk_MK"),.encoding=tsc(FAST_IO_LOCALE_ENCODING),.title=tsc("Macedonian locale for Macedonia"),.source=tsc("fast_io"),.address=tsc("https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("Damjan Georgievski\t\t;\t\tfast_io"),.email=tsc("bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Macedonian"),.territory=tsc("Macedonia"),.revision=tsc("2.2"),.date=tsc("2006-09-12")},.monetary={.int_curr_symbol=tsc("MKD "),.currency_symbol=tsc("ден"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc(" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc(" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("нед"),tsc("пон"),tsc("вто"),tsc("сре"),tsc("чет"),tsc("пет"),tsc("саб")},.day={tsc("недела"),tsc("понеделник"),tsc("вторник"),tsc("среда"),tsc("четврток"),tsc("петок"),tsc("сабота")},.abmon={tsc("јан"),tsc("фев"),tsc("мар"),tsc("апр"),tsc("мај"),tsc("јун"),tsc("јул"),tsc("авг"),tsc("сеп"),tsc("окт"),tsc("ное"),tsc("дек")},.mon={tsc("јануари"),tsc("февруари"),tsc("март"),tsc("април"),tsc("мај"),tsc("јуни"),tsc("јули"),tsc("август"),tsc("септември"),tsc("октомври"),tsc("ноември"),tsc("декември")},.d_t_fmt=tsc("%a, %d %b %Y %T %Z"),.d_fmt=tsc("%d.%m.%Y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a, %d %b %H:%M:%S %Z %Y"),.am_pm={tsc(""),tsc("")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1yYДдdD]"),.noexpr=tsc("^[-0nNНн]"),.yesstr=tsc("да"),.nostr=tsc("не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.tel_dom_fmt=tsc("%A %l"),.int_select=tsc("00"),.int_prefix=tsc("389")},.name={.name_fmt=tsc("%g%t%f"),.name_gen=tsc("почитуван"),.name_miss=tsc("г-ѓица"),.name_mr=tsc("г-дин"),.name_mrs=tsc("г-ѓа"),.name_ms=tsc("г-ѓа")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Македонија"),.country_post=tsc("MK"),.country_ab2=tsc("MK"),.country_ab3=tsc("MKD"),.country_num=807,.country_car=tsc("MK"),.country_isbn=tsc("9989"),.lang_name=tsc("македонски"),.lang_ab=tsc("mk"),.lang_term=tsc("mkd"),.lang_lib=tsc("mac")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"mk_MK"),.encoding=tsc(FAST_IO_LOCALE_LENCODING),.title=tsc(L"Macedonian locale for Macedonia"),.source=tsc(L"fast_io"),.address=tsc(L"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"Damjan Georgievski\t\t;\t\tfast_io"),.email=tsc(L"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Macedonian"),.territory=tsc(L"Macedonia"),.revision=tsc(L"2.2"),.date=tsc(L"2006-09-12")},.monetary={.int_curr_symbol=tsc(L"MKD "),.currency_symbol=tsc(L"ден"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"нед"),tsc(L"пон"),tsc(L"вто"),tsc(L"сре"),tsc(L"чет"),tsc(L"пет"),tsc(L"саб")},.day={tsc(L"недела"),tsc(L"понеделник"),tsc(L"вторник"),tsc(L"среда"),tsc(L"четврток"),tsc(L"петок"),tsc(L"сабота")},.abmon={tsc(L"јан"),tsc(L"фев"),tsc(L"мар"),tsc(L"апр"),tsc(L"мај"),tsc(L"јун"),tsc(L"јул"),tsc(L"авг"),tsc(L"сеп"),tsc(L"окт"),tsc(L"ное"),tsc(L"дек")},.mon={tsc(L"јануари"),tsc(L"февруари"),tsc(L"март"),tsc(L"април"),tsc(L"мај"),tsc(L"јуни"),tsc(L"јули"),tsc(L"август"),tsc(L"септември"),tsc(L"октомври"),tsc(L"ноември"),tsc(L"декември")},.d_t_fmt=tsc(L"%a, %d %b %Y %T %Z"),.d_fmt=tsc(L"%d.%m.%Y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a, %d %b %H:%M:%S %Z %Y"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1yYДдdD]"),.noexpr=tsc(L"^[-0nNНн]"),.yesstr=tsc(L"да"),.nostr=tsc(L"не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.tel_dom_fmt=tsc(L"%A %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"389")},.name={.name_fmt=tsc(L"%g%t%f"),.name_gen=tsc(L"почитуван"),.name_miss=tsc(L"г-ѓица"),.name_mr=tsc(L"г-дин"),.name_mrs=tsc(L"г-ѓа"),.name_ms=tsc(L"г-ѓа")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Македонија"),.country_post=tsc(L"MK"),.country_ab2=tsc(L"MK"),.country_ab3=tsc(L"MKD"),.country_num=807,.country_car=tsc(L"MK"),.country_isbn=tsc(L"9989"),.lang_name=tsc(L"македонски"),.lang_ab=tsc(L"mk"),.lang_term=tsc(L"mkd"),.lang_lib=tsc(L"mac")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"mk_MK"),.encoding=tsc(FAST_IO_LOCALE_u8ENCODING),.title=tsc(u8"Macedonian locale for Macedonia"),.source=tsc(u8"fast_io"),.address=tsc(u8"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"Damjan Georgievski\t\t;\t\tfast_io"),.email=tsc(u8"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Macedonian"),.territory=tsc(u8"Macedonia"),.revision=tsc(u8"2.2"),.date=tsc(u8"2006-09-12")},.monetary={.int_curr_symbol=tsc(u8"MKD "),.currency_symbol=tsc(u8"ден"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"нед"),tsc(u8"пон"),tsc(u8"вто"),tsc(u8"сре"),tsc(u8"чет"),tsc(u8"пет"),tsc(u8"саб")},.day={tsc(u8"недела"),tsc(u8"понеделник"),tsc(u8"вторник"),tsc(u8"среда"),tsc(u8"четврток"),tsc(u8"петок"),tsc(u8"сабота")},.abmon={tsc(u8"јан"),tsc(u8"фев"),tsc(u8"мар"),tsc(u8"апр"),tsc(u8"мај"),tsc(u8"јун"),tsc(u8"јул"),tsc(u8"авг"),tsc(u8"сеп"),tsc(u8"окт"),tsc(u8"ное"),tsc(u8"дек")},.mon={tsc(u8"јануари"),tsc(u8"февруари"),tsc(u8"март"),tsc(u8"април"),tsc(u8"мај"),tsc(u8"јуни"),tsc(u8"јули"),tsc(u8"август"),tsc(u8"септември"),tsc(u8"октомври"),tsc(u8"ноември"),tsc(u8"декември")},.d_t_fmt=tsc(u8"%a, %d %b %Y %T %Z"),.d_fmt=tsc(u8"%d.%m.%Y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a, %d %b %H:%M:%S %Z %Y"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1yYДдdD]"),.noexpr=tsc(u8"^[-0nNНн]"),.yesstr=tsc(u8"да"),.nostr=tsc(u8"не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.tel_dom_fmt=tsc(u8"%A %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"389")},.name={.name_fmt=tsc(u8"%g%t%f"),.name_gen=tsc(u8"почитуван"),.name_miss=tsc(u8"г-ѓица"),.name_mr=tsc(u8"г-дин"),.name_mrs=tsc(u8"г-ѓа"),.name_ms=tsc(u8"г-ѓа")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Македонија"),.country_post=tsc(u8"MK"),.country_ab2=tsc(u8"MK"),.country_ab3=tsc(u8"MKD"),.country_num=807,.country_car=tsc(u8"MK"),.country_isbn=tsc(u8"9989"),.lang_name=tsc(u8"македонски"),.lang_ab=tsc(u8"mk"),.lang_term=tsc(u8"mkd"),.lang_lib=tsc(u8"mac")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"mk_MK"),.encoding=tsc(FAST_IO_LOCALE_uENCODING),.title=tsc(u"Macedonian locale for Macedonia"),.source=tsc(u"fast_io"),.address=tsc(u"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"Damjan Georgievski\t\t;\t\tfast_io"),.email=tsc(u"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Macedonian"),.territory=tsc(u"Macedonia"),.revision=tsc(u"2.2"),.date=tsc(u"2006-09-12")},.monetary={.int_curr_symbol=tsc(u"MKD "),.currency_symbol=tsc(u"ден"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"нед"),tsc(u"пон"),tsc(u"вто"),tsc(u"сре"),tsc(u"чет"),tsc(u"пет"),tsc(u"саб")},.day={tsc(u"недела"),tsc(u"понеделник"),tsc(u"вторник"),tsc(u"среда"),tsc(u"четврток"),tsc(u"петок"),tsc(u"сабота")},.abmon={tsc(u"јан"),tsc(u"фев"),tsc(u"мар"),tsc(u"апр"),tsc(u"мај"),tsc(u"јун"),tsc(u"јул"),tsc(u"авг"),tsc(u"сеп"),tsc(u"окт"),tsc(u"ное"),tsc(u"дек")},.mon={tsc(u"јануари"),tsc(u"февруари"),tsc(u"март"),tsc(u"април"),tsc(u"мај"),tsc(u"јуни"),tsc(u"јули"),tsc(u"август"),tsc(u"септември"),tsc(u"октомври"),tsc(u"ноември"),tsc(u"декември")},.d_t_fmt=tsc(u"%a, %d %b %Y %T %Z"),.d_fmt=tsc(u"%d.%m.%Y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a, %d %b %H:%M:%S %Z %Y"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1yYДдdD]"),.noexpr=tsc(u"^[-0nNНн]"),.yesstr=tsc(u"да"),.nostr=tsc(u"не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.tel_dom_fmt=tsc(u"%A %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"389")},.name={.name_fmt=tsc(u"%g%t%f"),.name_gen=tsc(u"почитуван"),.name_miss=tsc(u"г-ѓица"),.name_mr=tsc(u"г-дин"),.name_mrs=tsc(u"г-ѓа"),.name_ms=tsc(u"г-ѓа")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Македонија"),.country_post=tsc(u"MK"),.country_ab2=tsc(u"MK"),.country_ab3=tsc(u"MKD"),.country_num=807,.country_car=tsc(u"MK"),.country_isbn=tsc(u"9989"),.lang_name=tsc(u"македонски"),.lang_ab=tsc(u"mk"),.lang_term=tsc(u"mkd"),.lang_lib=tsc(u"mac")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"mk_MK"),.encoding=tsc(FAST_IO_LOCALE_UENCODING),.title=tsc(U"Macedonian locale for Macedonia"),.source=tsc(U"fast_io"),.address=tsc(U"https://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"Damjan Georgievski\t\t;\t\tfast_io"),.email=tsc(U"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Macedonian"),.territory=tsc(U"Macedonia"),.revision=tsc(U"2.2"),.date=tsc(U"2006-09-12")},.monetary={.int_curr_symbol=tsc(U"MKD "),.currency_symbol=tsc(U"ден"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U" "),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"нед"),tsc(U"пон"),tsc(U"вто"),tsc(U"сре"),tsc(U"чет"),tsc(U"пет"),tsc(U"саб")},.day={tsc(U"недела"),tsc(U"понеделник"),tsc(U"вторник"),tsc(U"среда"),tsc(U"четврток"),tsc(U"петок"),tsc(U"сабота")},.abmon={tsc(U"јан"),tsc(U"фев"),tsc(U"мар"),tsc(U"апр"),tsc(U"мај"),tsc(U"јун"),tsc(U"јул"),tsc(U"авг"),tsc(U"сеп"),tsc(U"окт"),tsc(U"ное"),tsc(U"дек")},.mon={tsc(U"јануари"),tsc(U"февруари"),tsc(U"март"),tsc(U"април"),tsc(U"мај"),tsc(U"јуни"),tsc(U"јули"),tsc(U"август"),tsc(U"септември"),tsc(U"октомври"),tsc(U"ноември"),tsc(U"декември")},.d_t_fmt=tsc(U"%a, %d %b %Y %T %Z"),.d_fmt=tsc(U"%d.%m.%Y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a, %d %b %H:%M:%S %Z %Y"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1yYДдdD]"),.noexpr=tsc(U"^[-0nNНн]"),.yesstr=tsc(U"да"),.nostr=tsc(U"не")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.tel_dom_fmt=tsc(U"%A %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"389")},.name={.name_fmt=tsc(U"%g%t%f"),.name_gen=tsc(U"почитуван"),.name_miss=tsc(U"г-ѓица"),.name_mr=tsc(U"г-дин"),.name_mrs=tsc(U"г-ѓа"),.name_ms=tsc(U"г-ѓа")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Македонија"),.country_post=tsc(U"MK"),.country_ab2=tsc(U"MK"),.country_ab3=tsc(U"MKD"),.country_num=807,.country_car=tsc(U"MK"),.country_isbn=tsc(U"9989"),.lang_name=tsc(U"македонски"),.lang_ab=tsc(U"mk"),.lang_term=tsc(U"mkd"),.lang_lib=tsc(U"mac")},.measurement={.measurement=1}};


}
}

#include"../main.h"