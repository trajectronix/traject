﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.name=tsc("is_IS"),.encoding=tsc(FAST_IO_LOCALE_ENCODING),.title=tsc("Icelandic locale for Iceland"),.source=tsc("Stadlarad I'slands\t\t;\t\tfast_io"),.address=tsc("Keldnaholt-ITI', IS-112 Reykjavi'k, Iceland\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc("fast_io"),.email=tsc("bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Icelandic"),.territory=tsc("Iceland"),.revision=tsc("1.0"),.date=tsc("2000-06-29")},.monetary={.int_curr_symbol=tsc("ISK "),.currency_symbol=tsc("kr"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc("."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("sun"),tsc("mán"),tsc("þri"),tsc("mið"),tsc("fim"),tsc("fös"),tsc("lau")},.day={tsc("sunnudagur"),tsc("mánudagur"),tsc("þriðjudagur"),tsc("miðvikudagur"),tsc("fimmtudagur"),tsc("föstudagur"),tsc("laugardagur")},.abmon={tsc("jan"),tsc("feb"),tsc("mar"),tsc("apr"),tsc("maí"),tsc("jún"),tsc("júl"),tsc("ágú"),tsc("sep"),tsc("okt"),tsc("nóv"),tsc("des")},.mon={tsc("janúar"),tsc("febrúar"),tsc("mars"),tsc("apríl"),tsc("maí"),tsc("júní"),tsc("júlí"),tsc("ágúst"),tsc("september"),tsc("október"),tsc("nóvember"),tsc("desember")},.d_t_fmt=tsc("%a %e.%b %Y, %T"),.d_fmt=tsc("%a %e.%b %Y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %e.%b %Y, %T %Z"),.am_pm={tsc("fh"),tsc("eh")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc("^[+1jJyY]"),.noexpr=tsc("^[-0nN]"),.yesstr=tsc("já"),.nostr=tsc("nei")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("00"),.int_prefix=tsc("354")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Ísland"),.country_ab2=tsc("IS"),.country_ab3=tsc("ISL"),.country_num=352,.country_car=tsc("IS"),.lang_name=tsc("íslenska"),.lang_ab=tsc("is"),.lang_term=tsc("isl"),.lang_lib=tsc("ice")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.name=tsc(L"is_IS"),.encoding=tsc(FAST_IO_LOCALE_LENCODING),.title=tsc(L"Icelandic locale for Iceland"),.source=tsc(L"Stadlarad I'slands\t\t;\t\tfast_io"),.address=tsc(L"Keldnaholt-ITI', IS-112 Reykjavi'k, Iceland\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Icelandic"),.territory=tsc(L"Iceland"),.revision=tsc(L"1.0"),.date=tsc(L"2000-06-29")},.monetary={.int_curr_symbol=tsc(L"ISK "),.currency_symbol=tsc(L"kr"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"sun"),tsc(L"mán"),tsc(L"þri"),tsc(L"mið"),tsc(L"fim"),tsc(L"fös"),tsc(L"lau")},.day={tsc(L"sunnudagur"),tsc(L"mánudagur"),tsc(L"þriðjudagur"),tsc(L"miðvikudagur"),tsc(L"fimmtudagur"),tsc(L"föstudagur"),tsc(L"laugardagur")},.abmon={tsc(L"jan"),tsc(L"feb"),tsc(L"mar"),tsc(L"apr"),tsc(L"maí"),tsc(L"jún"),tsc(L"júl"),tsc(L"ágú"),tsc(L"sep"),tsc(L"okt"),tsc(L"nóv"),tsc(L"des")},.mon={tsc(L"janúar"),tsc(L"febrúar"),tsc(L"mars"),tsc(L"apríl"),tsc(L"maí"),tsc(L"júní"),tsc(L"júlí"),tsc(L"ágúst"),tsc(L"september"),tsc(L"október"),tsc(L"nóvember"),tsc(L"desember")},.d_t_fmt=tsc(L"%a %e.%b %Y, %T"),.d_fmt=tsc(L"%a %e.%b %Y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %e.%b %Y, %T %Z"),.am_pm={tsc(L"fh"),tsc(L"eh")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1jJyY]"),.noexpr=tsc(L"^[-0nN]"),.yesstr=tsc(L"já"),.nostr=tsc(L"nei")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"354")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Ísland"),.country_ab2=tsc(L"IS"),.country_ab3=tsc(L"ISL"),.country_num=352,.country_car=tsc(L"IS"),.lang_name=tsc(L"íslenska"),.lang_ab=tsc(L"is"),.lang_term=tsc(L"isl"),.lang_lib=tsc(L"ice")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.name=tsc(u8"is_IS"),.encoding=tsc(FAST_IO_LOCALE_u8ENCODING),.title=tsc(u8"Icelandic locale for Iceland"),.source=tsc(u8"Stadlarad I'slands\t\t;\t\tfast_io"),.address=tsc(u8"Keldnaholt-ITI', IS-112 Reykjavi'k, Iceland\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Icelandic"),.territory=tsc(u8"Iceland"),.revision=tsc(u8"1.0"),.date=tsc(u8"2000-06-29")},.monetary={.int_curr_symbol=tsc(u8"ISK "),.currency_symbol=tsc(u8"kr"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"sun"),tsc(u8"mán"),tsc(u8"þri"),tsc(u8"mið"),tsc(u8"fim"),tsc(u8"fös"),tsc(u8"lau")},.day={tsc(u8"sunnudagur"),tsc(u8"mánudagur"),tsc(u8"þriðjudagur"),tsc(u8"miðvikudagur"),tsc(u8"fimmtudagur"),tsc(u8"föstudagur"),tsc(u8"laugardagur")},.abmon={tsc(u8"jan"),tsc(u8"feb"),tsc(u8"mar"),tsc(u8"apr"),tsc(u8"maí"),tsc(u8"jún"),tsc(u8"júl"),tsc(u8"ágú"),tsc(u8"sep"),tsc(u8"okt"),tsc(u8"nóv"),tsc(u8"des")},.mon={tsc(u8"janúar"),tsc(u8"febrúar"),tsc(u8"mars"),tsc(u8"apríl"),tsc(u8"maí"),tsc(u8"júní"),tsc(u8"júlí"),tsc(u8"ágúst"),tsc(u8"september"),tsc(u8"október"),tsc(u8"nóvember"),tsc(u8"desember")},.d_t_fmt=tsc(u8"%a %e.%b %Y, %T"),.d_fmt=tsc(u8"%a %e.%b %Y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %e.%b %Y, %T %Z"),.am_pm={tsc(u8"fh"),tsc(u8"eh")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1jJyY]"),.noexpr=tsc(u8"^[-0nN]"),.yesstr=tsc(u8"já"),.nostr=tsc(u8"nei")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"354")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Ísland"),.country_ab2=tsc(u8"IS"),.country_ab3=tsc(u8"ISL"),.country_num=352,.country_car=tsc(u8"IS"),.lang_name=tsc(u8"íslenska"),.lang_ab=tsc(u8"is"),.lang_term=tsc(u8"isl"),.lang_lib=tsc(u8"ice")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.name=tsc(u"is_IS"),.encoding=tsc(FAST_IO_LOCALE_uENCODING),.title=tsc(u"Icelandic locale for Iceland"),.source=tsc(u"Stadlarad I'slands\t\t;\t\tfast_io"),.address=tsc(u"Keldnaholt-ITI', IS-112 Reykjavi'k, Iceland\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Icelandic"),.territory=tsc(u"Iceland"),.revision=tsc(u"1.0"),.date=tsc(u"2000-06-29")},.monetary={.int_curr_symbol=tsc(u"ISK "),.currency_symbol=tsc(u"kr"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"sun"),tsc(u"mán"),tsc(u"þri"),tsc(u"mið"),tsc(u"fim"),tsc(u"fös"),tsc(u"lau")},.day={tsc(u"sunnudagur"),tsc(u"mánudagur"),tsc(u"þriðjudagur"),tsc(u"miðvikudagur"),tsc(u"fimmtudagur"),tsc(u"föstudagur"),tsc(u"laugardagur")},.abmon={tsc(u"jan"),tsc(u"feb"),tsc(u"mar"),tsc(u"apr"),tsc(u"maí"),tsc(u"jún"),tsc(u"júl"),tsc(u"ágú"),tsc(u"sep"),tsc(u"okt"),tsc(u"nóv"),tsc(u"des")},.mon={tsc(u"janúar"),tsc(u"febrúar"),tsc(u"mars"),tsc(u"apríl"),tsc(u"maí"),tsc(u"júní"),tsc(u"júlí"),tsc(u"ágúst"),tsc(u"september"),tsc(u"október"),tsc(u"nóvember"),tsc(u"desember")},.d_t_fmt=tsc(u"%a %e.%b %Y, %T"),.d_fmt=tsc(u"%a %e.%b %Y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %e.%b %Y, %T %Z"),.am_pm={tsc(u"fh"),tsc(u"eh")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1jJyY]"),.noexpr=tsc(u"^[-0nN]"),.yesstr=tsc(u"já"),.nostr=tsc(u"nei")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"354")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Ísland"),.country_ab2=tsc(u"IS"),.country_ab3=tsc(u"ISL"),.country_num=352,.country_car=tsc(u"IS"),.lang_name=tsc(u"íslenska"),.lang_ab=tsc(u"is"),.lang_term=tsc(u"isl"),.lang_lib=tsc(u"ice")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.name=tsc(U"is_IS"),.encoding=tsc(FAST_IO_LOCALE_UENCODING),.title=tsc(U"Icelandic locale for Iceland"),.source=tsc(U"Stadlarad I'slands\t\t;\t\tfast_io"),.address=tsc(U"Keldnaholt-ITI', IS-112 Reykjavi'k, Iceland\t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io\t\t;\t\thttps://github.com/cppfastio/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Icelandic"),.territory=tsc(U"Iceland"),.revision=tsc(U"1.0"),.date=tsc(U"2000-06-29")},.monetary={.int_curr_symbol=tsc(U"ISK "),.currency_symbol=tsc(U"kr"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=0,.frac_digits=0,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"sun"),tsc(U"mán"),tsc(U"þri"),tsc(U"mið"),tsc(U"fim"),tsc(U"fös"),tsc(U"lau")},.day={tsc(U"sunnudagur"),tsc(U"mánudagur"),tsc(U"þriðjudagur"),tsc(U"miðvikudagur"),tsc(U"fimmtudagur"),tsc(U"föstudagur"),tsc(U"laugardagur")},.abmon={tsc(U"jan"),tsc(U"feb"),tsc(U"mar"),tsc(U"apr"),tsc(U"maí"),tsc(U"jún"),tsc(U"júl"),tsc(U"ágú"),tsc(U"sep"),tsc(U"okt"),tsc(U"nóv"),tsc(U"des")},.mon={tsc(U"janúar"),tsc(U"febrúar"),tsc(U"mars"),tsc(U"apríl"),tsc(U"maí"),tsc(U"júní"),tsc(U"júlí"),tsc(U"ágúst"),tsc(U"september"),tsc(U"október"),tsc(U"nóvember"),tsc(U"desember")},.d_t_fmt=tsc(U"%a %e.%b %Y, %T"),.d_fmt=tsc(U"%a %e.%b %Y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %e.%b %Y, %T %Z"),.am_pm={tsc(U"fh"),tsc(U"eh")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1jJyY]"),.noexpr=tsc(U"^[-0nN]"),.yesstr=tsc(U"já"),.nostr=tsc(U"nei")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"354")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Ísland"),.country_ab2=tsc(U"IS"),.country_ab3=tsc(U"ISL"),.country_num=352,.country_car=tsc(U"IS"),.lang_name=tsc(U"íslenska"),.lang_ab=tsc(U"is"),.lang_term=tsc(U"isl"),.lang_lib=tsc(U"ice")},.measurement={.measurement=1}};


}
}

#include"../main.h"