// SPDX-License-Identifier: Apache-2.0
// Copyright 2017 Loopring Technology Limited.
// Modified by DeGate DAO, 2022
#ifndef _DATA_H_
#define _DATA_H_

#include "Constants.h"

//#include "../ThirdParty/json.hpp"
#include "ethsnarks.hpp"
#include "jubjub/eddsa.hpp"
#include "jubjub/point.hpp"

using json = nlohmann::json;

namespace Loopring
{
static auto dummySpotTrade = R"({
    "fFillS_A": 0,
    "fFillS_B": 0,
    "orderA": {
        "accountID": 0,
        "amountB": "79228162514264337593543950335",
        "amountS": "79228162514264337593543950335",
        "deltaFilledS": "0",
        "deltaFilledB": "0",
        "fillAmountBorS": true,
        "feeBips": 0,
        "tradingFee": "0",
        "feeTokenID": 0,
        "fee": "0",
        "maxFee": "0",
        "storageID": "0",
        "tokenS": 0,
        "tokenB": 1,
        "validUntil": 4294967295,
        "taker": "0",
        "type": 0,
        "level": 0,
        "gridOffset": "0",
        "orderOffset": "0",
        "maxLevel": 0,
        "useAppKey": 0,
        "startOrder": {
            "storageID": "0",
            "accountID": 0,
            "amountS": "0",
            "amountB": "0",
            "tokenS": 0,
            "tokenB": 0,
            "validUntil": 4294967295,
            "fillAmountBorS": true,
            "taker": "0",
            "feeBips": 0,
            "tradingFee": "0",
            "feeTokenID": 0,
            "maxFee": "0",
            "type": 0,
            "gridOffset": "0",
            "orderOffset": "0",
            "maxLevel": 0,
            "useAppKey": 0
        },
        "isNoop": 1
    },
    "orderB": {
        "accountID": 0,
        "amountB": "79228162514264337593543950335",
        "amountS": "79228162514264337593543950335",
        "deltaFilledS": "0",
        "deltaFilledB": "0",
        "fillAmountBorS": true,
        "feeBips": 0,
        "tradingFee": "0",
        "feeTokenID": 0,
        "fee": "0",
        "maxFee": "0",
        "storageID": "0",
        "tokenS": 1,
        "tokenB": 0,
        "validUntil": 4294967295,
        "taker": "0",
        "type": 0,
        "level": 0,
        "gridOffset": "0",
        "orderOffset": "0",
        "maxLevel": 0,
        "useAppKey": 0,
        "startOrder": {
            "storageID": "0",
            "accountID": 0,
            "amountS": "0",
            "amountB": "0",
            "tokenS": 0,
            "tokenB": 0,
            "validUntil": 4294967295,
            "fillAmountBorS": true,
            "taker": "0",
            "feeBips": 0,
            "tradingFee": "0",
            "feeTokenID": 0,
            "maxFee": "0",
            "type": 0,
            "gridOffset": "0",
            "orderOffset": "0",
            "maxLevel": 0,
            "useAppKey": 0
        },
        "isNoop": 1
    }
})"_json;

static auto dummyBatchSpotTradeOrder = R"({
    "storageID": "0",
    "accountID": 0,
    "amountS": "0",
    "amountB": "0",
    "deltaFilledS": "0",
    "deltaFilledB": "0",
    "tokenS": 0,
    "tokenB": 0,
    "validUntil": 4294967295,
    "fillAmountBorS": true,
    "taker": "0",
    "feeBips": 0,
    "tradingFee": "0",
    "feeTokenID": 0,
    "fee": "0",
    "maxFee": "0",
    "type": 0,
    "level": 0,
    "useAppKey": 0,
    "startOrder": {
        "storageID": "0",
        "accountID": 0,
        "amountS": "0",
        "amountB": "0",
        "tokenS": 0,
        "tokenB": 0,
        "validUntil": 4294967295,
        "fillAmountBorS": true,
        "taker": "0",
        "feeBips": 0,
        "tradingFee": "0",
        "feeTokenID": 0,
        "maxFee": "0",
        "type": 0,
        "gridOffset": "0",
        "orderOffset": "0",
        "maxLevel": 0,
        "useAppKey": 0
    },
    "gridOffset": "0",
    "orderOffset": "0",
    "maxLevel": 0,
    "isNoop": 1
})"_json;

static auto dummyBatchSpotTradeUser = R"({
    "accountID": 0,
    "isNoop": 1,
    "orders":[
        {
            "storageID": "0",
            "accountID": 0,
            "amountS": "0",
            "amountB": "0",
            "deltaFilledS": "0",
            "deltaFilledB": "0",
            "tokenS": 0,
            "tokenB": 0,
            "validUntil": 4294967295,
            "fillAmountBorS": true,
            "taker": "0",
            "feeBips": 0,
            "tradingFee": "0",
            "feeTokenID": 0,
            "fee": "0",
            "maxFee": "0",
            "type": 0,
            "level": 0,
            "useAppKey": 0,
            "startOrder": {
                "storageID": "0",
                "accountID": 0,
                "amountS": "0",
                "amountB": "0",
                "tokenS": 0,
                "tokenB": 0,
                "validUntil": 4294967295,
                "fillAmountBorS": true,
                "taker": "0",
                "feeBips": 0,
                "tradingFee": "0",
                "feeTokenID": 0,
                "maxFee": "0",
                "type": 0,
                "gridOffset": "0",
                "orderOffset": "0",
                "maxLevel": 0,
                "useAppKey": 0
            },
            "gridOffset": "0",
            "orderOffset": "0",
            "maxLevel": 0,
            "isNoop": 1
        }
    ]
})"_json;

static auto dummyBatchSpotTrade = R"({
    "users": [
        {
            "accountID": 0,
            "isNoop": 1,
            "orders":[
                {
                    "storageID": "0",
                    "accountID": 0,
                    "amountS": "0",
                    "amountB": "0",
                    "deltaFilledS": "0",
                    "deltaFilledB": "0",
                    "tokenS": 0,
                    "tokenB": 0,
                    "validUntil": 4294967295,
                    "fillAmountBorS": true,
                    "taker": "0",
                    "feeBips": 0,
                    "tradingFee": "0",
                    "feeTokenID": 0,
                    "fee": "0",
                    "maxFee": "0",
                    "type": 0,
                    "level": 0,
                    "useAppKey": 0,
                    "startOrder": {
                        "storageID": "0",
                        "accountID": 0,
                        "amountS": "0",
                        "amountB": "0",
                        "tokenS": 0,
                        "tokenB": 0,
                        "validUntil": 4294967295,
                        "fillAmountBorS": true,
                        "taker": "0",
                        "feeBips": 0,
                        "tradingFee": "0",
                        "feeTokenID": 0,
                        "maxFee": "0",
                        "type": 0,
                        "gridOffset": "0",
                        "orderOffset": "0",
                        "maxLevel": 0,
                        "useAppKey": 0
                    },
                    "gridOffset": "0",
                    "orderOffset": "0",
                    "maxLevel": 0,
                    "isNoop": 1
                },{
                    "storageID": "0",
                    "accountID": 0,
                    "amountS": "0",
                    "amountB": "0",
                    "deltaFilledS": "0",
                    "deltaFilledB": "0",
                    "tokenS": 0,
                    "tokenB": 0,
                    "validUntil": 4294967295,
                    "fillAmountBorS": true,
                    "taker": "0",
                    "feeBips": 0,
                    "tradingFee": "0",
                    "feeTokenID": 0,
                    "fee": "0",
                    "maxFee": "0",
                    "type": 0,
                    "level": 0,
                    "useAppKey": 0,
                    "startOrder": {
                        "storageID": "0",
                        "accountID": 0,
                        "amountS": "0",
                        "amountB": "0",
                        "tokenS": 0,
                        "tokenB": 0,
                        "validUntil": 4294967295,
                        "fillAmountBorS": true,
                        "taker": "0",
                        "feeBips": 0,
                        "tradingFee": "0",
                        "feeTokenID": 0,
                        "maxFee": "0",
                        "type": 0,
                        "gridOffset": "0",
                        "orderOffset": "0",
                        "maxLevel": 0,
                        "useAppKey": 0
                    },
                    "gridOffset": "0",
                    "orderOffset": "0",
                    "maxLevel": 0,
                    "isNoop": 1
                },{
                    "storageID": "0",
                    "accountID": 0,
                    "amountS": "0",
                    "amountB": "0",
                    "deltaFilledS": "0",
                    "deltaFilledB": "0",
                    "tokenS": 0,
                    "tokenB": 0,
                    "validUntil": 4294967295,
                    "fillAmountBorS": true,
                    "taker": "0",
                    "feeBips": 0,
                    "tradingFee": "0",
                    "feeTokenID": 0,
                    "fee": "0",
                    "maxFee": "0",
                    "type": 0,
                    "level": 0,
                    "useAppKey": 0,
                    "startOrder": {
                        "storageID": "0",
                        "accountID": 0,
                        "amountS": "0",
                        "amountB": "0",
                        "tokenS": 0,
                        "tokenB": 0,
                        "validUntil": 4294967295,
                        "fillAmountBorS": true,
                        "taker": "0",
                        "feeBips": 0,
                        "tradingFee": "0",
                        "feeTokenID": 0,
                        "maxFee": "0",
                        "type": 0,
                        "gridOffset": "0",
                        "orderOffset": "0",
                        "maxLevel": 0,
                        "useAppKey": 0
                    },
                    "gridOffset": "0",
                    "orderOffset": "0",
                    "maxLevel": 0,
                    "isNoop": 1
                },{
                    "storageID": "0",
                    "accountID": 0,
                    "amountS": "0",
                    "amountB": "0",
                    "deltaFilledS": "0",
                    "deltaFilledB": "0",
                    "tokenS": 0,
                    "tokenB": 0,
                    "validUntil": 4294967295,
                    "fillAmountBorS": true,
                    "taker": "0",
                    "feeBips": 0,
                    "tradingFee": "0",
                    "feeTokenID": 0,
                    "fee": "0",
                    "maxFee": "0",
                    "type": 0,
                    "level": 0,
                    "useAppKey": 0,
                    "startOrder": {
                        "storageID": "0",
                        "accountID": 0,
                        "amountS": "0",
                        "amountB": "0",
                        "tokenS": 0,
                        "tokenB": 0,
                        "validUntil": 4294967295,
                        "fillAmountBorS": true,
                        "taker": "0",
                        "feeBips": 0,
                        "tradingFee": "0",
                        "feeTokenID": 0,
                        "maxFee": "0",
                        "type": 0,
                        "gridOffset": "0",
                        "orderOffset": "0",
                        "maxLevel": 0,
                        "useAppKey": 0
                    },
                    "gridOffset": "0",
                    "orderOffset": "0",
                    "maxLevel": 0,
                    "isNoop": 1
                }
            ]
        },{
            "accountID": 0,
            "isNoop": 1,
            "orders":[
                {
                    "storageID": "0",
                    "accountID": 0,
                    "amountS": "0",
                    "amountB": "0",
                    "deltaFilledS": "0",
                    "deltaFilledB": "0",
                    "tokenS": 0,
                    "tokenB": 0,
                    "validUntil": 4294967295,
                    "fillAmountBorS": true,
                    "taker": "0",
                    "feeBips": 0,
                    "tradingFee": "0",
                    "feeTokenID": 0,
                    "fee": "0",
                    "maxFee": "0",
                    "type": 0,
                    "level": 0,
                    "useAppKey": 0,
                    "startOrder": {
                        "storageID": "0",
                        "accountID": 0,
                        "amountS": "0",
                        "amountB": "0",
                        "tokenS": 0,
                        "tokenB": 0,
                        "validUntil": 4294967295,
                        "fillAmountBorS": true,
                        "taker": "0",
                        "feeBips": 0,
                        "tradingFee": "0",
                        "feeTokenID": 0,
                        "maxFee": "0",
                        "type": 0,
                        "gridOffset": "0",
                        "orderOffset": "0",
                        "maxLevel": 0,
                        "useAppKey": 0
                    },
                    "gridOffset": "0",
                    "orderOffset": "0",
                    "maxLevel": 0,
                    "isNoop": 1
                },{
                    "storageID": "0",
                    "accountID": 0,
                    "amountS": "0",
                    "amountB": "0",
                    "deltaFilledS": "0",
                    "deltaFilledB": "0",
                    "tokenS": 0,
                    "tokenB": 0,
                    "validUntil": 4294967295,
                    "fillAmountBorS": true,
                    "taker": "0",
                    "feeBips": 0,
                    "tradingFee": "0",
                    "feeTokenID": 0,
                    "fee": "0",
                    "maxFee": "0",
                    "type": 0,
                    "level": 0,
                    "useAppKey": 0,
                    "startOrder": {
                        "storageID": "0",
                        "accountID": 0,
                        "amountS": "0",
                        "amountB": "0",
                        "tokenS": 0,
                        "tokenB": 0,
                        "validUntil": 4294967295,
                        "fillAmountBorS": true,
                        "taker": "0",
                        "feeBips": 0,
                        "tradingFee": "0",
                        "feeTokenID": 0,
                        "maxFee": "0",
                        "type": 0,
                        "gridOffset": "0",
                        "orderOffset": "0",
                        "maxLevel": 0,
                        "useAppKey": 0
                    },
                    "gridOffset": "0",
                    "orderOffset": "0",
                    "maxLevel": 0,
                    "isNoop": 1
                }
            ]
        },{
            "accountID": 0,
            "isNoop": 1,
            "orders":[
                {
                    "storageID": "0",
                    "accountID": 0,
                    "amountS": "0",
                    "amountB": "0",
                    "deltaFilledS": "0",
                    "deltaFilledB": "0",
                    "tokenS": 0,
                    "tokenB": 0,
                    "validUntil": 4294967295,
                    "fillAmountBorS": true,
                    "taker": "0",
                    "feeBips": 0,
                    "tradingFee": "0",
                    "feeTokenID": 0,
                    "fee": "0",
                    "maxFee": "0",
                    "type": 0,
                    "level": 0,
                    "useAppKey": 0,
                    "startOrder": {
                        "storageID": "0",
                        "accountID": 0,
                        "amountS": "0",
                        "amountB": "0",
                        "tokenS": 0,
                        "tokenB": 0,
                        "validUntil": 4294967295,
                        "fillAmountBorS": true,
                        "taker": "0",
                        "feeBips": 0,
                        "tradingFee": "0",
                        "feeTokenID": 0,
                        "maxFee": "0",
                        "type": 0,
                        "gridOffset": "0",
                        "orderOffset": "0",
                        "maxLevel": 0,
                        "useAppKey": 0
                    },
                    "gridOffset": "0",
                    "orderOffset": "0",
                    "maxLevel": 0,
                    "isNoop": 1
                }
            ]
        },{
            "accountID": 0,
            "isNoop": 1,
            "orders":[
                {
                    "storageID": "0",
                    "accountID": 0,
                    "amountS": "0",
                    "amountB": "0",
                    "deltaFilledS": "0",
                    "deltaFilledB": "0",
                    "tokenS": 0,
                    "tokenB": 0,
                    "validUntil": 4294967295,
                    "fillAmountBorS": true,
                    "taker": "0",
                    "feeBips": 0,
                    "tradingFee": "0",
                    "feeTokenID": 0,
                    "fee": "0",
                    "maxFee": "0",
                    "type": 0,
                    "level": 0,
                    "useAppKey": 0,
                    "startOrder": {
                        "storageID": "0",
                        "accountID": 0,
                        "amountS": "0",
                        "amountB": "0",
                        "tokenS": 0,
                        "tokenB": 0,
                        "validUntil": 4294967295,
                        "fillAmountBorS": true,
                        "taker": "0",
                        "feeBips": 0,
                        "tradingFee": "0",
                        "feeTokenID": 0,
                        "maxFee": "0",
                        "type": 0,
                        "gridOffset": "0",
                        "orderOffset": "0",
                        "maxLevel": 0,
                        "useAppKey": 0
                    },
                    "gridOffset": "0",
                    "orderOffset": "0",
                    "maxLevel": 0,
                    "isNoop": 1
                }
            ]
        },{
            "accountID": 0,
            "isNoop": 1,
            "orders":[
                {
                    "storageID": "0",
                    "accountID": 0,
                    "amountS": "0",
                    "amountB": "0",
                    "deltaFilledS": "0",
                    "deltaFilledB": "0",
                    "tokenS": 0,
                    "tokenB": 0,
                    "validUntil": 4294967295,
                    "fillAmountBorS": true,
                    "taker": "0",
                    "feeBips": 0,
                    "tradingFee": "0",
                    "feeTokenID": 0,
                    "fee": "0",
                    "maxFee": "0",
                    "type": 0,
                    "level": 0,
                    "useAppKey": 0,
                    "startOrder": {
                        "storageID": "0",
                        "accountID": 0,
                        "amountS": "0",
                        "amountB": "0",
                        "tokenS": 0,
                        "tokenB": 0,
                        "validUntil": 4294967295,
                        "fillAmountBorS": true,
                        "taker": "0",
                        "feeBips": 0,
                        "tradingFee": "0",
                        "feeTokenID": 0,
                        "maxFee": "0",
                        "type": 0,
                        "gridOffset": "0",
                        "orderOffset": "0",
                        "maxLevel": 0,
                        "useAppKey": 0
                    },
                    "gridOffset": "0",
                    "orderOffset": "0",
                    "maxLevel": 0,
                    "isNoop": 1
                }
            ]
        },{
            "accountID": 0,
            "isNoop": 1,
            "orders":[
                {
                    "storageID": "0",
                    "accountID": 0,
                    "amountS": "0",
                    "amountB": "0",
                    "deltaFilledS": "0",
                    "deltaFilledB": "0",
                    "tokenS": 0,
                    "tokenB": 0,
                    "validUntil": 4294967295,
                    "fillAmountBorS": true,
                    "taker": "0",
                    "feeBips": 0,
                    "tradingFee": "0",
                    "feeTokenID": 0,
                    "fee": "0",
                    "maxFee": "0",
                    "type": 0,
                    "level": 0,
                    "useAppKey": 0,
                    "startOrder": {
                        "storageID": "0",
                        "accountID": 0,
                        "amountS": "0",
                        "amountB": "0",
                        "tokenS": 0,
                        "tokenB": 0,
                        "validUntil": 4294967295,
                        "fillAmountBorS": true,
                        "taker": "0",
                        "feeBips": 0,
                        "tradingFee": "0",
                        "feeTokenID": 0,
                        "maxFee": "0",
                        "type": 0,
                        "gridOffset": "0",
                        "orderOffset": "0",
                        "maxLevel": 0,
                        "useAppKey": 0
                    },
                    "gridOffset": "0",
                    "orderOffset": "0",
                    "maxLevel": 0,
                    "isNoop": 1
                }
            ]
        }
    ],
    "tokens":[0,0,0],
    "bindTokenID": 0
})"_json;

static auto dummyTransfer = R"({
    "fromAccountID": 0,
    "toAccountID": 2,
    "amount": "0",
    "fee": "0",
    "feeTokenID": 0,
    "tokenID": 0,
    "validUntil": 4294967295,
    "maxFee": "0",
    "type": 0,
    "ownerFrom": "0",
    "to": "2",
    "dualAuthorX": "0",
    "dualAuthorY": "0",
    "data": "0",
    "payerToAccountID": 2,
    "payerTo": "2",
    "payeeToAccountID": 2,
    "storageID": "0",
    "putAddressesInDA": false,
    "useAppKey": 0
})"_json;

static auto dummyWithdraw = R"({
    "owner": "0",
    "accountID": 0,
    "tokenID": 0,
    "amount": "0",
    "feeTokenID": 0,
    "fee": "0",
    "validUntil": 4294967295,
    "maxFee": "0",
    "onchainDataHash": "0",
    "type": 0,
    "storageID": "0",
    "useAppKey": 0,
    "minGas": "0",
    "to": "0"
})"_json;

static auto dummyAccountUpdate = R"({
    "owner": "0",
    "accountID": 0,
    "validUntil": 4294967295,
    "publicKeyX": "0",
    "publicKeyY": "0",
    "feeTokenID": 0,
    "fee": "0",
    "maxFee": "0",
    "type": 0
})"_json;

static auto dummyAppKeyUpdate = R"({
    "accountID": 0,
    "validUntil": 4294967295,
    "appKeyPublicKeyX": "0",
    "appKeyPublicKeyY": "0",
    "feeTokenID": 0,
    "fee": "0",
    "maxFee": "0",
    "type": 0,
    "disableAppKeySpotTrade": 0,
    "disableAppKeyWithdraw": 0,
    "disableAppKeyTransferToOther": 0
})"_json;

static auto dummyOrderCancel = R"({
    "accountID": 0,
    "storageID": "0",
    "fee": "0",
    "maxFee": "0",
    "feeTokenID": 0,
    "useAppKey": 0
})"_json;

static auto dummyDeposit = R"({
    "owner": "0",
    "accountID": 0,
    "tokenID": 0,
    "amount": "0",
    "type": 0
})"_json;

// Baby Jubjub base point.
// https://github.com/ethereum/EIPs/blob/41569d75e42da2046cb18fdca79609e18968af47/eip-draft_babyjubjub.md#base-point
static auto dummySignature = R"({
    "Rx": "5299619240641551281634865583518297030282874472190772894086521144482721001553",
    "Ry": "16950150798460657717958625567821834550301663161624707787222815936182638968203",
    "s": "0"
})"_json;

// The sequence of enumeration is defined in the TransactionGadget and should not be modified
enum class TransactionType
{
    Noop = 0,
    Transfer,
    SpotTrade,
    OrderCancel,
    AppKeyUpdate,
    BatchSpotTrade,
    Deposit,
    AccountUpdate,
    Withdrawal,

    COUNT
};

class Proof
{
  public:
    std::vector<ethsnarks::FieldT> data;
};

static void from_json(const json &j, Proof &proof)
{
    for (unsigned int i = 0; i < j.size(); i++)
    {
        proof.data.push_back(ethsnarks::FieldT(j[i].get<std::string>().c_str()));
    }
}

class StorageLeaf
{
  public:
    ethsnarks::FieldT tokenSID;
    ethsnarks::FieldT tokenBID;
    ethsnarks::FieldT data;
    ethsnarks::FieldT storageID;
    ethsnarks::FieldT gasFee;
    ethsnarks::FieldT cancelled;
    ethsnarks::FieldT forward;
};

static void from_json(const json &j, StorageLeaf &leaf)
{
    leaf.tokenSID = ethsnarks::FieldT(j.at("tokenSID").get<std::string>().c_str());
    leaf.tokenBID = ethsnarks::FieldT(j.at("tokenBID").get<std::string>().c_str());
    leaf.data = ethsnarks::FieldT(j.at("data").get<std::string>().c_str());
    leaf.storageID = ethsnarks::FieldT(j.at("storageID").get<std::string>().c_str());
    leaf.gasFee = ethsnarks::FieldT(j.at("gasFee").get<std::string>().c_str());
    leaf.cancelled = ethsnarks::FieldT(j.at("cancelled").get<std::string>().c_str());
    leaf.forward = ethsnarks::FieldT(j.at("forward"));
}

class BalanceLeaf
{
  public:
    ethsnarks::FieldT balance;
};

static void from_json(const json &j, BalanceLeaf &leaf)
{
    leaf.balance = ethsnarks::FieldT(j.at("balance").get<std::string>().c_str());
}

class AccountLeaf
{
  public:
    ethsnarks::FieldT owner;
    ethsnarks::jubjub::EdwardsPoint publicKey;
    ethsnarks::jubjub::EdwardsPoint appKeyPublicKey;
    ethsnarks::FieldT nonce;
    ethsnarks::FieldT disableAppKeySpotTrade;
    ethsnarks::FieldT disableAppKeyWithdraw;
    ethsnarks::FieldT disableAppKeyTransferToOther;
    ethsnarks::FieldT balancesRoot;
    ethsnarks::FieldT storageRoot;
};

static void from_json(const json &j, AccountLeaf &account)
{
    account.owner = ethsnarks::FieldT(j.at("owner").get<std::string>().c_str());
    account.publicKey.x = ethsnarks::FieldT(j.at("publicKeyX").get<std::string>().c_str());
    account.publicKey.y = ethsnarks::FieldT(j.at("publicKeyY").get<std::string>().c_str());
    account.appKeyPublicKey.x = ethsnarks::FieldT(j.at("appKeyPublicKeyX").get<std::string>().c_str());
    account.appKeyPublicKey.y = ethsnarks::FieldT(j.at("appKeyPublicKeyY").get<std::string>().c_str());
    account.nonce = ethsnarks::FieldT(j.at("nonce"));
    account.disableAppKeySpotTrade = ethsnarks::FieldT(j.at("disableAppKeySpotTrade"));
    account.disableAppKeyWithdraw = ethsnarks::FieldT(j.at("disableAppKeyWithdraw"));
    account.disableAppKeyTransferToOther = ethsnarks::FieldT(j.at("disableAppKeyTransferToOther"));
    account.balancesRoot = ethsnarks::FieldT(j.at("balancesRoot").get<std::string>().c_str());
    account.storageRoot = ethsnarks::FieldT(j.at("storageRoot").get<std::string>().c_str());
}

class BalanceUpdate
{
  public:
    ethsnarks::FieldT tokenID;
    Proof proof;
    ethsnarks::FieldT rootBefore;
    ethsnarks::FieldT rootAfter;
    BalanceLeaf before;
    BalanceLeaf after;
};

static void from_json(const json &j, BalanceUpdate &balanceUpdate)
{
    balanceUpdate.tokenID = ethsnarks::FieldT(j.at("tokenID"));
    balanceUpdate.proof = j.at("proof").get<Proof>();
    balanceUpdate.rootBefore = ethsnarks::FieldT(j.at("rootBefore").get<std::string>().c_str());
    balanceUpdate.rootAfter = ethsnarks::FieldT(j.at("rootAfter").get<std::string>().c_str());
    balanceUpdate.before = j.at("before").get<BalanceLeaf>();
    balanceUpdate.after = j.at("after").get<BalanceLeaf>();
}

class StorageUpdate
{
  public:
    ethsnarks::FieldT storageID;
    Proof proof;
    ethsnarks::FieldT rootBefore;
    ethsnarks::FieldT rootAfter;
    StorageLeaf before;
    StorageLeaf after;
};

static void from_json(const json &j, StorageUpdate &storageUpdate)
{
    storageUpdate.storageID = ethsnarks::FieldT(j.at("storageID").get<std::string>().c_str());
    storageUpdate.proof = j.at("proof").get<Proof>();
    storageUpdate.rootBefore = ethsnarks::FieldT(j.at("rootBefore").get<std::string>().c_str());
    storageUpdate.rootAfter = ethsnarks::FieldT(j.at("rootAfter").get<std::string>().c_str());
    storageUpdate.before = j.at("before").get<StorageLeaf>();
    storageUpdate.after = j.at("after").get<StorageLeaf>();
}

class AccountUpdate
{
  public:
    ethsnarks::FieldT accountID;
    Proof proof;
    Proof assetProof;
    ethsnarks::FieldT rootBefore;
    ethsnarks::FieldT rootAfter;
    ethsnarks::FieldT assetRootBefore;
    ethsnarks::FieldT assetRootAfter;
    AccountLeaf before;
    AccountLeaf after;
};

static void from_json(const json &j, AccountUpdate &accountUpdate)
{
    accountUpdate.accountID = ethsnarks::FieldT(j.at("accountID"));
    accountUpdate.proof = j.at("proof").get<Proof>();
    accountUpdate.assetProof = j.at("assetProof").get<Proof>();
    accountUpdate.rootBefore = ethsnarks::FieldT(j.at("rootBefore").get<std::string>().c_str());
    accountUpdate.rootAfter = ethsnarks::FieldT(j.at("rootAfter").get<std::string>().c_str());
    accountUpdate.assetRootBefore = ethsnarks::FieldT(j.at("assetRootBefore").get<std::string>().c_str());
    accountUpdate.assetRootAfter = ethsnarks::FieldT(j.at("assetRootAfter").get<std::string>().c_str());
    accountUpdate.before = j.at("before").get<AccountLeaf>();
    accountUpdate.after = j.at("after").get<AccountLeaf>();
}

class Signature
{
  public:
    Signature()
    {
    }

    Signature(ethsnarks::jubjub::EdwardsPoint _R, ethsnarks::FieldT _s) : R(_R), s(_s)
    {
    }

    ethsnarks::jubjub::EdwardsPoint R;
    ethsnarks::FieldT s;
};

static void from_json(const json &j, Signature &signature)
{
    signature.R.x = ethsnarks::FieldT(j.at("Rx").get<std::string>().c_str());
    signature.R.y = ethsnarks::FieldT(j.at("Ry").get<std::string>().c_str());
    signature.s = ethsnarks::FieldT(j.at("s").get<std::string>().c_str());
}

class AutoMarketOrder
{
  public:
    ethsnarks::FieldT storageID;
    ethsnarks::FieldT accountID;
    ethsnarks::FieldT tokenS;
    ethsnarks::FieldT tokenB;
    ethsnarks::FieldT amountS;
    ethsnarks::FieldT amountB;
    ethsnarks::FieldT validUntil;
    ethsnarks::FieldT fillAmountBorS;
    ethsnarks::FieldT taker;

    ethsnarks::FieldT feeBips;
    ethsnarks::FieldT tradingFee;
    ethsnarks::FieldT feeTokenID;
    ethsnarks::FieldT maxFee;

    ethsnarks::FieldT type;
    ethsnarks::FieldT gridOffset;
    ethsnarks::FieldT orderOffset;
    ethsnarks::FieldT maxLevel;

    ethsnarks::FieldT useAppKey;
    
};

static void from_json(const json &j, AutoMarketOrder &order)
{
    order.storageID = ethsnarks::FieldT(j.at("storageID").get<std::string>().c_str());
    order.accountID = ethsnarks::FieldT(j.at("accountID"));
    order.tokenS = ethsnarks::FieldT(j.at("tokenS"));
    order.tokenB = ethsnarks::FieldT(j.at("tokenB"));
    order.amountS = ethsnarks::FieldT(j.at("amountS").get<std::string>().c_str());
    order.amountB = ethsnarks::FieldT(j.at("amountB").get<std::string>().c_str());
    order.validUntil = ethsnarks::FieldT(j.at("validUntil"));
    order.fillAmountBorS = ethsnarks::FieldT(j.at("fillAmountBorS").get<bool>() ? 1 : 0);
    order.taker = ethsnarks::FieldT(j.at("taker").get<std::string>().c_str());

    order.feeBips = ethsnarks::FieldT(j.at("feeBips"));
    order.tradingFee = ethsnarks::FieldT(j.at("tradingFee").get<std::string>().c_str());

    order.feeTokenID = ethsnarks::FieldT(j.at("feeTokenID"));
    order.maxFee = ethsnarks::FieldT(j.at("maxFee").get<std::string>().c_str());
    order.type = ethsnarks::FieldT(j.at("type"));
    order.gridOffset = ethsnarks::FieldT(j.at("gridOffset").get<std::string>().c_str());
    order.orderOffset = ethsnarks::FieldT(j.at("orderOffset").get<std::string>().c_str());
    order.maxLevel = ethsnarks::FieldT(j.at("maxLevel"));

    order.useAppKey = ethsnarks::FieldT(j.at("useAppKey"));
}

class Order
{
  public:
    ethsnarks::FieldT storageID;
    ethsnarks::FieldT accountID;
    ethsnarks::FieldT tokenS;
    ethsnarks::FieldT tokenB;
    ethsnarks::FieldT amountS;
    ethsnarks::FieldT amountB;
    ethsnarks::FieldT deltaFilledS;
    ethsnarks::FieldT deltaFilledB;
    ethsnarks::FieldT validUntil;
    ethsnarks::FieldT fillAmountBorS;
    ethsnarks::FieldT taker;

    ethsnarks::FieldT feeBips;
    ethsnarks::FieldT tradingFee;
    ethsnarks::FieldT feeTokenID;
    ethsnarks::FieldT fee;
    ethsnarks::FieldT maxFee;

    ethsnarks::FieldT type;
    ethsnarks::FieldT level;
    AutoMarketOrder startOrder;
    ethsnarks::FieldT gridOffset;
    ethsnarks::FieldT orderOffset;
    ethsnarks::FieldT maxLevel;

    ethsnarks::FieldT useAppKey;

    ethsnarks::FieldT isNoop;
};

static void from_json(const json &j, Order &order)
{
    order.isNoop = ethsnarks::FieldT(j.at("isNoop"));

    order.storageID = ethsnarks::FieldT(j.at("storageID").get<std::string>().c_str());
    order.accountID = ethsnarks::FieldT(j.at("accountID"));
    order.tokenS = ethsnarks::FieldT(j.at("tokenS"));
    order.tokenB = ethsnarks::FieldT(j.at("tokenB"));
    order.amountS = ethsnarks::FieldT(j.at("amountS").get<std::string>().c_str());
    order.amountB = ethsnarks::FieldT(j.at("amountB").get<std::string>().c_str());
    order.deltaFilledS = ethsnarks::FieldT(j.at("deltaFilledS").get<std::string>().c_str());
    order.deltaFilledB = ethsnarks::FieldT(j.at("deltaFilledB").get<std::string>().c_str());
    order.validUntil = ethsnarks::FieldT(j.at("validUntil"));
    order.fillAmountBorS = ethsnarks::FieldT(j.at("fillAmountBorS").get<bool>() ? 1 : 0);
    order.taker = ethsnarks::FieldT(j.at("taker").get<std::string>().c_str());

    order.feeBips = ethsnarks::FieldT(j.at("feeBips"));
    order.tradingFee = ethsnarks::FieldT(j.at("tradingFee").get<std::string>().c_str());

    order.feeTokenID = ethsnarks::FieldT(j.at("feeTokenID"));
    order.fee = ethsnarks::FieldT(j.at("fee").get<std::string>().c_str());
    order.maxFee = ethsnarks::FieldT(j.at("maxFee").get<std::string>().c_str());

    order.type = ethsnarks::FieldT(j.at("type"));
    order.level = ethsnarks::FieldT(j.at("level"));
    order.gridOffset = ethsnarks::FieldT(j.at("gridOffset").get<std::string>().c_str());
    order.orderOffset = ethsnarks::FieldT(j.at("orderOffset").get<std::string>().c_str());
    order.maxLevel = ethsnarks::FieldT(j.at("maxLevel"));
    
    order.useAppKey = ethsnarks::FieldT(j.at("useAppKey"));
    if (order.type == ethsnarks::FieldT(6) || order.type == ethsnarks::FieldT(7)) {
        order.startOrder = j.at("startOrder").get<AutoMarketOrder>();
    }
}

class SpotTrade
{
  public:
    Order orderA;
    Order orderB;
    ethsnarks::FieldT fillS_A;
    ethsnarks::FieldT fillS_B;
};

static void from_json(const json &j, SpotTrade &spotTrade)
{
    spotTrade.orderA = j.at("orderA").get<Order>();
    spotTrade.orderB = j.at("orderB").get<Order>();
    spotTrade.fillS_A = ethsnarks::FieldT(j["fFillS_A"]);
    spotTrade.fillS_B = ethsnarks::FieldT(j["fFillS_B"]);
}

class BatchSpotTradeUser
{
  public:
    ethsnarks::FieldT accountID;
    ethsnarks::FieldT isNoop;
    std::vector<Loopring::Order> orders;
};

static void from_json(const json &j, BatchSpotTradeUser &batchSpotTradeUser)
{
    batchSpotTradeUser.isNoop = ethsnarks::FieldT(j["isNoop"]);
    batchSpotTradeUser.accountID = ethsnarks::FieldT(j["accountID"]);

    json jOrders = j["orders"];
    unsigned int size = 0;
    if (j.contains("size")) {
        size = int(j["size"]);
    } else {
        size = ORDER_SIZE_USER_C;
    }
    
    for (unsigned int i = 0; i < jOrders.size(); i++)
    {
        batchSpotTradeUser.orders.emplace_back(jOrders[i].get<Loopring::Order>());
    }
    for (unsigned int i = 0; i < size - jOrders.size(); i++) 
    {
        batchSpotTradeUser.orders.emplace_back(dummyBatchSpotTradeOrder.get<Loopring::Order>());
    }
}

class BatchSpotTrade
{
  public:
    std::vector<Loopring::BatchSpotTradeUser> users;
    std::vector<ethsnarks::FieldT> tokens;
    ethsnarks::FieldT bindTokenID;
};

static void from_json(const json &j, BatchSpotTrade &batchSpotTrade)
{
    batchSpotTrade.bindTokenID = ethsnarks::FieldT(j["bindTokenID"]);

    json jUsers = j["users"];
    for (unsigned int i = 0; i < jUsers.size(); i++)
    {
        if (i == 0) {
            jUsers[i]["size"] = ORDER_SIZE_USER_A;
        } else if (i == 1) {
            jUsers[i]["size"] = ORDER_SIZE_USER_B;
        } else if (i == 2) {
            jUsers[i]["size"] = ORDER_SIZE_USER_C;
        } else if (i == 3) {
            jUsers[i]["size"] = ORDER_SIZE_USER_D;
        } else if (i == 4) {
            jUsers[i]["size"] = ORDER_SIZE_USER_E;
        } else if (i == 5) {
            jUsers[i]["size"] = ORDER_SIZE_USER_F;
        }
        
        batchSpotTrade.users.emplace_back(jUsers[i].get<Loopring::BatchSpotTradeUser>());
    }
    for (unsigned int i = jUsers.size(); i < BATCH_SPOT_TRADE_MAX_USER; i++) 
    {
        batchSpotTrade.users.emplace_back(dummyBatchSpotTradeUser.get<Loopring::BatchSpotTradeUser>());
    }
    json jTokens = j["tokens"];
    for (unsigned int i = 0; i < BATCH_SPOT_TRADE_MAX_TOKENS; i++)
    {
        batchSpotTrade.tokens.emplace_back(ethsnarks::FieldT(jTokens[i]));
    }
}

class Deposit
{
  public:
    ethsnarks::FieldT owner;
    ethsnarks::FieldT accountID;
    ethsnarks::FieldT tokenID;
    ethsnarks::FieldT amount;
    ethsnarks::FieldT type;
};

static void from_json(const json &j, Deposit &deposit)
{
    deposit.owner = ethsnarks::FieldT(j.at("owner").get<std::string>().c_str());
    deposit.accountID = ethsnarks::FieldT(j.at("accountID"));
    deposit.tokenID = ethsnarks::FieldT(j.at("tokenID"));
    deposit.amount = ethsnarks::FieldT(j.at("amount").get<std::string>().c_str());
    deposit.type = ethsnarks::FieldT(j.at("type"));
}

class Withdrawal
{
  public:
    ethsnarks::FieldT accountID;
    ethsnarks::FieldT tokenID;
    ethsnarks::FieldT amount;
    ethsnarks::FieldT feeTokenID;
    ethsnarks::FieldT fee;
    ethsnarks::FieldT onchainDataHash;
    ethsnarks::FieldT storageID;
    ethsnarks::FieldT validUntil;
    ethsnarks::FieldT maxFee;
    ethsnarks::FieldT type;
    ethsnarks::FieldT useAppKey;
    ethsnarks::FieldT minGas;
    ethsnarks::FieldT to;
};

static void from_json(const json &j, Withdrawal &withdrawal)
{
    withdrawal.accountID = ethsnarks::FieldT(j.at("accountID"));
    withdrawal.tokenID = ethsnarks::FieldT(j.at("tokenID"));
    withdrawal.amount = ethsnarks::FieldT(j["amount"].get<std::string>().c_str());
    withdrawal.feeTokenID = ethsnarks::FieldT(j.at("feeTokenID"));
    withdrawal.fee = ethsnarks::FieldT(j["fee"].get<std::string>().c_str());
    withdrawal.onchainDataHash = ethsnarks::FieldT(j["onchainDataHash"].get<std::string>().c_str());
    withdrawal.storageID = ethsnarks::FieldT(j["storageID"].get<std::string>().c_str());
    withdrawal.validUntil = ethsnarks::FieldT(j.at("validUntil"));
    withdrawal.maxFee = ethsnarks::FieldT(j["maxFee"].get<std::string>().c_str());
    withdrawal.type = ethsnarks::FieldT(j.at("type"));
    withdrawal.useAppKey = ethsnarks::FieldT(j.at("useAppKey"));

    withdrawal.minGas = ethsnarks::FieldT(j["minGas"].get<std::string>().c_str());
    withdrawal.to = ethsnarks::FieldT(j["to"].get<std::string>().c_str());
}

class AccountUpdateTx
{
  public:
    ethsnarks::FieldT owner;
    ethsnarks::FieldT accountID;
    ethsnarks::FieldT publicKeyX;
    ethsnarks::FieldT publicKeyY;
    ethsnarks::FieldT feeTokenID;
    ethsnarks::FieldT fee;
    ethsnarks::FieldT maxFee;
    ethsnarks::FieldT validUntil;
    ethsnarks::FieldT type;
};

static void from_json(const json &j, AccountUpdateTx &update)
{
    update.owner = ethsnarks::FieldT(j.at("owner").get<std::string>().c_str());
    update.accountID = ethsnarks::FieldT(j.at("accountID"));
    update.publicKeyX = ethsnarks::FieldT(j["publicKeyX"].get<std::string>().c_str());
    update.publicKeyY = ethsnarks::FieldT(j["publicKeyY"].get<std::string>().c_str());
    update.feeTokenID = ethsnarks::FieldT(j.at("feeTokenID"));
    update.fee = ethsnarks::FieldT(j["fee"].get<std::string>().c_str());
    update.maxFee = ethsnarks::FieldT(j["maxFee"].get<std::string>().c_str());
    update.validUntil = ethsnarks::FieldT(j.at("validUntil"));
    update.type = ethsnarks::FieldT(j.at("type"));
}
class AppKeyUpdate
{
  public:
    ethsnarks::FieldT accountID;
    ethsnarks::FieldT appKeyPublicKeyX;
    ethsnarks::FieldT appKeyPublicKeyY;
    ethsnarks::FieldT feeTokenID;
    ethsnarks::FieldT fee;
    ethsnarks::FieldT maxFee;
    ethsnarks::FieldT validUntil;
    ethsnarks::FieldT disableAppKeySpotTrade;
    ethsnarks::FieldT disableAppKeyWithdraw;
    ethsnarks::FieldT disableAppKeyTransferToOther;
};

static void from_json(const json &j, AppKeyUpdate &update)
{
    update.accountID = ethsnarks::FieldT(j.at("accountID"));
    update.appKeyPublicKeyX = ethsnarks::FieldT(j["appKeyPublicKeyX"].get<std::string>().c_str());
    update.appKeyPublicKeyY = ethsnarks::FieldT(j["appKeyPublicKeyY"].get<std::string>().c_str());
    update.feeTokenID = ethsnarks::FieldT(j.at("feeTokenID"));
    update.fee = ethsnarks::FieldT(j["fee"].get<std::string>().c_str());
    update.maxFee = ethsnarks::FieldT(j["maxFee"].get<std::string>().c_str());
    update.validUntil = ethsnarks::FieldT(j.at("validUntil"));
    update.disableAppKeySpotTrade = ethsnarks::FieldT(j.at("disableAppKeySpotTrade"));
    update.disableAppKeyWithdraw = ethsnarks::FieldT(j.at("disableAppKeyWithdraw"));
    update.disableAppKeyTransferToOther = ethsnarks::FieldT(j.at("disableAppKeyTransferToOther"));
}

class OrderCancel
{
  public:
    ethsnarks::FieldT accountID;
    ethsnarks::FieldT storageID;
    ethsnarks::FieldT fee;
    ethsnarks::FieldT maxFee;
    ethsnarks::FieldT feeTokenID;
    ethsnarks::FieldT useAppKey;
};
static void from_json(const json &j, OrderCancel &update)
{
    update.accountID = ethsnarks::FieldT(j.at("accountID"));
    update.storageID = ethsnarks::FieldT(j["storageID"].get<std::string>().c_str());
    update.fee = ethsnarks::FieldT(j["fee"].get<std::string>().c_str());
    update.maxFee = ethsnarks::FieldT(j["maxFee"].get<std::string>().c_str());
    update.feeTokenID = ethsnarks::FieldT(j.at("feeTokenID"));
    update.useAppKey = ethsnarks::FieldT(j.at("useAppKey"));
}

class Transfer
{
  public:
    ethsnarks::FieldT fromAccountID;
    ethsnarks::FieldT toAccountID;
    ethsnarks::FieldT tokenID;
    ethsnarks::FieldT amount;
    ethsnarks::FieldT feeTokenID;
    ethsnarks::FieldT fee;
    ethsnarks::FieldT validUntil;
    ethsnarks::FieldT to;
    ethsnarks::FieldT dualAuthorX;
    ethsnarks::FieldT dualAuthorY;
    ethsnarks::FieldT storageID;
    ethsnarks::FieldT payerToAccountID;
    ethsnarks::FieldT payerTo;
    ethsnarks::FieldT payeeToAccountID;
    ethsnarks::FieldT maxFee;
    ethsnarks::FieldT putAddressesInDA;
    ethsnarks::FieldT type;
    ethsnarks::FieldT useAppKey;
};

static void from_json(const json &j, Transfer &transfer)
{
    transfer.fromAccountID = ethsnarks::FieldT(j.at("fromAccountID"));
    transfer.toAccountID = ethsnarks::FieldT(j.at("toAccountID"));
    transfer.tokenID = ethsnarks::FieldT(j.at("tokenID"));
    transfer.amount = ethsnarks::FieldT(j["amount"].get<std::string>().c_str());
    transfer.feeTokenID = ethsnarks::FieldT(j.at("feeTokenID"));
    transfer.fee = ethsnarks::FieldT(j["fee"].get<std::string>().c_str());
    transfer.validUntil = ethsnarks::FieldT(j.at("validUntil"));
    transfer.to = ethsnarks::FieldT(j["to"].get<std::string>().c_str());
    transfer.dualAuthorX = ethsnarks::FieldT(j["dualAuthorX"].get<std::string>().c_str());
    transfer.dualAuthorY = ethsnarks::FieldT(j["dualAuthorY"].get<std::string>().c_str());
    transfer.storageID = ethsnarks::FieldT(j["storageID"].get<std::string>().c_str());
    transfer.payerToAccountID = ethsnarks::FieldT(j.at("payerToAccountID"));
    transfer.payerTo = ethsnarks::FieldT(j["payerTo"].get<std::string>().c_str());
    transfer.payeeToAccountID = ethsnarks::FieldT(j.at("payeeToAccountID"));
    transfer.maxFee = ethsnarks::FieldT(j["maxFee"].get<std::string>().c_str());
    transfer.putAddressesInDA = ethsnarks::FieldT(j.at("putAddressesInDA").get<bool>() ? 1 : 0);
    transfer.type = ethsnarks::FieldT(j.at("type"));
    transfer.useAppKey = ethsnarks::FieldT(j.at("useAppKey"));
}

class Witness
{
  public:
    StorageUpdate storageUpdate_A;
    std::vector<StorageUpdate> storageUpdate_A_array;
    StorageUpdate storageUpdate_B;
    std::vector<StorageUpdate> storageUpdate_B_array;

    // UserA
    BalanceUpdate balanceUpdateS_A;
    BalanceUpdate balanceUpdateB_A;
    BalanceUpdate balanceUpdateFee_A;
    AccountUpdate accountUpdate_A;

    // UserB
    BalanceUpdate balanceUpdateS_B;
    BalanceUpdate balanceUpdateB_B;
    BalanceUpdate balanceUpdateFee_B;
    AccountUpdate accountUpdate_B;

    // UserC
    std::vector<StorageUpdate> storageUpdate_C_array;

    BalanceUpdate balanceUpdateS_C;
    BalanceUpdate balanceUpdateB_C;
    BalanceUpdate balanceUpdateFee_C;

    AccountUpdate accountUpdate_C;

    // UserD
    std::vector<StorageUpdate> storageUpdate_D_array;

    BalanceUpdate balanceUpdateS_D;
    BalanceUpdate balanceUpdateB_D;
    BalanceUpdate balanceUpdateFee_D;
    
    AccountUpdate accountUpdate_D;

    // UserE
    std::vector<StorageUpdate> storageUpdate_E_array;

    BalanceUpdate balanceUpdateS_E;
    BalanceUpdate balanceUpdateB_E;
    BalanceUpdate balanceUpdateFee_E;
    
    AccountUpdate accountUpdate_E;

    // UserF
    std::vector<StorageUpdate> storageUpdate_F_array;

    BalanceUpdate balanceUpdateS_F;
    BalanceUpdate balanceUpdateB_F;
    BalanceUpdate balanceUpdateFee_F;
    
    AccountUpdate accountUpdate_F;

    BalanceUpdate balanceUpdateA_O;
    BalanceUpdate balanceUpdateB_O;
    BalanceUpdate balanceUpdateC_O;
    BalanceUpdate balanceUpdateD_O;
    AccountUpdate accountUpdate_O;

    Signature signatureA;
    Signature signatureB;
    std::vector<std::vector<Signature>> signatureArray;

    ethsnarks::FieldT numConditionalTransactionsAfter;
};

static void from_json(const json &j, Witness &state)
{
    state.storageUpdate_A = j.at("storageUpdate_A").get<StorageUpdate>();
    // User A Array
    json jStorageAArray = j["storageUpdate_A_array"];
    for (unsigned int i = 0; i < jStorageAArray.size(); i++)
    {
        state.storageUpdate_A_array.emplace_back(jStorageAArray[i].get<StorageUpdate>());
    }

    state.storageUpdate_B = j.at("storageUpdate_B").get<StorageUpdate>();
    // User B Array
    json jStorageBArray = j["storageUpdate_B_array"];
    for (unsigned int i = 0; i < jStorageBArray.size(); i++)
    {
        state.storageUpdate_B_array.emplace_back(jStorageBArray[i].get<StorageUpdate>());
    }

    state.balanceUpdateS_A = j.at("balanceUpdateS_A").get<BalanceUpdate>();
    state.balanceUpdateB_A = j.at("balanceUpdateB_A").get<BalanceUpdate>();
    state.balanceUpdateFee_A = j.at("balanceUpdateFee_A").get<BalanceUpdate>();
    state.accountUpdate_A = j.at("accountUpdate_A").get<AccountUpdate>();

    state.balanceUpdateS_B = j.at("balanceUpdateS_B").get<BalanceUpdate>();
    state.balanceUpdateB_B = j.at("balanceUpdateB_B").get<BalanceUpdate>();
    state.balanceUpdateFee_B = j.at("balanceUpdateFee_B").get<BalanceUpdate>();
    state.accountUpdate_B = j.at("accountUpdate_B").get<AccountUpdate>();

    // User C Array
    if (j.contains("storageUpdate_C_array")) 
    {
        json jStorageCArray = j["storageUpdate_C_array"];
        for (unsigned int i = 0; i < jStorageCArray.size(); i++)
        {
            state.storageUpdate_C_array.emplace_back(jStorageCArray[i].get<StorageUpdate>());
        }
    }
    state.balanceUpdateS_C = j.at("balanceUpdateS_C").get<BalanceUpdate>();
    state.balanceUpdateB_C = j.at("balanceUpdateB_C").get<BalanceUpdate>();
    state.balanceUpdateFee_C = j.at("balanceUpdateFee_C").get<BalanceUpdate>();
    state.accountUpdate_C = j.at("accountUpdate_C").get<AccountUpdate>();

    // User D Array
    if (j.contains("storageUpdate_D_array")) 
    {
        json jStorageDArray = j["storageUpdate_D_array"];
        for (unsigned int i = 0; i < jStorageDArray.size(); i++)
        {
            state.storageUpdate_D_array.emplace_back(jStorageDArray[i].get<StorageUpdate>());
        }
    }
    
    state.balanceUpdateS_D = j.at("balanceUpdateS_D").get<BalanceUpdate>();
    state.balanceUpdateB_D = j.at("balanceUpdateB_D").get<BalanceUpdate>();
    state.balanceUpdateFee_D = j.at("balanceUpdateFee_D").get<BalanceUpdate>();
    state.accountUpdate_D = j.at("accountUpdate_D").get<AccountUpdate>();

    // User E Array
    if (j.contains("storageUpdate_E_array")) 
    {
        json jStorageEArray = j["storageUpdate_E_array"];
        for (unsigned int i = 0; i < jStorageEArray.size(); i++)
        {
            state.storageUpdate_E_array.emplace_back(jStorageEArray[i].get<StorageUpdate>());
        }
    }
    
    state.balanceUpdateS_E = j.at("balanceUpdateS_E").get<BalanceUpdate>();
    state.balanceUpdateB_E = j.at("balanceUpdateB_E").get<BalanceUpdate>();
    state.balanceUpdateFee_E = j.at("balanceUpdateFee_E").get<BalanceUpdate>();
    state.accountUpdate_E = j.at("accountUpdate_E").get<AccountUpdate>();

    // User F Array
    if (j.contains("storageUpdate_F_array")) 
    {
        json jStorageFArray = j["storageUpdate_F_array"];
        for (unsigned int i = 0; i < jStorageFArray.size(); i++)
        {
            state.storageUpdate_F_array.emplace_back(jStorageFArray[i].get<StorageUpdate>());
        }
    }
    
    state.balanceUpdateS_F = j.at("balanceUpdateS_F").get<BalanceUpdate>();
    state.balanceUpdateB_F = j.at("balanceUpdateB_F").get<BalanceUpdate>();
    state.balanceUpdateFee_F = j.at("balanceUpdateFee_F").get<BalanceUpdate>();
    state.accountUpdate_F = j.at("accountUpdate_F").get<AccountUpdate>();


    state.balanceUpdateD_O = j.at("balanceUpdateD_O").get<BalanceUpdate>();
    state.balanceUpdateC_O = j.at("balanceUpdateC_O").get<BalanceUpdate>();
    state.balanceUpdateB_O = j.at("balanceUpdateB_O").get<BalanceUpdate>();
    state.balanceUpdateA_O = j.at("balanceUpdateA_O").get<BalanceUpdate>();
    state.accountUpdate_O = j.at("accountUpdate_O").get<AccountUpdate>();

    state.signatureA = dummySignature.get<Signature>();
    state.signatureB = dummySignature.get<Signature>();


    for (unsigned int i = 0; i < BATCH_SPOT_TRADE_MAX_USER; i++)
    {
        std::vector<Signature> userSignatureArray;
        state.signatureArray.emplace_back(userSignatureArray);
        for (unsigned int j = 0; j < ORDER_SIZE_USER_MAX; j++) 
        {
            state.signatureArray[i].emplace_back(dummySignature.get<Signature>());
        }
    }

    state.numConditionalTransactionsAfter = ethsnarks::FieldT(j.at("numConditionalTransactionsAfter"));

    if (j.contains("signatureA"))
    {
        state.signatureA = j.at("signatureA").get<Signature>();
    }
    if (j.contains("signatureB"))
    {
        state.signatureB = j.at("signatureB").get<Signature>();
    }
    else
    {
        state.signatureB = state.signatureA;
    }

    if (j.contains("signatures")) 
    {
        json signatures = j["signatures"];
        for (unsigned int i = 0; i < signatures.size(); i++)
        {
            for (unsigned int j = 0; j < signatures[i].size(); j++) 
            {
                if (signatures[i][j].contains("Rx")) {
                    state.signatureArray[i][j] = signatures[i][j].get<Signature>();
                }
            }
        }
    }
    
}

class UniversalTransaction
{
  public:
    Witness witness;
    ethsnarks::FieldT type;
    SpotTrade spotTrade;
    BatchSpotTrade batchSpotTrade;
    Transfer transfer;
    Withdrawal withdraw;
    Deposit deposit;
    AccountUpdateTx accountUpdate;
    AppKeyUpdate appKeyUpdate;
    OrderCancel orderCancel;
};

static void from_json(const json &j, UniversalTransaction &transaction)
{
    transaction.witness = j.at("witness").get<Witness>();

    // Fill in dummy data for all tx types
    transaction.spotTrade = dummySpotTrade.get<Loopring::SpotTrade>();
    transaction.batchSpotTrade = dummyBatchSpotTrade.get<Loopring::BatchSpotTrade>();
    transaction.transfer = dummyTransfer.get<Loopring::Transfer>();
    transaction.withdraw = dummyWithdraw.get<Loopring::Withdrawal>();
    transaction.deposit = dummyDeposit.get<Loopring::Deposit>();
    transaction.accountUpdate = dummyAccountUpdate.get<Loopring::AccountUpdateTx>();
    transaction.orderCancel = dummyOrderCancel.get<Loopring::OrderCancel>();
    transaction.appKeyUpdate = dummyAppKeyUpdate.get<Loopring::AppKeyUpdate>();

    // Patch some of the dummy tx's so they are valid against the current state
    // Deposit
    transaction.deposit.owner = transaction.witness.accountUpdate_A.before.owner;
    // AccountUpdate
    transaction.accountUpdate.owner = transaction.witness.accountUpdate_A.before.owner;

    // Transfer
    transaction.transfer.to = transaction.witness.accountUpdate_B.before.owner;
    transaction.transfer.payerTo = transaction.witness.accountUpdate_B.before.owner;

    // storageID will be verified in OrderCancel
    transaction.orderCancel.storageID = transaction.witness.storageUpdate_A.before.storageID;

    // Now get the actual transaction data
    if (j.contains("noop"))
    {
        transaction.type = ethsnarks::FieldT(int(Loopring::TransactionType::Noop));
    }
    if (j.contains("spotTrade"))
    {
        transaction.type = ethsnarks::FieldT(int(Loopring::TransactionType::SpotTrade));
        transaction.spotTrade = j.at("spotTrade").get<Loopring::SpotTrade>();
    }
    else if (j.contains("batchSpotTrade"))
    {
        transaction.type = ethsnarks::FieldT(int(Loopring::TransactionType::BatchSpotTrade));
        transaction.batchSpotTrade = j.at("batchSpotTrade").get<Loopring::BatchSpotTrade>();
    }
    else if (j.contains("transfer"))
    {
        transaction.type = ethsnarks::FieldT(int(Loopring::TransactionType::Transfer));
        transaction.transfer = j.at("transfer").get<Loopring::Transfer>();
    }
    else if (j.contains("withdraw"))
    {
        transaction.type = ethsnarks::FieldT(int(Loopring::TransactionType::Withdrawal));
        transaction.withdraw = j.at("withdraw").get<Loopring::Withdrawal>();
    }
    else if (j.contains("deposit"))
    {
        transaction.type = ethsnarks::FieldT(int(Loopring::TransactionType::Deposit));
        transaction.deposit = j.at("deposit").get<Loopring::Deposit>();
    }
    else if (j.contains("accountUpdate"))
    {
        transaction.type = ethsnarks::FieldT(int(Loopring::TransactionType::AccountUpdate));
        transaction.accountUpdate = j.at("accountUpdate").get<Loopring::AccountUpdateTx>();
    }
    else if (j.contains("orderCancel"))
    {
        transaction.type = ethsnarks::FieldT(int(Loopring::TransactionType::OrderCancel));
        transaction.orderCancel = j.at("orderCancel").get<Loopring::OrderCancel>();
    }
    else if (j.contains("appKeyUpdate"))
    {
        transaction.type = ethsnarks::FieldT(int(Loopring::TransactionType::AppKeyUpdate));
        transaction.appKeyUpdate = j.at("appKeyUpdate").get<Loopring::AppKeyUpdate>();
    }
}

class Block
{
  public:
    ethsnarks::FieldT exchange;

    ethsnarks::FieldT merkleRootBefore;
    ethsnarks::FieldT merkleRootAfter;

    ethsnarks::FieldT merkleAssetRootBefore;
    ethsnarks::FieldT merkleAssetRootAfter;

    ethsnarks::FieldT timestamp;

    ethsnarks::FieldT protocolFeeBips;

    Signature signature;

    AccountUpdate accountUpdate_P;

    ethsnarks::FieldT operatorAccountID;
    AccountUpdate accountUpdate_O;

    std::vector<Loopring::UniversalTransaction> transactions;
};

static void from_json(const json &j, Block &block)
{
    block.exchange = ethsnarks::FieldT(j["exchange"].get<std::string>().c_str());

    block.merkleRootBefore = ethsnarks::FieldT(j["merkleRootBefore"].get<std::string>().c_str());
    block.merkleRootAfter = ethsnarks::FieldT(j["merkleRootAfter"].get<std::string>().c_str());

    block.merkleAssetRootBefore = ethsnarks::FieldT(j["merkleAssetRootBefore"].get<std::string>().c_str());
    block.merkleAssetRootAfter = ethsnarks::FieldT(j["merkleAssetRootAfter"].get<std::string>().c_str());

    block.timestamp = ethsnarks::FieldT(j["timestamp"].get<unsigned int>());

    block.protocolFeeBips = ethsnarks::FieldT(j["protocolFeeBips"].get<unsigned int>());

    block.signature = j.at("signature").get<Signature>();
    block.accountUpdate_P = j.at("accountUpdate_P").get<AccountUpdate>();

    block.operatorAccountID = ethsnarks::FieldT(j.at("operatorAccountID"));
    block.accountUpdate_O = j.at("accountUpdate_O").get<AccountUpdate>();

    // Read transactions
    json jTransactions = j["transactions"];
    for (unsigned int i = 0; i < jTransactions.size(); i++)
    {
        block.transactions.emplace_back(jTransactions[i].get<Loopring::UniversalTransaction>());
    }
}

} // namespace Loopring

#endif
