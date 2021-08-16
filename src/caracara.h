// Copyright (C) 2021 David S. Hardin
//
// License: (An MIT/X11-style license)
//
//   Permission is hereby granted, free of charge, to any person obtaining a
//   copy of this software and associated documentation files (the "Software"),
//   to deal in the Software without restriction, including without limitation
//   the rights to use, copy, modify, merge, publish, distribute, sublicense,
//   and/or sell copies of the Software, and to permit persons to whom the
//   Software is furnished to do so, subject to the following conditions:
//
//   The above copyright notice and this permission notice shall be included in
//   all copies or substantial portions of the Software.
//
//   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//   DEALINGS IN THE SOFTWARE.

#ifndef _CARACARA_H
#define _CARACARA_H

typedef unsigned long uint64; // Just used to facilitate printing

#include <stddef.h>
#include <stdint.h>

#include <array>
#include <tuple>

using namespace std;

#ifdef _SMALL_NUMS

typedef int8_t   i1;  // oversized
typedef uint8_t  u1;
typedef int8_t   i2;
typedef uint8_t  u2;
typedef int8_t   i3;
typedef uint8_t  u3;
typedef int8_t   i4;
typedef uint8_t  u4;
typedef int8_t   i5;
typedef uint8_t  u5;
typedef int8_t   i6;
typedef uint8_t  u6;
typedef int8_t   i7;
typedef uint8_t  u7;
typedef int8_t   i8;
typedef uint8_t  u8;
typedef int16_t  i9;  // oversized
typedef uint16_t u9;
typedef int16_t  i10;
typedef uint16_t u10;
typedef int16_t  i11;
typedef uint16_t u11;
typedef int16_t  i12;
typedef uint16_t u12;
typedef int16_t  i13;
typedef uint16_t u13;
typedef int16_t  i14;
typedef uint16_t u14;
typedef int16_t  i15;
typedef uint16_t u15;
typedef int16_t  i16;
typedef uint16_t u16;
typedef int32_t  i17;  // oversized
typedef uint32_t u17;
typedef int32_t  i18;
typedef uint32_t u18;
typedef int32_t  i19;
typedef uint32_t u19;
typedef int32_t  i20;
typedef uint32_t u20;
typedef int32_t  i21;
typedef uint32_t u21;
typedef int32_t  i22;
typedef uint32_t u22;
typedef int32_t  i23;
typedef uint32_t u23;
typedef int32_t  i24;
typedef uint32_t u24;
typedef int32_t  i25;
typedef uint32_t u25;
typedef int32_t  i26;
typedef uint32_t u26;
typedef int32_t  i27;
typedef uint32_t u27;
typedef int32_t  i28;
typedef uint32_t u28;
typedef int32_t  i29;
typedef uint32_t u29;
typedef int32_t  i30;
typedef uint32_t u30;
typedef int32_t  i31;
typedef uint32_t u31;
typedef int32_t  i32;
typedef uint32_t u32;
typedef uint32_t uint;
typedef int64_t  i33;  // oversized
typedef uint64_t u33;
typedef int64_t  i34;
typedef uint64_t u34;
typedef int64_t  i35;
typedef uint64_t u35;
typedef int64_t  i36;
typedef uint64_t u36;
typedef int64_t  i37;
typedef uint64_t u37;
typedef int64_t  i38;
typedef uint64_t u38;
typedef int64_t  i39;
typedef uint64_t u39;
typedef int64_t  i40;
typedef uint64_t u40;
typedef int64_t  i41;
typedef uint64_t u41;
typedef int64_t  i42;
typedef uint64_t u42;
typedef int64_t  i43;
typedef uint64_t u43;
typedef int64_t  i44;
typedef uint64_t u44;
typedef int64_t  i45;
typedef uint64_t u45;
typedef int64_t  i46;
typedef uint64_t u46;
typedef int64_t  i47;
typedef uint64_t u47;
typedef int64_t  i48;
typedef uint64_t u48;
typedef int64_t  i49;
typedef uint64_t u49;
typedef int64_t  i50;
typedef uint64_t u50;
typedef int64_t  i51;
typedef uint64_t u51;
typedef int64_t  i52;
typedef uint64_t u52;
typedef int64_t  i53;
typedef uint64_t u53;
typedef int64_t  i54;
typedef uint64_t u54;
typedef int64_t  i55;
typedef uint64_t u55;
typedef int64_t  i56;
typedef uint64_t u56;
typedef int64_t  i57;
typedef uint64_t u57;
typedef int64_t  i58;
typedef uint64_t u58;
typedef int64_t  i59;
typedef uint64_t u59;
typedef int64_t  i60;
typedef uint64_t u60;
typedef int64_t  i61;
typedef uint64_t u61;
typedef int64_t  i62;
typedef uint64_t u62;
typedef int64_t  i63;
typedef uint64_t u63;
typedef int64_t  i64;
typedef uint64_t u64;
typedef int32_t isize;
typedef uint32_t usize;

#else

#ifdef _XLNX

#ifndef _AP_SETUP

#include <ap_int.h>

typedef ap_int<1>   i1;
typedef ap_uint<1>  u1;
typedef ap_int<2>   i2;
typedef ap_uint<2>  u2;
typedef ap_int<3>   i3;
typedef ap_uint<3>  u3;
typedef ap_int<4>   i4;
typedef ap_uint<4>  u4;
typedef ap_int<5>   i5;
typedef ap_uint<5>  u5;
typedef ap_int<6>   i6;
typedef ap_uint<6>  u6;
typedef ap_int<7>   i7;
typedef ap_uint<7>  u7;
typedef ap_int<8>   i8;
typedef ap_uint<8>  u8;
typedef ap_int<9>   i9;
typedef ap_uint<9>  u9;
typedef ap_int<10>  i10;
typedef ap_uint<10> u10;
typedef ap_int<11>  i11;
typedef ap_uint<11> u11;
typedef ap_int<12>  i12;
typedef ap_uint<12> u12;
typedef ap_int<13>  i13;
typedef ap_uint<13> u13;
typedef ap_int<14>  i14;
typedef ap_uint<14> u14;
typedef ap_int<15>  i15;
typedef ap_uint<15> u15;
typedef ap_int<16>  i16;
typedef ap_uint<16> u16;
typedef ap_int<17>  i17;
typedef ap_uint<17> u17;
typedef ap_int<18>  i18;
typedef ap_uint<18> u18;
typedef ap_int<19>  i19;
typedef ap_uint<19> u19;
typedef ap_int<20>  i20;
typedef ap_uint<20> u20;
typedef ap_int<21>  i21;
typedef ap_uint<21> u21;
typedef ap_int<22>  i22;
typedef ap_uint<22> u22;
typedef ap_int<23>  i23;
typedef ap_uint<23> u23;
typedef ap_int<24>  i24;
typedef ap_uint<24> u24;
typedef ap_int<25>  i25;
typedef ap_uint<25> u25;
typedef ap_int<26>  i26;
typedef ap_uint<26> u26;
typedef ap_int<27>  i27;
typedef ap_uint<27> u27;
typedef ap_int<28>  i28;
typedef ap_uint<28> u28;
typedef ap_int<29>  i29;
typedef ap_uint<29> u29;
typedef ap_int<30>  i30;
typedef ap_uint<30> u30;
typedef ap_int<31>  i31;
typedef ap_uint<31> u31;
typedef ap_int<32>  i32;
typedef ap_uint<32> u32;
typedef ap_int<33>  i33;
typedef ap_uint<33> u33;
typedef ap_int<34>  i34;
typedef ap_uint<34> u34;
typedef ap_int<35>  i35;
typedef ap_uint<35> u35;
typedef ap_int<36>  i36;
typedef ap_uint<36> u36;
typedef ap_int<37>  i37;
typedef ap_uint<37> u37;
typedef ap_int<38>  i38;
typedef ap_uint<38> u38;
typedef ap_int<39>  i39;
typedef ap_uint<39> u39;
typedef ap_int<40>  i40;
typedef ap_uint<40> u40;
typedef ap_int<41>  i41;
typedef ap_uint<41> u41;
typedef ap_int<42>  i42;
typedef ap_uint<42> u42;
typedef ap_int<43>  i43;
typedef ap_uint<43> u43;
typedef ap_int<44>  i44;
typedef ap_uint<44> u44;
typedef ap_int<45>  i45;
typedef ap_uint<45> u45;
typedef ap_int<46>  i46;
typedef ap_uint<46> u46;
typedef ap_int<47>  i47;
typedef ap_uint<47> u47;
typedef ap_int<48>  i48;
typedef ap_uint<48> u48;
typedef ap_int<49>  i49;
typedef ap_uint<49> u49;
typedef ap_int<50>  i50;
typedef ap_uint<50> u50;
typedef ap_int<51>  i51;
typedef ap_uint<51> u51;
typedef ap_int<52>  i52;
typedef ap_uint<52> u52;
typedef ap_int<53>  i53;
typedef ap_uint<53> u53;
typedef ap_int<54>  i54;
typedef ap_uint<54> u54;
typedef ap_int<55>  i55;
typedef ap_uint<55> u55;
typedef ap_int<56>  i56;
typedef ap_uint<56> u56;
typedef ap_int<57>  i57;
typedef ap_uint<57> u57;
typedef ap_int<58>  i58;
typedef ap_uint<58> u58;
typedef ap_int<59>  i59;
typedef ap_uint<59> u59;
typedef ap_int<60>  i60;
typedef ap_uint<60> u60;
typedef ap_int<61>  i61;
typedef ap_uint<61> u61;
typedef ap_int<62>  i62;
typedef ap_uint<62> u62;
typedef ap_int<63>  i63;
typedef ap_uint<63> u63;
typedef ap_int<64>  i64;
typedef ap_uint<64> u64;
typedef ap_int<32> isize;
typedef ap_uint<32> usize;

#define slice(var, width, least_bit) var.range(width+least_bit-1, least_bit)

#define _AP_SETUP

#else
#endif  //_AP_SETUP

#else  // not _XLNX

#ifndef _RAC_SETUP

#include <ac_int.h>
#include <rac.h>

// RAC begin

typedef ac_int<1, true>   i1;
typedef ac_int<1, false>  u1;
typedef ac_int<2, true>   i2;
typedef ac_int<2, false>  u2;
typedef ac_int<3, true>   i3;
typedef ac_int<3, false>  u3;
typedef ac_int<4, true>   i4;
typedef ac_int<4, false>  u4;
typedef ac_int<5, true>   i5;
typedef ac_int<5, false>  u5;
typedef ac_int<6, true>   i6;
typedef ac_int<6, false>  u6;
typedef ac_int<7, true>   i7;
typedef ac_int<7, false>  u7;
typedef ac_int<8, true>   i8;
typedef ac_int<8, false>  u8;
typedef ac_int<9, true>   i9;
typedef ac_int<9, false>  u9;
typedef ac_int<10, true>   i10;
typedef ac_int<10, false>  u10;
typedef ac_int<11, true>   i11;
typedef ac_int<11, false>  u11;
typedef ac_int<12, true>   i12;
typedef ac_int<12, false>  u12;
typedef ac_int<13, true>   i13;
typedef ac_int<13, false>  u13;
typedef ac_int<14, true>   i14;
typedef ac_int<14, false>  u14;
typedef ac_int<15, true>   i15;
typedef ac_int<15, false>  u15;
typedef ac_int<16, true>   i16;
typedef ac_int<16, false>  u16;
typedef ac_int<17, true>   i17;
typedef ac_int<17, false>  u17;
typedef ac_int<18, true>   i18;
typedef ac_int<18, false>  u18;
typedef ac_int<19, true>   i19;
typedef ac_int<19, false>  u19;
typedef ac_int<20, true>   i20;
typedef ac_int<20, false>  u20;
typedef ac_int<21, true>   i21;
typedef ac_int<21, false>  u21;
typedef ac_int<22, true>   i22;
typedef ac_int<22, false>  u22;
typedef ac_int<23, true>   i23;
typedef ac_int<23, false>  u23;
typedef ac_int<24, true>   i24;
typedef ac_int<24, false>  u24;
typedef ac_int<25, true>   i25;
typedef ac_int<25, false>  u25;
typedef ac_int<26, true>   i26;
typedef ac_int<26, false>  u26;
typedef ac_int<27, true>   i27;
typedef ac_int<27, false>  u27;
typedef ac_int<28, true>   i28;
typedef ac_int<28, false>  u28;
typedef ac_int<29, true>   i29;
typedef ac_int<29, false>  u29;
typedef ac_int<30, true>   i30;
typedef ac_int<30, false>  u30;
typedef ac_int<31, true>   i31;
typedef ac_int<31, false>  u31;
typedef ac_int<32, true>   i32;
typedef ac_int<32, false>  u32;
typedef ac_int<33, true>   i33;
typedef ac_int<33, false>  u33;
typedef ac_int<34, true>   i34;
typedef ac_int<34, false>  u34;
typedef ac_int<35, true>   i35;
typedef ac_int<35, false>  u35;
typedef ac_int<36, true>   i36;
typedef ac_int<36, false>  u36;
typedef ac_int<37, true>   i37;
typedef ac_int<37, false>  u37;
typedef ac_int<38, true>   i38;
typedef ac_int<38, false>  u38;
typedef ac_int<39, true>   i39;
typedef ac_int<39, false>  u39;
typedef ac_int<40, true>   i40;
typedef ac_int<40, false>  u40;
typedef ac_int<41, true>   i41;
typedef ac_int<41, false>  u41;
typedef ac_int<42, true>   i42;
typedef ac_int<42, false>  u42;
typedef ac_int<43, true>   i43;
typedef ac_int<43, false>  u43;
typedef ac_int<44, true>   i44;
typedef ac_int<44, false>  u44;
typedef ac_int<45, true>   i45;
typedef ac_int<45, false>  u45;
typedef ac_int<46, true>   i46;
typedef ac_int<46, false>  u46;
typedef ac_int<47, true>   i47;
typedef ac_int<47, false>  u47;
typedef ac_int<48, true>   i48;
typedef ac_int<48, false>  u48;
typedef ac_int<49, true>   i49;
typedef ac_int<49, false>  u49;
typedef ac_int<50, true>   i50;
typedef ac_int<50, false>  u50;
typedef ac_int<51, true>   i51;
typedef ac_int<51, false>  u51;
typedef ac_int<52, true>   i52;
typedef ac_int<52, false>  u52;
typedef ac_int<53, true>   i53;
typedef ac_int<53, false>  u53;
typedef ac_int<54, true>   i54;
typedef ac_int<54, false>  u54;
typedef ac_int<55, true>   i55;
typedef ac_int<55, false>  u55;
typedef ac_int<56, true>   i56;
typedef ac_int<56, false>  u56;
typedef ac_int<57, true>   i57;
typedef ac_int<57, false>  u57;
typedef ac_int<58, true>   i58;
typedef ac_int<58, false>  u58;
typedef ac_int<59, true>   i59;
typedef ac_int<59, false>  u59;
typedef ac_int<60, true>   i60;
typedef ac_int<60, false>  u60;
typedef ac_int<61, true>   i61;
typedef ac_int<61, false>  u61;
typedef ac_int<62, true>   i62;
typedef ac_int<62, false>  u62;
typedef ac_int<63, true>   i63;
typedef ac_int<63, false>  u63;
typedef ac_int<64, true>   i64;
typedef ac_int<64, false>  u64;
typedef ac_int<32, true>  isize;
typedef ac_int<32, false>  usize;

#define slice(var, width, least_bit) var.slc<width>(least_bit)

#define _RAC_SETUP

#else
#endif  // _RAC_SETUP

#endif  // _XLNX

#endif  // _SMALL_NUMS

#ifndef _RUSTY

#define prologue_
#define t_(ty, v) ty v
#define tm_(ty, v) ty v
#define st_(ty, v) ty v;
#define as_(ty, v) (ty)v
#define arr_(ty, sz) array<ty, sz>
#define tarr_(ty, sz, v) arr_(ty, sz) v
#define starr_(ty, sz, v) tarr_(ty, sz, v);
#define ao_ {
#define ac_ }
#define arr_init_(v, sz) ao_ v ac_
#define fn_(ty, f) ty f
#define let_(ty, v) ty v
#define letm_(ty, v) ty v
#define bitnot_(v) ~(v)
#define inc_(x) x++
#define dec_(x) x--
#define min_(a, b) ((a) < (b) ? (a) : (b))
#define max_(a, b) ((a) > (b) ? (a) : (b))
#define for_(x, y, z) for(x; y; z)
#define fend_
#define send_ ;
#define rblank_(x) x
#define _PRAGMA_COPY

#ifdef _PASS_REF
#define fnr_(ty, f) void f
#define val_(v)
#define r_(x) x
#define rm_(x) x
#define tr_(ty, x) ty &x
#define trm_(ty, x) ty &x
#define letr_(ty, v) ty v
#define letrm_(ty, v) ty v
#define arr_initr_(v, sz) ao_ v ac_
#define arr_initrm_(v, sz) ao_ v ac_
#define fn2_(ty0, ty1, f) void f
#define fn2_s0_(ty0, ty1, f) ty0 f
#define fn2_s0s1_(ty0, ty1, f) tuple<ty0, ty1> f
#define fn3_s0s1_(ty0, ty1, ty2, f) tuple<ty0, ty1> f
#define fn3_s0s1s2_(ty0, ty1, ty2, f) tuple<ty0, ty1, ty2> f
#define fn3_s0s1r2_(ty0, ty1, ty2, f) tuple<ty0, ty1> f
#define val2_(ty0, ty1, x, y)
#define val2_s0_(ty0, ty1, x, y) x
#define val2_s0s1_(ty0, ty1, x, y) tuple<ty0, ty1>(x, y)
#define val3_s0s1_(ty0, ty1, ty2, x, y, z) tuple<ty0, ty1>(x, y)
#define val3_s0s1s2_(ty0, ty1, ty2, x, y, z) tuple<ty0, ty1, ty2>(x, y, z)
#define val3_s0s1r2_(ty0, ty1, ty2, x, y, z) tuple<ty0, ty1>(x, y)
#define asn_(v)
#define asn2_(x, y) 
#define asn2_s0_(x, y) x = 
#define asn2_s0s1_(x, y) tie(x, y) = 
#define asn3_(x, y, z)  
#define asn3_s0_(x, y, z) x = 
#define asn3_s0s1_(x, y, z) tie(x, y) = 
#define asn3_s0s1s2_(x, y, z) tie(x, y, z) = 
#else
#define fnr_(ty, f) ty f
#define val_(v) v
#define r_(x) x
#define rm_(x) x
#define tr_(ty, x) ty x
#define trm_(ty, x) ty x
#define letr_(ty, v) ty v
#define letrm_(ty, v) ty v
#define arr_initr_(v, sz) ao_ v ac_
#define arr_initrm_(v, sz) ao_ v ac_
#define fn2_(ty0, ty1, f) tuple<ty0, ty1> f
#define fn2_s0_(ty0, ty1, f) tuple<ty0, ty1> f
#define fn2_s0s1_(ty0, ty1, f) tuple<ty0, ty1> f
#define fn3_s0s1_(ty0, ty1, ty2, f) tuple<ty0, ty1> f
#define fn3_s0s1s2_(ty0, ty1, ty2, f) tuple<ty0, ty1, ty2> f
#define fn3_s0s1r2_(ty0, ty1, ty2, f) tuple<ty0, ty1, ty2> f
#define val2_(ty0, ty1, x, y) tuple<ty0, ty1>(x, y)
#define val2_s0_(ty0, ty1, x, y) tuple<ty0, ty1>(x, y)
#define val2_s0s1_(ty0, ty1, x, y) tuple<ty0, ty1>(x, y)
#define val3_s0s1_(ty0, ty1, ty2, x, y, z) tuple<ty0, ty1>(x, y)
#define val3_s0s1s2_(ty0, ty1, ty2, x, y, z) tuple<ty0, ty1, ty2>(x, y, z)
#define val3_s0s1r2_(ty0, ty1, ty2, x, y, z) tuple<ty0, ty1, ty2>(x, y, z)
#define asn_(v) v =
#define asn2_(x, y) tie(x, y) = 
#define asn2_s0_(x, y) tie(x, y) = 
#define asn2_s0s1_(x, y) tie(x, y) = 
#define asn3_(x, y, z) tie(x, y, z) = 
#define asn3_s0_(x, y, z) tie(x, y, z) = 
#define asn3_s0s1_(x, y, z) tie(x, y, z) = 
#define asn3_s0s1s2_(x, y, z) tie(x, y, z) = 
#endif

#else // _RUSTY

#define prologue_ #[macro_use] extern crate cfor;
#define t_(ty, v) v: ty
#define tm_(ty, v) mut v: ty
#define st_(ty, v) v: ty,
#define as_(ty, v) (v as ty)
#define arr_(ty, sz) [ty; sz]
#define tarr_(ty, sz, v) v: arr_(ty, sz)
#define starr_(ty, sz, v) tarr_(ty, sz, v),
#define ao_ [
#define ac_ ]
#define arr_init_(v, sz) ao_ v; sz ac_
#define let_(ty, v) let v: ty
#define letm_(ty, v) let mut v: ty
#define bitnot_(v) !(v)
#define inc_(x) x+=1
#define dec_(x) x-=1
#define min_(a, b) if ((a) < (b)) {(a)} else {(b)}
#define max_(a, b) if ((a) > (b)) {(a)} else {(b)}
#define for_(x, y, z) cfor!{x; y; z;
#define fend_ }
#define fn_(ty, f) fn f -> ty
#define send_
#define rblank_(x) 
#define _PRAGMA_COPY #[derive(Copy, Clone)]

#ifdef _PASS_REF
#define fnr_(ty, f) fn f
#define val_(v)
#define r_(x) & x
#define rm_(x) &mut x
#define tr_(ty, x) x: & ty
#define trm_(ty, x) x: &mut ty
#define letr_(ty, v) let v: & ty
#define letrm_(ty, v) let mut v: &mut ty
#define arr_initr_(v, sz) & ao_ v; sz ac_
#define arr_initrm_(v, sz) &mut ao_ v; sz ac_
#define fn2_(ty0, ty1, f) fn f
#define fn2_s0_(ty0, ty1, f) fn f -> ty0
#define fn2_s0s1_(ty0, ty1, f) fn f -> (ty0, ty1)
#define fn3_s0s1_(ty0, ty1, ty2, f) fn f -> (ty0, ty1)
#define fn3_s0s1s2_(ty0, ty1, ty2, f) fn f -> (ty0, ty1, ty2)
#define fn3_s0s1r2_(ty0, ty1, ty2, f) fn f -> (ty0, ty1)
#define val2_(ty0, ty1, x, y)
#define val2_s0_(ty0, ty1, x, y) x: ty0
//#define val2_s0s1_(ty0, ty1, x, y) (x: ty0, y: ty1)
//#define val3_s0s1_(ty0, ty1, ty2, x, y, z) (x: ty0, y: ty1)
//#define val3_s0s1s2_(ty0, ty1, ty2, x, y, z) (x: ty0, y: ty1, z: ty2)
//#define val3_s0s1r2_(ty0, ty1, ty2, x, y, z) (x: ty0, y: ty1)
#define val2_s0s1_(ty0, ty1, x, y) (x, y)
#define val3_s0s1_(ty0, ty1, ty2, x, y, z) (x, y)
#define val3_s0s1s2_(ty0, ty1, ty2, x, y, z) (x, y, z)
#define val3_s0s1r2_(ty0, ty1, ty2, x, y, z) (x, y)
#define asn_(v)
// Note: the "let"s are to avoid a "destructuring assignment" error 
#define asn2_(x, y) 
#define asn2_s0_(x, y) x = 
#define asn2_s0s1_(x, y) let (x, y) = 
#define asn3_(x, y, z)  
#define asn3_s0_(x, y, z) x = 
#define asn3_s0s1_(x, y, z) let (x, y) = 
#define asn3_s0s1s2_(x, y, z) (x, y, z) = 
#else
#define fnr_(ty, f) fn f -> ty
#define val_(v) v
#define r_(x) x
#define rm_(x) mut x
#define tr_(ty, x) x: ty
#define trm_(ty, x) mut x: ty
#define letr_(ty, v) let v: ty
#define letrm_(ty, v) let mut v: ty
#define arr_initr_(v, sz) ao_ v; sz ac_
#define arr_initrm_(v, sz) ao_ v; sz ac_
#define fn2_(ty0, ty1, f) fn f -> (ty0, ty1)
#define fn2_s0_(ty0, ty1, f) fn f -> (ty0, ty1)
#define fn2_s0s1_(ty0, ty1, f) fn f -> (ty0, ty1)
#define fn3_s0s1_(ty0, ty1, ty2, f) fn f -> (ty0, ty1)
#define fn3_s0s1s2_(ty0, ty1, ty2, f) fn f -> (ty0, ty1, ty2)
#define fn3_s0s1r2_(ty0, ty1, ty2, f) fn f -> (ty0, ty1, ty2)
#define val2_(ty0, ty1, x, y) (x: ty0, y: ty1)
#define val2_s0_(ty0, ty1, x, y) (x: ty0, y: t1)
//#define val2_s0s1_(ty0, ty1, x, y) (x: ty0, y: ty1)
//#define val3_s0s1_(ty0, ty1, ty2, x, y, z) (x: ty0, y: ty1)
//#define val3_s0s1s2_(ty0, ty1, ty2, x, y, z) (x: ty0, y: ty1, z: ty2)
//#define val3_s0s1r2_(ty0, ty1, ty2, x, y, z) (x: ty0, y: ty1, z: ty2)
#define val2_s0s1_(ty0, ty1, x, y) (x, y)
#define val3_s0s1_(ty0, ty1, ty2, x, y, z) (x, y)
#define val3_s0s1s2_(ty0, ty1, ty2, x, y, z) (x, y, z)
#define val3_s0s1r2_(ty0, ty1, ty2, x, y, z) (x, y, z)
#define asn_(v) v =
// Note: the "let"s are to avoid a "destructuring assignment" error 
#define asn2_(x, y) let (x, y) = 
#define asn2_s0_(x, y) let (x, y) = 
#define asn2_s0s1_(x, y) (x, y) = 
// Note: the "let"s are to avoid a "destructuring assignment" error 
#define asn3_(x, y, z) let (x, y, z) = 
#define asn3_s0_(x, y, z) let (x, y, z) = 
#define asn3_s0s1_(x, y, z) let (x, y, z) = 
#define asn3_s0s1s2_(x, y, z) (x, y, z) = 

#endif

#endif // _RUSTY

#endif // _CARACARA_H
