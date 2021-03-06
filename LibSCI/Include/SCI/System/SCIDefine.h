/**
 * @file SCIDefine.h.h
 * @brief 共通定義
 */
#pragma once

/// <summary>
/// 名前空間定義
/// </summary>
#define NS_DEF_SCI sci
#define NS_DEF_SCI_SYS sys
#define NS_DEF_SCI_UT ut

#define NS_SCI NS_DEF_SCI
#define NS_SCI_SYS NS_DEF_SCI::NS_DEF_SCI_SYS
#define NS_SCI_UT NS_DEF_SCI::NS_DEF_SCI_UT

#define NS_SCI_BEGIN namespace NS_DEF_SCI {
#define NS_SCI_END }
#define NS_SCI_SYS_BEGIN NS_SCI_BEGIN namespace NS_DEF_SCI_SYS {
#define NS_SCI_SYS_END } NS_SCI_END
#define NS_SCI_UT_BEGIN NS_SCI_BEGIN namespace NS_DEF_SCI_UT {
#define NS_SCI_UT_END } NS_SCI_END
