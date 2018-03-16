// Copyright (c) 2018 Md Tanvir Alam
//Mehvozsoft


#ifndef WALLET_H
#define WALLET_H


#include <amount.h>
#include <tinyurl.h>
#include <ui_interface.h>
#include <policy_fees.h>


#include <algorithm>
#include <atomic>
#include <map>
#include <set>


typedef CWALLET* CWALLETREF;

static const unsigned int key_size = 1000;

enum WalletFeature {
	FeatureBase = 10500
	FeatureHD = 300500
}





