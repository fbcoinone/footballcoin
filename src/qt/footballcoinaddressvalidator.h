// Copyright (c) 2011-2014 The FootBallcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FOOTBALLCOIN_QT_FOOTBALLCOINADDRESSVALIDATOR_H
#define FOOTBALLCOIN_QT_FOOTBALLCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class FootBallcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FootBallcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** FootBallcoin address widget validator, checks for a valid footballcoin address.
 */
class FootBallcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit FootBallcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // FOOTBALLCOIN_QT_FOOTBALLCOINADDRESSVALIDATOR_H
