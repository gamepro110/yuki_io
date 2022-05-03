// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <yuki_io/BaseTypes/ItemEffectBase.h>
#include <yuki_io/BaseTypes/DamagebleBase.h>
#include "DamageEffect.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class YUKI_IO_API UDamageEffect : public UItemEffectBase
{
	GENERATED_BODY()

public:
	UDamageEffect();

	UPROPERTY(EditAnywhere, Category = "ItemEffect")
		int dmgAmount;

public:
	virtual void ActivateEffect(AActor* tarrgetActor) override;
};
