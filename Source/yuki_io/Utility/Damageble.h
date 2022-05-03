// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Damageble.generated.h"

UINTERFACE(MinimalAPI)
class UDamageble : public UInterface {
	GENERATED_BODY()
};

class YUKI_IO_API IDamageble {
	GENERATED_BODY()

public:
	virtual void Heal(int value) = 0;
	virtual void TakeDamage(int value) = 0;
	virtual void Die() = 0;
};
