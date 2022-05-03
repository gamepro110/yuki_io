// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include <yuki_io/BaseTypes/DamagebleBase.h>

#include "PlayerDamageble.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class YUKI_IO_API UPlayerDamageble : public UDamagebleBase {
	GENERATED_BODY()

public:
	UPlayerDamageble();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Die() override;
};
