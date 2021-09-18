/**
 * @file EquipmentBase.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#pragma once

#ifndef _EQUIPMENTBASE_H_
#define _EQUIPMENTBASE_H_

class EquipmentBase {
    virtual ~EquipmentBase() = default;

    virtual void AddMod() = 0;
    virtual void GetMod() = 0;
    virtual void ApplyMod() = 0;
};

#endif