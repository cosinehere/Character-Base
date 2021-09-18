/**
 * @file CharacterBase.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#pragma once

#ifndef _CHARACTERBASE_H_
#define _CHARACTERBASE_H_

class CharacterBase {
    virtual ~CharacterBase() = default;

    virtual void LoadCharacter() = 0;

    virtual void GetProperty() = 0;
    virtual void SetProperty() = 0;

    virtual void Equip() = 0;
    virtual void Unequip() = 0;

    virtual void Buff() = 0;
    virtual void Debuff() = 0;
};


#endif
