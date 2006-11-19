/* @(#) $Id$ */

/* Copyright (C) 2003-2006 Daniel B. Cid <dcid@ossec.net>
 * All right reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation.
 */


#ifndef __OS_REGEX_MAPS_H
#define __OS_REGEX_MAPS_H



/* Hostname charmap.
 * Available chars: a-z, A-Z, 0-9, -, _, .
 */
static const unsigned char hostname_map[] =
   {
        '\000', '\000', '\002', '\003', '\004', '\005', '\006', '\007',
        '\010', '\011', '\012', '\013', '\014', '\015', '\016', '\017',
        '\020', '\021', '\022', '\023', '\024', '\025', '\026', '\027',
        '\030', '\031', '\032', '\033', '\034', '\035', '\036', '\037',
        '\040', '\041', '\042', '\043', '\044', '\045', '\046', '\047',
        '\001', '\001', '\052', '\053', '\054', '\001', '\001', '\057',
        '\001', '\001', '\001', '\001', '\001', '\001', '\001', '\001',
        '\001', '\001', '\072', '\073', '\074', '\075', '\076', '\077',
        '\100', '\001', '\001', '\001', '\001', '\001', '\001', '\001',
        '\001', '\001', '\001', '\001', '\001', '\001', '\001', '\001',
        '\001', '\001', '\001', '\001', '\001', '\001', '\001', '\001',
        '\001', '\001', '\001', '\133', '\134', '\135', '\136', '\001',
        '\140', '\001', '\001', '\001', '\001', '\001', '\001', '\001',
        '\001', '\001', '\001', '\001', '\001', '\001', '\001', '\001',
        '\001', '\001', '\001', '\001', '\001', '\001', '\001', '\001',
        '\001', '\001', '\001', '\173', '\174', '\175', '\176', '\177',
        '\200', '\201', '\202', '\203', '\204', '\205', '\206', '\207',
        '\210', '\211', '\212', '\213', '\214', '\215', '\216', '\217',
        '\220', '\221', '\222', '\223', '\224', '\225', '\226', '\227',
        '\230', '\231', '\232', '\233', '\234', '\235', '\236', '\237',
        '\240', '\241', '\242', '\243', '\244', '\245', '\246', '\247',
        '\250', '\251', '\252', '\253', '\254', '\255', '\256', '\257',
        '\260', '\261', '\262', '\263', '\264', '\265', '\266', '\267',
        '\270', '\271', '\272', '\273', '\274', '\275', '\276', '\277',
        '\300', '\301', '\302', '\303', '\304', '\305', '\306', '\307',
        '\310', '\311', '\312', '\313', '\314', '\315', '\316', '\317',
        '\320', '\321', '\322', '\323', '\324', '\325', '\326', '\327',
        '\330', '\331', '\332', '\333', '\334', '\335', '\336', '\337',
        '\340', '\341', '\342', '\343', '\344', '\345', '\346', '\347',
        '\350', '\351', '\352', '\353', '\354', '\355', '\356', '\357',
        '\360', '\361', '\362', '\363', '\364', '\365', '\366', '\367',    
        '\360', '\361', '\362', '\363', '\364', '\365', '\366', '\367',    
    };


#endif


/* EOF */ 
